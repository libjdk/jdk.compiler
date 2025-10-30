#include <com/sun/tools/javac/code/Directive.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Directive_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Directive::*)()>(&Directive::init$))},
	{}
};

$InnerClassInfo _Directive_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Directive$UsesDirective", "com.sun.tools.javac.code.Directive", "UsesDirective", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Directive$RequiresDirective", "com.sun.tools.javac.code.Directive", "RequiresDirective", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Directive$ProvidesDirective", "com.sun.tools.javac.code.Directive", "ProvidesDirective", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Directive$OpensDirective", "com.sun.tools.javac.code.Directive", "OpensDirective", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Directive$OpensFlag", "com.sun.tools.javac.code.Directive", "OpensFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Directive$ExportsDirective", "com.sun.tools.javac.code.Directive", "ExportsDirective", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Directive$ExportsFlag", "com.sun.tools.javac.code.Directive", "ExportsFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Directive$RequiresFlag", "com.sun.tools.javac.code.Directive", "RequiresFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Directive_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Directive",
	"java.lang.Object",
	"javax.lang.model.element.ModuleElement$Directive",
	nullptr,
	_Directive_MethodInfo_,
	nullptr,
	nullptr,
	_Directive_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive$UsesDirective,com.sun.tools.javac.code.Directive$RequiresDirective,com.sun.tools.javac.code.Directive$ProvidesDirective,com.sun.tools.javac.code.Directive$OpensDirective,com.sun.tools.javac.code.Directive$OpensFlag,com.sun.tools.javac.code.Directive$ExportsDirective,com.sun.tools.javac.code.Directive$ExportsFlag,com.sun.tools.javac.code.Directive$RequiresFlag"
};

$Object* allocate$Directive($Class* clazz) {
	return $of($alloc(Directive));
}

void Directive::init$() {
}

Directive::Directive() {
}

$Class* Directive::load$($String* name, bool initialize) {
	$loadClass(Directive, name, initialize, &_Directive_ClassInfo_, allocate$Directive);
	return class$;
}

$Class* Directive::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com