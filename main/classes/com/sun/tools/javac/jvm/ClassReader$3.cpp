#include <com/sun/tools/javac/jvm/ClassReader$3.h>

#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$28.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$28 = ::com::sun::tools::javac::jvm::ClassReader$28;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$3, this$0)},
	{}
};

$MethodInfo _ClassReader$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$3::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$3::init$))},
	{"checkType", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Class;Ljava/lang/Object;)V", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Class<*>;Ljava/lang/Object;)V", 0},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$3",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$3_FieldInfo_,
	_ClassReader$3_MethodInfo_,
	nullptr,
	&_ClassReader$3_EnclosingMethodInfo_,
	_ClassReader$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$3($Class* clazz) {
	return $of($alloc(ClassReader$3));
}

void ClassReader$3::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$3::read($Symbol* sym, int32_t attrLen) {
	$useLocalCurrentObjectStackCache();
	$var($Object, v, $nc(this->this$0->poolReader)->getConstant(this->this$0->nextChar()));
	if (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)16)) == 0) {
		return;
	}
	$var($Symbol$VarSymbol, var, $cast($Symbol$VarSymbol, sym));
	$init($ClassReader$28);
	switch ($nc($ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc($nc(var)->type)->getTag())))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{
			$load($Integer);
			checkType(var, $Integer::class$, v);
			break;
		}
	case 6:
		{
			$load($Long);
			checkType(var, $Long::class$, v);
			break;
		}
	case 7:
		{
			$load($Float);
			checkType(var, $Float::class$, v);
			break;
		}
	case 8:
		{
			$load($Double);
			checkType(var, $Double::class$, v);
			break;
		}
	case 9:
		{
			if ($nc(var->type)->tsym == $nc($nc(this->this$0->syms)->stringType)->tsym) {
				checkType(var, $String::class$, v);
			} else {
				$throw($(this->this$0->badClassFile("bad.constant.value.type"_s, $$new($ObjectArray, {$of(var->type)}))));
			}
			break;
		}
	default:
		{
			return;
		}
	}
	{
		$var($Integer, intVal, nullptr);
		bool var$1 = $instanceOf($Integer, v);
		if (var$1) {
			$assign(intVal, $cast($Integer, v));
			var$1 = true;
		}
		bool var$0 = var$1;
		if (var$0 && !$nc($($nc(var->type)->getTag()))->checkRange($nc(intVal)->intValue())) {
			$throw($(this->this$0->badClassFile("bad.constant.range"_s, $$new($ObjectArray, {
				v,
				$of(var),
				$of(var->type)
			}))));
		}
	}
	var->setData(v);
}

void ClassReader$3::checkType($Symbol* var, $Class* clazz, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(clazz)->isInstance(value)) {
		$throw($(this->this$0->badClassFile("bad.constant.value"_s, $$new($ObjectArray, {
			value,
			$of(var),
			$($of(clazz->getSimpleName()))
		}))));
	}
}

ClassReader$3::ClassReader$3() {
}

$Class* ClassReader$3::load$($String* name, bool initialize) {
	$loadClass(ClassReader$3, name, initialize, &_ClassReader$3_ClassInfo_, allocate$ClassReader$3);
	return class$;
}

$Class* ClassReader$3::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com