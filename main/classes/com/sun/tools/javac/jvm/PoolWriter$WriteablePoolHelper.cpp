#include <com/sun/tools/javac/jvm/PoolWriter$WriteablePoolHelper.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$DynamicVarSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant$BasicConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant$NameAndType.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayDeque.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ARRAY
#undef CLASS

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$DynamicVarSymbol = ::com::sun::tools::javac::code::Symbol$DynamicVarSymbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$Dynamic = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic;
using $PoolConstant$LoadableConstant$BasicConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant$BasicConstant;
using $PoolConstant$NameAndType = ::com::sun::tools::javac::jvm::PoolConstant$NameAndType;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
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
using $ArrayDeque = ::java::util::ArrayDeque;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _PoolWriter$WriteablePoolHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/PoolWriter;", nullptr, $FINAL | $SYNTHETIC, $field(PoolWriter$WriteablePoolHelper, this$0)},
	{"keysToPos", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(PoolWriter$WriteablePoolHelper, keysToPos)},
	{"poolbuf", "Lcom/sun/tools/javac/util/ByteBuffer;", nullptr, $FINAL, $field(PoolWriter$WriteablePoolHelper, poolbuf)},
	{"currentIndex", "I", nullptr, 0, $field(PoolWriter$WriteablePoolHelper, currentIndex)},
	{"todo", "Ljava/util/ArrayDeque;", "Ljava/util/ArrayDeque<Lcom/sun/tools/javac/jvm/PoolConstant;>;", 0, $field(PoolWriter$WriteablePoolHelper, todo)},
	{"overflowString", "Ljava/lang/String;", nullptr, 0, $field(PoolWriter$WriteablePoolHelper, overflowString)},
	{}
};

$MethodInfo _PoolWriter$WriteablePoolHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/PoolWriter;)V", nullptr, 0, $method(static_cast<void(PoolWriter$WriteablePoolHelper::*)($PoolWriter*)>(&PoolWriter$WriteablePoolHelper::init$))},
	{"reset", "()V", nullptr, 0},
	{"writeConstant", "(Lcom/sun/tools/javac/jvm/PoolConstant;)V", nullptr, 0},
	{"writeIfNeeded", "(Lcom/sun/tools/javac/jvm/PoolConstant;)I", "<P::Lcom/sun/tools/javac/jvm/PoolConstant;>(TP;)I", $PRIVATE, $method(static_cast<int32_t(PoolWriter$WriteablePoolHelper::*)($PoolConstant*)>(&PoolWriter$WriteablePoolHelper::writeIfNeeded))},
	{}
};

$InnerClassInfo _PoolWriter$WriteablePoolHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolWriter$WriteablePoolHelper", "com.sun.tools.javac.jvm.PoolWriter", "WriteablePoolHelper", 0},
	{}
};

$ClassInfo _PoolWriter$WriteablePoolHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.PoolWriter$WriteablePoolHelper",
	"java.lang.Object",
	nullptr,
	_PoolWriter$WriteablePoolHelper_FieldInfo_,
	_PoolWriter$WriteablePoolHelper_MethodInfo_,
	nullptr,
	nullptr,
	_PoolWriter$WriteablePoolHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolWriter"
};

$Object* allocate$PoolWriter$WriteablePoolHelper($Class* clazz) {
	return $of($alloc(PoolWriter$WriteablePoolHelper));
}

void PoolWriter$WriteablePoolHelper::init$($PoolWriter* this$0) {
	$set(this, this$0, this$0);
	$set(this, keysToPos, $new($HashMap, 64));
	$set(this, poolbuf, $new($ByteBuffer, 32767));
	this->currentIndex = 1;
	$set(this, todo, $new($ArrayDeque));
	$set(this, overflowString, nullptr);
}

int32_t PoolWriter$WriteablePoolHelper::writeIfNeeded($PoolConstant* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, key, $nc(p)->poolKey(this->this$0->types));
	$var($Integer, index, $cast($Integer, $nc(this->keysToPos)->get(key)));
	if (index == nullptr) {
		$nc(this->keysToPos)->put(key, $assign(index, $Integer::valueOf(this->currentIndex++)));
		bool first = $nc(this->todo)->isEmpty();
		$nc(this->todo)->addLast(p);
		if (first) {
			while (!$nc(this->todo)->isEmpty()) {
				writeConstant($cast($PoolConstant, $($nc(this->todo)->peekFirst())));
				$nc(this->todo)->removeFirst();
			}
		}
	}
	return $nc(index)->intValue();
}

void PoolWriter$WriteablePoolHelper::writeConstant($PoolConstant* c) {
	$useLocalCurrentObjectStackCache();
	int32_t tag = $nc(c)->poolTag();
	switch (tag) {
	case $ClassFile::CONSTANT_Class:
		{
			{
				$var($Type, ct, $cast($Type, c));
				$init($TypeTag);
				$var($Name, name, ct->hasTag($TypeTag::ARRAY) ? this->this$0->typeSig(ct) : $nc(this->this$0->names)->fromUtf($($ClassFile::externalize($($nc(ct->tsym)->flatName())))));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendChar(this->this$0->putName(name));
				if (ct->hasTag($TypeTag::CLASS)) {
					this->this$0->enterInner($cast($Symbol$ClassSymbol, ct->tsym));
				}
				break;
			}
		}
	case $ClassFile::CONSTANT_Utf8:
		{
			{
				$var($Name, name, $cast($Name, c));
				$nc(this->poolbuf)->appendByte(tag);
				$var($bytes, bs, name->toUtf());
				$nc(this->poolbuf)->appendChar($nc(bs)->length);
				$nc(this->poolbuf)->appendBytes(bs, 0, $nc(bs)->length);
				if (this->overflowString == nullptr && $nc(bs)->length > 0x0000FFFF) {
					$set(this, overflowString, $new($String, bs));
				}
				break;
			}
		}
	case $ClassFile::CONSTANT_InterfaceMethodref:
		{}
	case $ClassFile::CONSTANT_Methodref:
		{}
	case $ClassFile::CONSTANT_Fieldref:
		{
			{
				$var($Symbol, sym, $cast($Symbol, c));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendChar(this->this$0->putClass($cast($Symbol$ClassSymbol, sym->owner)));
				$nc(this->poolbuf)->appendChar(this->this$0->putNameAndType(sym));
				break;
			}
		}
	case $ClassFile::CONSTANT_Package:
		{
			{
				$var($Symbol$PackageSymbol, pkg, $cast($Symbol$PackageSymbol, c));
				$var($Name, pkgName, $nc(this->this$0->names)->fromUtf($($ClassFile::externalize($(pkg->flatName())))));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendChar(this->this$0->putName(pkgName));
				break;
			}
		}
	case $ClassFile::CONSTANT_Module:
		{
			{
				$var($Symbol$ModuleSymbol, mod, $cast($Symbol$ModuleSymbol, c));
				int32_t modName = this->this$0->putName(mod->name);
				$nc(this->poolbuf)->appendByte(mod->poolTag());
				$nc(this->poolbuf)->appendChar(modName);
				break;
			}
		}
	case $ClassFile::CONSTANT_Integer:
		{
			$nc(this->poolbuf)->appendByte(tag);
			$nc(this->poolbuf)->appendInt($nc(($cast($Integer, $nc(($cast($PoolConstant$LoadableConstant$BasicConstant, c)))->data)))->intValue());
			break;
		}
	case $ClassFile::CONSTANT_Float:
		{
			$nc(this->poolbuf)->appendByte(tag);
			$nc(this->poolbuf)->appendFloat($nc(($cast($Float, $nc(($cast($PoolConstant$LoadableConstant$BasicConstant, c)))->data)))->floatValue());
			break;
		}
	case $ClassFile::CONSTANT_Long:
		{
			++this->currentIndex;
			$nc(this->poolbuf)->appendByte(tag);
			$nc(this->poolbuf)->appendLong($nc(($cast($Long, $nc(($cast($PoolConstant$LoadableConstant$BasicConstant, c)))->data)))->longValue());
			break;
		}
	case $ClassFile::CONSTANT_Double:
		{
			++this->currentIndex;
			$nc(this->poolbuf)->appendByte(tag);
			$nc(this->poolbuf)->appendDouble($nc(($cast($Double, $nc(($cast($PoolConstant$LoadableConstant$BasicConstant, c)))->data)))->doubleValue());
			break;
		}
	case $ClassFile::CONSTANT_MethodHandle:
		{
			{
				$var($Symbol$MethodHandleSymbol, h, $cast($Symbol$MethodHandleSymbol, c));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendByte(h->referenceKind());
				$nc(this->poolbuf)->appendChar(this->this$0->putMember($(h->baseSymbol())));
				break;
			}
		}
	case $ClassFile::CONSTANT_MethodType:
		{
			{
				$var($Type$MethodType, mt, $cast($Type$MethodType, c));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendChar(this->this$0->putDescriptor($(mt->baseType())));
				break;
			}
		}
	case $ClassFile::CONSTANT_String:
		{
			{
				$var($Name, utf, $nc(this->this$0->names)->fromString($cast($String, $nc(($cast($PoolConstant$LoadableConstant$BasicConstant, c)))->data)));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendChar(this->this$0->putName(utf));
				break;
			}
		}
	case $ClassFile::CONSTANT_NameandType:
		{
			{
				$var($PoolConstant$NameAndType, nt, $cast($PoolConstant$NameAndType, c));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendChar(this->this$0->putName(nt->name));
				$nc(this->poolbuf)->appendChar(this->this$0->putDescriptor(nt->type));
				break;
			}
		}
	case $ClassFile::CONSTANT_InvokeDynamic:
		{
			{
				$var($Symbol$DynamicMethodSymbol, d, $cast($Symbol$DynamicMethodSymbol, c));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendChar(this->this$0->makeBootstrapEntry(d));
				$nc(this->poolbuf)->appendChar(this->this$0->putNameAndType(d));
				break;
			}
		}
	case $ClassFile::CONSTANT_Dynamic:
		{
			{
				$var($Symbol$DynamicVarSymbol, d, $cast($Symbol$DynamicVarSymbol, c));
				$nc(this->poolbuf)->appendByte(tag);
				$nc(this->poolbuf)->appendChar(this->this$0->makeBootstrapEntry(d));
				$nc(this->poolbuf)->appendChar(this->this$0->putNameAndType(d));
				break;
			}
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unexpected constant tag: "_s, $$str(tag)})));
		}
	}
}

void PoolWriter$WriteablePoolHelper::reset() {
	$nc(this->keysToPos)->clear();
	this->currentIndex = 1;
	$nc(this->todo)->clear();
	$set(this, overflowString, nullptr);
	$nc(this->poolbuf)->reset();
}

PoolWriter$WriteablePoolHelper::PoolWriter$WriteablePoolHelper() {
}

$Class* PoolWriter$WriteablePoolHelper::load$($String* name, bool initialize) {
	$loadClass(PoolWriter$WriteablePoolHelper, name, initialize, &_PoolWriter$WriteablePoolHelper_ClassInfo_, allocate$PoolWriter$WriteablePoolHelper);
	return class$;
}

$Class* PoolWriter$WriteablePoolHelper::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com