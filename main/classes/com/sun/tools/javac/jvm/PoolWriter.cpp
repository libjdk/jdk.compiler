#include <com/sun/tools/javac/jvm/PoolWriter.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassWriter$PoolOverflow.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StringOverflow.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic$BsmKey.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant$NameAndType.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/jvm/PoolWriter$SharedSignatureGenerator.h>
#include <com/sun/tools/javac/jvm/PoolWriter$WriteablePoolHelper.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef MAX_ENTRIES
#undef MAX_STRING_LENGTH
#undef MTH
#undef POOL_BUF_SIZE
#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $ClassWriter$PoolOverflow = ::com::sun::tools::javac::jvm::ClassWriter$PoolOverflow;
using $ClassWriter$StringOverflow = ::com::sun::tools::javac::jvm::ClassWriter$StringOverflow;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$Dynamic = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic;
using $PoolConstant$Dynamic$BsmKey = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic$BsmKey;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $PoolConstant$NameAndType = ::com::sun::tools::javac::jvm::PoolConstant$NameAndType;
using $PoolWriter$SharedSignatureGenerator = ::com::sun::tools::javac::jvm::PoolWriter$SharedSignatureGenerator;
using $PoolWriter$WriteablePoolHelper = ::com::sun::tools::javac::jvm::PoolWriter$WriteablePoolHelper;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _PoolWriter_FieldInfo_[] = {
	{"MAX_ENTRIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PoolWriter, MAX_ENTRIES)},
	{"MAX_STRING_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PoolWriter, MAX_STRING_LENGTH)},
	{"POOL_BUF_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PoolWriter, POOL_BUF_SIZE)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(PoolWriter, types)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(PoolWriter, names)},
	{"pool", "Lcom/sun/tools/javac/jvm/PoolWriter$WriteablePoolHelper;", nullptr, $FINAL, $field(PoolWriter, pool)},
	{"signatureGen", "Lcom/sun/tools/javac/jvm/PoolWriter$SharedSignatureGenerator;", nullptr, $FINAL, $field(PoolWriter, signatureGen)},
	{"innerClasses", "Ljava/util/LinkedHashSet;", "Ljava/util/LinkedHashSet<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", 0, $field(PoolWriter, innerClasses)},
	{"bootstrapMethods", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/jvm/PoolConstant$Dynamic$BsmKey;Ljava/lang/Integer;>;", 0, $field(PoolWriter, bootstrapMethods)},
	{}
};

$MethodInfo _PoolWriter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/util/Names;)V", nullptr, $PUBLIC, $method(static_cast<void(PoolWriter::*)($Types*,$Names*)>(&PoolWriter::init$))},
	{"classSig", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(PoolWriter::*)($Type*)>(&PoolWriter::classSig))},
	{"descriptorType", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(PoolWriter::*)($Symbol*)>(&PoolWriter::descriptorType))},
	{"enterInner", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"makeBootstrapEntry", "(Lcom/sun/tools/javac/jvm/PoolConstant$Dynamic;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PoolWriter::*)($PoolConstant$Dynamic*)>(&PoolWriter::makeBootstrapEntry))},
	{"putClass", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, 0},
	{"putClass", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, 0},
	{"putConstant", "(Ljava/lang/Object;)I", nullptr, 0},
	{"putConstant", "(Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;)I", nullptr, 0},
	{"putDescriptor", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, 0},
	{"putDescriptor", "(Lcom/sun/tools/javac/code/Symbol;)I", nullptr, 0},
	{"putDynamic", "(Lcom/sun/tools/javac/jvm/PoolConstant$Dynamic;)I", nullptr, 0},
	{"putMember", "(Lcom/sun/tools/javac/code/Symbol;)I", nullptr, 0},
	{"putModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)I", nullptr, 0},
	{"putName", "(Lcom/sun/tools/javac/util/Name;)I", nullptr, 0},
	{"putNameAndType", "(Lcom/sun/tools/javac/code/Symbol;)I", nullptr, 0},
	{"putPackage", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)I", nullptr, 0},
	{"putSignature", "(Lcom/sun/tools/javac/code/Symbol;)I", nullptr, 0},
	{"reset", "()V", nullptr, 0},
	{"size", "()I", nullptr, 0},
	{"typeSig", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(PoolWriter::*)($Type*)>(&PoolWriter::typeSig))},
	{"writePool", "(Ljava/io/OutputStream;)V", nullptr, 0, nullptr, "java.io.IOException,com.sun.tools.javac.jvm.ClassWriter$PoolOverflow"},
	{}
};

$InnerClassInfo _PoolWriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolWriter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.jvm.PoolWriter$WriteablePoolHelper", "com.sun.tools.javac.jvm.PoolWriter", "WriteablePoolHelper", 0},
	{"com.sun.tools.javac.jvm.PoolWriter$SharedSignatureGenerator", "com.sun.tools.javac.jvm.PoolWriter", "SharedSignatureGenerator", 0},
	{}
};

$ClassInfo _PoolWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.PoolWriter",
	"java.lang.Object",
	nullptr,
	_PoolWriter_FieldInfo_,
	_PoolWriter_MethodInfo_,
	nullptr,
	nullptr,
	_PoolWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolWriter$1,com.sun.tools.javac.jvm.PoolWriter$WriteablePoolHelper,com.sun.tools.javac.jvm.PoolWriter$SharedSignatureGenerator"
};

$Object* allocate$PoolWriter($Class* clazz) {
	return $of($alloc(PoolWriter));
}

void PoolWriter::init$($Types* types, $Names* names) {
	$set(this, innerClasses, $new($LinkedHashSet));
	$set(this, bootstrapMethods, $new($LinkedHashMap));
	$set(this, types, types);
	$set(this, names, names);
	$set(this, signatureGen, $new($PoolWriter$SharedSignatureGenerator, this, types));
	$set(this, pool, $new($PoolWriter$WriteablePoolHelper, this));
}

int32_t PoolWriter::putClass($Symbol$ClassSymbol* csym) {
	return putClass($nc(csym)->type);
}

int32_t PoolWriter::putClass($Type* t) {
	return $nc(this->pool)->writeIfNeeded($($nc(this->types)->erasure(t)));
}

int32_t PoolWriter::putMember($Symbol* s) {
	return $nc(this->pool)->writeIfNeeded(s);
}

int32_t PoolWriter::putDynamic($PoolConstant$Dynamic* d) {
	return $nc(this->pool)->writeIfNeeded(d);
}

int32_t PoolWriter::putDescriptor($Type* t) {
	$useLocalCurrentObjectStackCache();
	return putName($(typeSig($($nc(this->types)->erasure(t)))));
}

int32_t PoolWriter::putDescriptor($Symbol* s) {
	return putDescriptor($(descriptorType(s)));
}

int32_t PoolWriter::putSignature($Symbol* s) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(s)->kind == $Kinds$Kind::TYP) {
		return putName($(classSig(s->type)));
	} else {
		return putName($(typeSig(s->type)));
	}
}

int32_t PoolWriter::putConstant(Object$* o) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Integer, intVal, nullptr);
		$var($Float, floatVal, nullptr);
		$var($Long, longVal, nullptr);
		$var($Double, doubleVal, nullptr);
		$var($String, strVal, nullptr);
		bool var$0 = $instanceOf($Integer, o);
		if (var$0) {
			$assign(intVal, $cast($Integer, o));
			var$0 = true;
		}
		if (var$0) {
			return putConstant($($PoolConstant$LoadableConstant::Int($nc(intVal)->intValue())));
		} else {
			bool var$2 = $instanceOf($Float, o);
			if (var$2) {
				$assign(floatVal, $cast($Float, o));
				var$2 = true;
			}
			if (var$2) {
				return putConstant($($PoolConstant$LoadableConstant::Float($nc(floatVal)->floatValue())));
			} else {
				bool var$4 = $instanceOf($Long, o);
				if (var$4) {
					$assign(longVal, $cast($Long, o));
					var$4 = true;
				}
				if (var$4) {
					return putConstant($($PoolConstant$LoadableConstant::Long($nc(longVal)->longValue())));
				} else {
					bool var$6 = $instanceOf($Double, o);
					if (var$6) {
						$assign(doubleVal, $cast($Double, o));
						var$6 = true;
					}
					if (var$6) {
						return putConstant($($PoolConstant$LoadableConstant::Double($nc(doubleVal)->doubleValue())));
					} else {
						bool var$8 = $instanceOf($String, o);
						if (var$8) {
							$assign(strVal, $cast($String, o));
							var$8 = true;
						}
						if (var$8) {
							return putConstant($($PoolConstant$LoadableConstant::String(strVal)));
						} else {
							$throwNew($AssertionError, $of($$str({"unexpected constant: "_s, o})));
						}
					}
				}
			}
		}
	}
}

int32_t PoolWriter::putConstant($PoolConstant$LoadableConstant* c) {
	switch ($nc(c)->poolTag()) {
	case 7:
		{
			return putClass($cast($Type, c));
		}
	case 16:
		{
			return $nc(this->pool)->writeIfNeeded($($nc(this->types)->erasure($cast($Type, c))));
		}
	default:
		{
			return $nc(this->pool)->writeIfNeeded(c);
		}
	}
}

int32_t PoolWriter::putName($Name* name) {
	return $nc(this->pool)->writeIfNeeded(name);
}

int32_t PoolWriter::putNameAndType($Symbol* s) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->pool)->writeIfNeeded($$new($PoolConstant$NameAndType, $nc(s)->name, $(descriptorType(s))));
}

int32_t PoolWriter::putPackage($Symbol$PackageSymbol* pkg) {
	return $nc(this->pool)->writeIfNeeded(pkg);
}

int32_t PoolWriter::putModule($Symbol$ModuleSymbol* mod) {
	return $nc(this->pool)->writeIfNeeded(mod);
}

void PoolWriter::enterInner($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(c)->type)->isCompound()) {
		$throwNew($AssertionError, $of($$str({"Unexpected intersection type: "_s, c->type})));
	}
	$nc(c)->complete();
	bool var$0 = $nc(c->owner)->enclClass() != nullptr;
	if (var$0 && !$nc(this->innerClasses)->contains(c)) {
		enterInner($($nc(c->owner)->enclClass()));
		$nc(this->innerClasses)->add(c);
	}
}

$Type* PoolWriter::descriptorType($Symbol* s) {
	$init($Kinds$Kind);
	return $nc(s)->kind == $Kinds$Kind::MTH ? $nc(s)->externalType(this->types) : s->erasure(this->types);
}

int32_t PoolWriter::makeBootstrapEntry($PoolConstant$Dynamic* dynamic) {
	$useLocalCurrentObjectStackCache();
	$var($PoolConstant$Dynamic$BsmKey, bsmKey, $nc(dynamic)->bsmKey(this->types));
	$var($Integer, index, $cast($Integer, $nc(this->bootstrapMethods)->get(bsmKey)));
	if (index == nullptr) {
		$assign(index, $Integer::valueOf($nc(this->bootstrapMethods)->size()));
		$nc(this->bootstrapMethods)->put(bsmKey, index);
	}
	return $nc(index)->intValue();
}

void PoolWriter::writePool($OutputStream* out) {
	if ($nc(this->pool)->overflowString != nullptr) {
		$throwNew($ClassWriter$StringOverflow, $nc(this->pool)->overflowString);
	}
	int32_t size = this->size();
	if (size > PoolWriter::MAX_ENTRIES) {
		$throwNew($ClassWriter$PoolOverflow);
	}
	$nc(out)->write(size >> 8);
	out->write(size);
	out->write($nc($nc(this->pool)->poolbuf)->elems, 0, $nc($nc(this->pool)->poolbuf)->length);
}

int32_t PoolWriter::size() {
	return $nc(this->pool)->currentIndex;
}

$Name* PoolWriter::typeSig($Type* type) {
	$nc(this->signatureGen)->reset();
	$nc(this->signatureGen)->assembleSig(type);
	return $nc(this->signatureGen)->toName();
}

$Name* PoolWriter::classSig($Type* t) {
	$useLocalCurrentObjectStackCache();
	$nc(this->signatureGen)->reset();
	$var($List, typarams, $nc(t)->getTypeArguments());
	if ($nc(typarams)->nonEmpty()) {
		$nc(this->signatureGen)->assembleParamsSig(typarams);
	}
	$nc(this->signatureGen)->assembleSig($($nc(this->types)->supertype(t)));
	{
		$var($Iterator, i$, $nc($($nc(this->types)->interfaces(t)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, i, $cast($Type, i$->next()));
			$nc(this->signatureGen)->assembleSig(i);
		}
	}
	return $nc(this->signatureGen)->toName();
}

void PoolWriter::reset() {
	$nc(this->innerClasses)->clear();
	$nc(this->bootstrapMethods)->clear();
	$nc(this->pool)->reset();
}

PoolWriter::PoolWriter() {
}

$Class* PoolWriter::load$($String* name, bool initialize) {
	$loadClass(PoolWriter, name, initialize, &_PoolWriter_ClassInfo_, allocate$PoolWriter);
	return class$;
}

$Class* PoolWriter::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com