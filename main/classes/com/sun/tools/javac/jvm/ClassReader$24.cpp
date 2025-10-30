#include <com/sun/tools/javac/jvm/ClassReader$24.h>

#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Directive$OpensDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ModuleFlags.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeKind.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader$InterimProvidesDirective.h>
#include <com/sun/tools/javac/jvm/ClassReader$InterimUsesDirective.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name$NameMapper.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <java/util/function/IntFunction.h>
#include <jcpp.h>

#undef MDL
#undef OPEN
#undef STATIC_PHASE
#undef TRANSITIVE
#undef TYP

using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Directive$OpensDirective = ::com::sun::tools::javac::code::Directive$OpensDirective;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleFlags = ::com::sun::tools::javac::code::Symbol$ModuleFlags;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeKind = ::com::sun::tools::javac::jvm::ClassReader$AttributeKind;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $ClassReader$InterimProvidesDirective = ::com::sun::tools::javac::jvm::ClassReader$InterimProvidesDirective;
using $ClassReader$InterimUsesDirective = ::com::sun::tools::javac::jvm::ClassReader$InterimUsesDirective;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$NameMapper = ::com::sun::tools::javac::util::Name$NameMapper;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;
using $IntFunction = ::java::util::function::IntFunction;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$24$$Lambda$fromUtf : public $Name$NameMapper {
	$class(ClassReader$24$$Lambda$fromUtf, $NO_CLASS_INIT, $Name$NameMapper)
public:
	void init$($Names* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* map($bytes* cs, int32_t start, int32_t len) override {
		 return $of($nc(inst$)->fromUtf(cs, start, len));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$24$$Lambda$fromUtf>());
	}
	$Names* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$24$$Lambda$fromUtf::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$24$$Lambda$fromUtf, inst$)},
	{}
};
$MethodInfo ClassReader$24$$Lambda$fromUtf::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Names;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$24$$Lambda$fromUtf::*)($Names*)>(&ClassReader$24$$Lambda$fromUtf::init$))},
	{"map", "([BII)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$24$$Lambda$fromUtf::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$24$$Lambda$fromUtf",
	"java.lang.Object",
	"com.sun.tools.javac.util.Name$NameMapper",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$24$$Lambda$fromUtf::load$($String* name, bool initialize) {
	$loadClass(ClassReader$24$$Lambda$fromUtf, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$24$$Lambda$fromUtf::class$ = nullptr;

class ClassReader$24$$Lambda$getName$1 : public $IntFunction {
	$class(ClassReader$24$$Lambda$getName$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$($PoolReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t index) override {
		 return $of($nc(inst$)->getName(index));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$24$$Lambda$getName$1>());
	}
	$PoolReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$24$$Lambda$getName$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$24$$Lambda$getName$1, inst$)},
	{}
};
$MethodInfo ClassReader$24$$Lambda$getName$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/PoolReader;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$24$$Lambda$getName$1::*)($PoolReader*)>(&ClassReader$24$$Lambda$getName$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$24$$Lambda$getName$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$24$$Lambda$getName$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$24$$Lambda$getName$1::load$($String* name, bool initialize) {
	$loadClass(ClassReader$24$$Lambda$getName$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$24$$Lambda$getName$1::class$ = nullptr;

class ClassReader$24$$Lambda$classNameMapper$2 : public $Name$NameMapper {
	$class(ClassReader$24$$Lambda$classNameMapper$2, $NO_CLASS_INIT, $Name$NameMapper)
public:
	void init$(ClassReader$24* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* map($bytes* arr, int32_t offset, int32_t length) override {
		 return $of($nc(inst$)->classNameMapper(arr, offset, length));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$24$$Lambda$classNameMapper$2>());
	}
	ClassReader$24* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$24$$Lambda$classNameMapper$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$24$$Lambda$classNameMapper$2, inst$)},
	{}
};
$MethodInfo ClassReader$24$$Lambda$classNameMapper$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader$24;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$24$$Lambda$classNameMapper$2::*)(ClassReader$24*)>(&ClassReader$24$$Lambda$classNameMapper$2::init$))},
	{"map", "([BII)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$24$$Lambda$classNameMapper$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$24$$Lambda$classNameMapper$2",
	"java.lang.Object",
	"com.sun.tools.javac.util.Name$NameMapper",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$24$$Lambda$classNameMapper$2::load$($String* name, bool initialize) {
	$loadClass(ClassReader$24$$Lambda$classNameMapper$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$24$$Lambda$classNameMapper$2::class$ = nullptr;

$FieldInfo _ClassReader$24_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$24, this$0)},
	{}
};

$MethodInfo _ClassReader$24_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$24::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$24::init$))},
	{"accepts", "(Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;)Z", nullptr, $PROTECTED},
	{"classNameMapper", "([BII)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(ClassReader$24::*)($bytes*,int32_t,int32_t)>(&ClassReader$24::classNameMapper))},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$24_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$24_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$24", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$24_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$24",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$24_FieldInfo_,
	_ClassReader$24_MethodInfo_,
	nullptr,
	&_ClassReader$24_EnclosingMethodInfo_,
	_ClassReader$24_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$24($Class* clazz) {
	return $of($alloc(ClassReader$24));
}

void ClassReader$24::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

bool ClassReader$24::accepts($ClassReader$AttributeKind* kind) {
	return $ClassReader$AttributeReader::accepts(kind) && this->this$0->allowModules;
}

void ClassReader$24::read($Symbol* sym, int32_t attrLen) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::TYP && $nc(sym->owner)->kind == $Kinds$Kind::MDL) {
		$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, sym->owner));
		$var($ListBuffer, directives, $new($ListBuffer));
		int32_t var$0 = (int32_t)this->this$0->nextChar();
		$var($Name, moduleName, $cast($Name, $nc(this->this$0->poolReader)->peekModuleName(var$0, static_cast<$Name$NameMapper*>($$new(ClassReader$24$$Lambda$fromUtf, static_cast<$Names*>($nc(this->this$0->names)))))));
		if ($nc(this->this$0->currentModule)->name != moduleName) {
			$throw($(this->this$0->badClassFile("module.name.mismatch"_s, $$new($ObjectArray, {
				$of(moduleName),
				$of($nc(this->this$0->currentModule)->name)
			}))));
		}
		$var($Set, moduleFlags, this->this$0->readModuleFlags(this->this$0->nextChar()));
		$nc($nc(msym)->flags$)->addAll(moduleFlags);
		int32_t var$1 = (int32_t)this->this$0->nextChar();
		$set(msym, version, $cast($Name, this->this$0->optPoolEntry(var$1, static_cast<$IntFunction*>($$new(ClassReader$24$$Lambda$getName$1, static_cast<$PoolReader*>($nc(this->this$0->poolReader)))), nullptr)));
		$var($ListBuffer, requires, $new($ListBuffer));
		int32_t nrequires = this->this$0->nextChar();
		for (int32_t i = 0; i < nrequires; ++i) {
			$var($Symbol$ModuleSymbol, rsym, $nc(this->this$0->poolReader)->getModule(this->this$0->nextChar()));
			$var($Set, flags, this->this$0->readRequiresFlags(this->this$0->nextChar()));
			$init($ClassFile$Version);
			if (rsym == $nc(this->this$0->syms)->java_base && this->this$0->majorVersion >= $ClassFile$Version::V54->major) {
				$init($Directive$RequiresFlag);
				if ($nc(flags)->contains($Directive$RequiresFlag::TRANSITIVE)) {
					$throw($(this->this$0->badClassFile("bad.requires.flag"_s, $$new($ObjectArray, {$of($Directive$RequiresFlag::TRANSITIVE)}))));
				}
				if ($nc(flags)->contains($Directive$RequiresFlag::STATIC_PHASE)) {
					$throw($(this->this$0->badClassFile("bad.requires.flag"_s, $$new($ObjectArray, {$of($Directive$RequiresFlag::STATIC_PHASE)}))));
				}
			}
			this->this$0->nextChar();
			requires->add($$new($Directive$RequiresDirective, rsym, flags));
		}
		$set(msym, requires, requires->toList());
		directives->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(msym->requires)));
		$var($ListBuffer, exports, $new($ListBuffer));
		int32_t nexports = this->this$0->nextChar();
		for (int32_t i = 0; i < nexports; ++i) {
			$var($Symbol$PackageSymbol, p, $nc(this->this$0->poolReader)->getPackage(this->this$0->nextChar()));
			$var($Set, flags, this->this$0->readExportsFlags(this->this$0->nextChar()));
			int32_t nto = this->this$0->nextChar();
			$var($List, to, nullptr);
			if (nto == 0) {
				$assign(to, nullptr);
			} else {
				$var($ListBuffer, lb, $new($ListBuffer));
				for (int32_t t = 0; t < nto; ++t) {
					lb->append($($nc(this->this$0->poolReader)->getModule(this->this$0->nextChar())));
				}
				$assign(to, lb->toList());
			}
			exports->add($$new($Directive$ExportsDirective, p, to, flags));
		}
		$set(msym, exports, exports->toList());
		directives->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(msym->exports)));
		$var($ListBuffer, opens, $new($ListBuffer));
		int32_t nopens = this->this$0->nextChar();
		$init($Symbol$ModuleFlags);
		if (nopens != 0 && $nc(msym->flags$)->contains($Symbol$ModuleFlags::OPEN)) {
			$throw($(this->this$0->badClassFile("module.non.zero.opens"_s, $$new($ObjectArray, {$of($nc(this->this$0->currentModule)->name)}))));
		}
		for (int32_t i = 0; i < nopens; ++i) {
			$var($Symbol$PackageSymbol, p, $nc(this->this$0->poolReader)->getPackage(this->this$0->nextChar()));
			$var($Set, flags, this->this$0->readOpensFlags(this->this$0->nextChar()));
			int32_t nto = this->this$0->nextChar();
			$var($List, to, nullptr);
			if (nto == 0) {
				$assign(to, nullptr);
			} else {
				$var($ListBuffer, lb, $new($ListBuffer));
				for (int32_t t = 0; t < nto; ++t) {
					lb->append($($nc(this->this$0->poolReader)->getModule(this->this$0->nextChar())));
				}
				$assign(to, lb->toList());
			}
			opens->add($$new($Directive$OpensDirective, p, to, flags));
		}
		$set(msym, opens, opens->toList());
		directives->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(msym->opens)));
		$set(msym, directives, directives->toList());
		$var($ListBuffer, uses, $new($ListBuffer));
		int32_t nuses = this->this$0->nextChar();
		for (int32_t i = 0; i < nuses; ++i) {
			int32_t var$2 = (int32_t)this->this$0->nextChar();
			$var($Name, srvc, $cast($Name, $nc(this->this$0->poolReader)->peekClassName(var$2, static_cast<$Name$NameMapper*>($$new(ClassReader$24$$Lambda$classNameMapper$2, this)))));
			uses->add($$new($ClassReader$InterimUsesDirective, srvc));
		}
		$set(this->this$0, interimUses, uses->toList());
		$var($ListBuffer, provides, $new($ListBuffer));
		int32_t nprovides = this->this$0->nextChar();
		for (int32_t p = 0; p < nprovides; ++p) {
			int32_t var$3 = (int32_t)this->this$0->nextChar();
			$var($Name, srvc, $cast($Name, $nc(this->this$0->poolReader)->peekClassName(var$3, static_cast<$Name$NameMapper*>($$new(ClassReader$24$$Lambda$classNameMapper$2, this)))));
			int32_t nimpls = this->this$0->nextChar();
			$var($ListBuffer, impls, $new($ListBuffer));
			for (int32_t i = 0; i < nimpls; ++i) {
				int32_t var$4 = (int32_t)this->this$0->nextChar();
				impls->append($cast($Name, $($nc(this->this$0->poolReader)->peekClassName(var$4, static_cast<$Name$NameMapper*>($$new(ClassReader$24$$Lambda$classNameMapper$2, this))))));
				provides->add($$new($ClassReader$InterimProvidesDirective, srvc, $(impls->toList())));
			}
		}
		$set(this->this$0, interimProvides, provides->toList());
	}
}

$Name* ClassReader$24::classNameMapper($bytes* arr, int32_t offset, int32_t length) {
	return $nc(this->this$0->names)->fromUtf($($ClassFile::internalize(arr, offset, length)));
}

ClassReader$24::ClassReader$24() {
}

$Class* ClassReader$24::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassReader$24$$Lambda$fromUtf::classInfo$.name)) {
			return ClassReader$24$$Lambda$fromUtf::load$(name, initialize);
		}
		if (name->equals(ClassReader$24$$Lambda$getName$1::classInfo$.name)) {
			return ClassReader$24$$Lambda$getName$1::load$(name, initialize);
		}
		if (name->equals(ClassReader$24$$Lambda$classNameMapper$2::classInfo$.name)) {
			return ClassReader$24$$Lambda$classNameMapper$2::load$(name, initialize);
		}
	}
	$loadClass(ClassReader$24, name, initialize, &_ClassReader$24_ClassInfo_, allocate$ClassReader$24);
	return class$;
}

$Class* ClassReader$24::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com