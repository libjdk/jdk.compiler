#include <com/sun/tools/javac/main/Option$40.h>

#include <com/sun/tools/javac/main/Option.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef PRIMARY
#undef US

using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Comparator = ::java::util::Comparator;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _Option$40_FieldInfo_[] = {
	{"collator", "Ljava/text/Collator;", nullptr, $FINAL, $field(Option$40, collator)},
	{}
};

$MethodInfo _Option$40_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Option$40::*)()>(&Option$40::init$))},
	{"compare", "(Lcom/sun/tools/javac/main/Option;Lcom/sun/tools/javac/main/Option;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Option$40_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	"showHelp",
	"(Lcom/sun/tools/javac/util/Log;Lcom/sun/tools/javac/main/Option$OptionKind;)V"
};

$InnerClassInfo _Option$40_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$40", nullptr, nullptr, 0},
	{"com.sun.tools.javac.main.Option$OptionKind", "com.sun.tools.javac.main.Option", "OptionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$40_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.main.Option$40",
	"java.lang.Object",
	"java.util.Comparator",
	_Option$40_FieldInfo_,
	_Option$40_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lcom/sun/tools/javac/main/Option;>;",
	&_Option$40_EnclosingMethodInfo_,
	_Option$40_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$40($Class* clazz) {
	return $of($alloc(Option$40));
}

void Option$40::init$() {
	$init($Locale);
	$set(this, collator, $Collator::getInstance($Locale::US));
	{
		$nc(this->collator)->setStrength($Collator::PRIMARY);
	}
}

int32_t Option$40::compare($Option* o1, $Option* o2) {
	return $nc(this->collator)->compare($nc(o1)->primaryName, $nc(o2)->primaryName);
}

int32_t Option$40::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($Option, o1), $cast($Option, o2));
}

Option$40::Option$40() {
}

$Class* Option$40::load$($String* name, bool initialize) {
	$loadClass(Option$40, name, initialize, &_Option$40_ClassInfo_, allocate$Option$40);
	return class$;
}

$Class* Option$40::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com