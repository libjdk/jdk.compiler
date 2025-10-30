#include <com/sun/tools/javac/code/Symbol$DynamicVarSymbol.h>

#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$Dynamic = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$DynamicVarSymbol_FieldInfo_[] = {
	{"staticArgs", "[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC, $field(Symbol$DynamicVarSymbol, staticArgs$)},
	{"bsm", "Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;", nullptr, $PUBLIC, $field(Symbol$DynamicVarSymbol, bsm)},
	{}
};

$MethodInfo _Symbol$DynamicVarSymbol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;Lcom/sun/tools/javac/code/Type;[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$DynamicVarSymbol::*)($Name*,$Symbol*,$Symbol$MethodHandleSymbol*,$Type*,$PoolConstant$LoadableConstantArray*)>(&Symbol$DynamicVarSymbol::init$))},
	{"bootstrapMethod", "()Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC},
	{"dynamicType", "()Lcom/sun/tools/javac/jvm/PoolConstant;", nullptr, $PUBLIC},
	{"isDynamic", "()Z", nullptr, $PUBLIC},
	{"*poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"staticArgs", "()[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$DynamicVarSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$DynamicVarSymbol", "com.sun.tools.javac.code.Symbol", "DynamicVarSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.jvm.PoolConstant$Dynamic", "com.sun.tools.javac.jvm.PoolConstant", "Dynamic", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$DynamicVarSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$DynamicVarSymbol",
	"com.sun.tools.javac.code.Symbol$VarSymbol",
	"com.sun.tools.javac.jvm.PoolConstant$Dynamic,com.sun.tools.javac.jvm.PoolConstant$LoadableConstant",
	_Symbol$DynamicVarSymbol_FieldInfo_,
	_Symbol$DynamicVarSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$DynamicVarSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$DynamicVarSymbol($Class* clazz) {
	return $of($alloc(Symbol$DynamicVarSymbol));
}

$String* Symbol$DynamicVarSymbol::toString() {
	 return this->$Symbol$VarSymbol::toString();
}

int32_t Symbol$DynamicVarSymbol::hashCode() {
	 return this->$Symbol$VarSymbol::hashCode();
}

bool Symbol$DynamicVarSymbol::equals(Object$* arg0) {
	 return this->$Symbol$VarSymbol::equals(arg0);
}

$Object* Symbol$DynamicVarSymbol::clone() {
	 return this->$Symbol$VarSymbol::clone();
}

void Symbol$DynamicVarSymbol::finalize() {
	this->$Symbol$VarSymbol::finalize();
}

$Object* Symbol$DynamicVarSymbol::poolKey($Types* types) {
	 return this->$Symbol$VarSymbol::poolKey(types);
}

void Symbol$DynamicVarSymbol::init$($Name* name, $Symbol* owner, $Symbol$MethodHandleSymbol* bsm, $Type* type, $PoolConstant$LoadableConstantArray* staticArgs) {
	$Symbol$VarSymbol::init$(0, name, type, owner);
	$set(this, bsm, bsm);
	$set(this, staticArgs$, staticArgs);
}

bool Symbol$DynamicVarSymbol::isDynamic() {
	return true;
}

$PoolConstant* Symbol$DynamicVarSymbol::dynamicType() {
	return this->type;
}

$PoolConstant$LoadableConstantArray* Symbol$DynamicVarSymbol::staticArgs() {
	return this->staticArgs$;
}

$PoolConstant$LoadableConstant* Symbol$DynamicVarSymbol::bootstrapMethod() {
	return this->bsm;
}

int32_t Symbol$DynamicVarSymbol::poolTag() {
	return $ClassFile::CONSTANT_Dynamic;
}

Symbol$DynamicVarSymbol::Symbol$DynamicVarSymbol() {
}

$Class* Symbol$DynamicVarSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$DynamicVarSymbol, name, initialize, &_Symbol$DynamicVarSymbol_ClassInfo_, allocate$Symbol$DynamicVarSymbol);
	return class$;
}

$Class* Symbol$DynamicVarSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com