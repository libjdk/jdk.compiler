#include <com/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings.h>

#include <com/sun/tools/javac/comp/MatchBindingsComputer.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $MatchBindingsComputer = ::com::sun::tools::javac::comp::MatchBindingsComputer;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _MatchBindingsComputer$MatchBindings_FieldInfo_[] = {
	{"bindingsWhenTrue", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", $PUBLIC | $FINAL, $field(MatchBindingsComputer$MatchBindings, bindingsWhenTrue)},
	{"bindingsWhenFalse", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", $PUBLIC | $FINAL, $field(MatchBindingsComputer$MatchBindings, bindingsWhenFalse)},
	{"nullPattern", "Z", nullptr, $PUBLIC | $FINAL, $field(MatchBindingsComputer$MatchBindings, nullPattern)},
	{}
};

$MethodInfo _MatchBindingsComputer$MatchBindings_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;)V", $PUBLIC, $method(static_cast<void(MatchBindingsComputer$MatchBindings::*)($List*,$List*)>(&MatchBindingsComputer$MatchBindings::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;Z)V", $PUBLIC, $method(static_cast<void(MatchBindingsComputer$MatchBindings::*)($List*,$List*,bool)>(&MatchBindingsComputer$MatchBindings::init$))},
	{}
};

$InnerClassInfo _MatchBindingsComputer$MatchBindings_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings", "com.sun.tools.javac.comp.MatchBindingsComputer", "MatchBindings", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MatchBindingsComputer$MatchBindings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings",
	"java.lang.Object",
	nullptr,
	_MatchBindingsComputer$MatchBindings_FieldInfo_,
	_MatchBindingsComputer$MatchBindings_MethodInfo_,
	nullptr,
	nullptr,
	_MatchBindingsComputer$MatchBindings_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.MatchBindingsComputer"
};

$Object* allocate$MatchBindingsComputer$MatchBindings($Class* clazz) {
	return $of($alloc(MatchBindingsComputer$MatchBindings));
}

void MatchBindingsComputer$MatchBindings::init$($List* bindingsWhenTrue, $List* bindingsWhenFalse) {
	MatchBindingsComputer$MatchBindings::init$(bindingsWhenTrue, bindingsWhenFalse, false);
}

void MatchBindingsComputer$MatchBindings::init$($List* bindingsWhenTrue, $List* bindingsWhenFalse, bool nullPattern) {
	$set(this, bindingsWhenTrue, bindingsWhenTrue);
	$set(this, bindingsWhenFalse, bindingsWhenFalse);
	this->nullPattern = nullPattern;
}

MatchBindingsComputer$MatchBindings::MatchBindingsComputer$MatchBindings() {
}

$Class* MatchBindingsComputer$MatchBindings::load$($String* name, bool initialize) {
	$loadClass(MatchBindingsComputer$MatchBindings, name, initialize, &_MatchBindingsComputer$MatchBindings_ClassInfo_, allocate$MatchBindingsComputer$MatchBindings);
	return class$;
}

$Class* MatchBindingsComputer$MatchBindings::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com