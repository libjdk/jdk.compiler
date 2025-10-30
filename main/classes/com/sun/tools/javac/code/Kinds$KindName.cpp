#include <com/sun/tools/javac/code/Kinds$KindName.h>

#include <com/sun/tools/javac/api/Messages.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <java/lang/Enum.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ANNOTATION
#undef BOUND
#undef CLASS
#undef CONSTRUCTOR
#undef ENUM
#undef INSTANCE_INIT
#undef INTERFACE
#undef METHOD
#undef MODULE
#undef PACKAGE
#undef RECORD
#undef RECORD_COMPONENT
#undef STATIC
#undef STATIC_INIT
#undef TYPEVAR
#undef VAL
#undef VAR

using $Kinds$KindNameArray = $Array<::com::sun::tools::javac::code::Kinds$KindName>;
using $Formattable = ::com::sun::tools::javac::api::Formattable;
using $Messages = ::com::sun::tools::javac::api::Messages;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Kinds$KindName_FieldInfo_[] = {
	{"ANNOTATION", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, ANNOTATION)},
	{"CONSTRUCTOR", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, CONSTRUCTOR)},
	{"INTERFACE", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, INTERFACE)},
	{"ENUM", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, ENUM)},
	{"STATIC", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, STATIC)},
	{"TYPEVAR", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, TYPEVAR)},
	{"BOUND", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, BOUND)},
	{"VAR", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, VAR)},
	{"VAL", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, VAL)},
	{"METHOD", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, METHOD)},
	{"CLASS", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, CLASS)},
	{"STATIC_INIT", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, STATIC_INIT)},
	{"INSTANCE_INIT", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, INSTANCE_INIT)},
	{"PACKAGE", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, PACKAGE)},
	{"MODULE", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, MODULE)},
	{"RECORD_COMPONENT", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, RECORD_COMPONENT)},
	{"RECORD", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$KindName, RECORD)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Kinds$KindName, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Kinds$KindName, name$)},
	{}
};

$MethodInfo _Kinds$KindName_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Kinds$KindNameArray*(*)()>(&Kinds$KindName::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Kinds$KindName::*)($String*,int32_t,$String*)>(&Kinds$KindName::init$))},
	{"getKind", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Ljava/util/Locale;Lcom/sun/tools/javac/api/Messages;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Kinds$KindName*(*)($String*)>(&Kinds$KindName::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Kinds$KindNameArray*(*)()>(&Kinds$KindName::values))},
	{}
};

$InnerClassInfo _Kinds$KindName_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Kinds$KindName", "com.sun.tools.javac.code.Kinds", "KindName", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Kinds$KindName_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Kinds$KindName",
	"java.lang.Enum",
	"com.sun.tools.javac.api.Formattable",
	_Kinds$KindName_FieldInfo_,
	_Kinds$KindName_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Kinds$KindName;>;Lcom/sun/tools/javac/api/Formattable;",
	nullptr,
	_Kinds$KindName_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Kinds"
};

$Object* allocate$Kinds$KindName($Class* clazz) {
	return $of($alloc(Kinds$KindName));
}

bool Kinds$KindName::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t Kinds$KindName::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* Kinds$KindName::clone() {
	 return this->$Enum::clone();
}

void Kinds$KindName::finalize() {
	this->$Enum::finalize();
}

Kinds$KindName* Kinds$KindName::ANNOTATION = nullptr;
Kinds$KindName* Kinds$KindName::CONSTRUCTOR = nullptr;
Kinds$KindName* Kinds$KindName::INTERFACE = nullptr;
Kinds$KindName* Kinds$KindName::ENUM = nullptr;
Kinds$KindName* Kinds$KindName::STATIC = nullptr;
Kinds$KindName* Kinds$KindName::TYPEVAR = nullptr;
Kinds$KindName* Kinds$KindName::BOUND = nullptr;
Kinds$KindName* Kinds$KindName::VAR = nullptr;
Kinds$KindName* Kinds$KindName::VAL = nullptr;
Kinds$KindName* Kinds$KindName::METHOD = nullptr;
Kinds$KindName* Kinds$KindName::CLASS = nullptr;
Kinds$KindName* Kinds$KindName::STATIC_INIT = nullptr;
Kinds$KindName* Kinds$KindName::INSTANCE_INIT = nullptr;
Kinds$KindName* Kinds$KindName::PACKAGE = nullptr;
Kinds$KindName* Kinds$KindName::MODULE = nullptr;
Kinds$KindName* Kinds$KindName::RECORD_COMPONENT = nullptr;
Kinds$KindName* Kinds$KindName::RECORD = nullptr;
$Kinds$KindNameArray* Kinds$KindName::$VALUES = nullptr;

$Kinds$KindNameArray* Kinds$KindName::$values() {
	$init(Kinds$KindName);
	return $new($Kinds$KindNameArray, {
		Kinds$KindName::ANNOTATION,
		Kinds$KindName::CONSTRUCTOR,
		Kinds$KindName::INTERFACE,
		Kinds$KindName::ENUM,
		Kinds$KindName::STATIC,
		Kinds$KindName::TYPEVAR,
		Kinds$KindName::BOUND,
		Kinds$KindName::VAR,
		Kinds$KindName::VAL,
		Kinds$KindName::METHOD,
		Kinds$KindName::CLASS,
		Kinds$KindName::STATIC_INIT,
		Kinds$KindName::INSTANCE_INIT,
		Kinds$KindName::PACKAGE,
		Kinds$KindName::MODULE,
		Kinds$KindName::RECORD_COMPONENT,
		Kinds$KindName::RECORD
	});
}

$Kinds$KindNameArray* Kinds$KindName::values() {
	$init(Kinds$KindName);
	return $cast($Kinds$KindNameArray, Kinds$KindName::$VALUES->clone());
}

Kinds$KindName* Kinds$KindName::valueOf($String* name) {
	$init(Kinds$KindName);
	return $cast(Kinds$KindName, $Enum::valueOf(Kinds$KindName::class$, name));
}

void Kinds$KindName::init$($String* $enum$name, int32_t $enum$ordinal, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
}

$String* Kinds$KindName::toString() {
	return this->name$;
}

$String* Kinds$KindName::getKind() {
	return "Kindname"_s;
}

$String* Kinds$KindName::toString($Locale* locale, $Messages* messages) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, toString());
	return $nc(messages)->getLocalizedString(locale, $$str({"compiler.misc."_s, s}), $$new($ObjectArray, 0));
}

void clinit$Kinds$KindName($Class* class$) {
	$assignStatic(Kinds$KindName::ANNOTATION, $new(Kinds$KindName, "ANNOTATION"_s, 0, "kindname.annotation"_s));
	$assignStatic(Kinds$KindName::CONSTRUCTOR, $new(Kinds$KindName, "CONSTRUCTOR"_s, 1, "kindname.constructor"_s));
	$assignStatic(Kinds$KindName::INTERFACE, $new(Kinds$KindName, "INTERFACE"_s, 2, "kindname.interface"_s));
	$assignStatic(Kinds$KindName::ENUM, $new(Kinds$KindName, "ENUM"_s, 3, "kindname.enum"_s));
	$assignStatic(Kinds$KindName::STATIC, $new(Kinds$KindName, "STATIC"_s, 4, "kindname.static"_s));
	$assignStatic(Kinds$KindName::TYPEVAR, $new(Kinds$KindName, "TYPEVAR"_s, 5, "kindname.type.variable"_s));
	$assignStatic(Kinds$KindName::BOUND, $new(Kinds$KindName, "BOUND"_s, 6, "kindname.type.variable.bound"_s));
	$assignStatic(Kinds$KindName::VAR, $new(Kinds$KindName, "VAR"_s, 7, "kindname.variable"_s));
	$assignStatic(Kinds$KindName::VAL, $new(Kinds$KindName, "VAL"_s, 8, "kindname.value"_s));
	$assignStatic(Kinds$KindName::METHOD, $new(Kinds$KindName, "METHOD"_s, 9, "kindname.method"_s));
	$assignStatic(Kinds$KindName::CLASS, $new(Kinds$KindName, "CLASS"_s, 10, "kindname.class"_s));
	$assignStatic(Kinds$KindName::STATIC_INIT, $new(Kinds$KindName, "STATIC_INIT"_s, 11, "kindname.static.init"_s));
	$assignStatic(Kinds$KindName::INSTANCE_INIT, $new(Kinds$KindName, "INSTANCE_INIT"_s, 12, "kindname.instance.init"_s));
	$assignStatic(Kinds$KindName::PACKAGE, $new(Kinds$KindName, "PACKAGE"_s, 13, "kindname.package"_s));
	$assignStatic(Kinds$KindName::MODULE, $new(Kinds$KindName, "MODULE"_s, 14, "kindname.module"_s));
	$assignStatic(Kinds$KindName::RECORD_COMPONENT, $new(Kinds$KindName, "RECORD_COMPONENT"_s, 15, "kindname.record.component"_s));
	$assignStatic(Kinds$KindName::RECORD, $new(Kinds$KindName, "RECORD"_s, 16, "kindname.record"_s));
	$assignStatic(Kinds$KindName::$VALUES, Kinds$KindName::$values());
}

Kinds$KindName::Kinds$KindName() {
}

$Class* Kinds$KindName::load$($String* name, bool initialize) {
	$loadClass(Kinds$KindName, name, initialize, &_Kinds$KindName_ClassInfo_, clinit$Kinds$KindName, allocate$Kinds$KindName);
	return class$;
}

$Class* Kinds$KindName::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com