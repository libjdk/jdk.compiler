#include <com/sun/tools/javac/util/Iterators.h>

#include <com/sun/tools/javac/util/Iterators$1.h>
#include <com/sun/tools/javac/util/Iterators$2.h>
#include <com/sun/tools/javac/util/Iterators$CompoundIterator.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef EMPTY

using $Iterators$1 = ::com::sun::tools::javac::util::Iterators$1;
using $Iterators$2 = ::com::sun::tools::javac::util::Iterators$2;
using $Iterators$CompoundIterator = ::com::sun::tools::javac::util::Iterators$CompoundIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Iterators_FieldInfo_[] = {
	{"EMPTY", "Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Iterators, EMPTY)},
	{}
};

$MethodInfo _Iterators_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Iterators::*)()>(&Iterators::init$))},
	{"createCompoundIterator", "(Ljava/lang/Iterable;Ljava/util/function/Function;)Ljava/util/Iterator;", "<I:Ljava/lang/Object;O:Ljava/lang/Object;>(Ljava/lang/Iterable<TI;>;Ljava/util/function/Function<TI;Ljava/util/Iterator<TO;>;>;)Ljava/util/Iterator<TO;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($Iterable*,$Function*)>(&Iterators::createCompoundIterator))},
	{"createFilterIterator", "(Ljava/util/Iterator;Ljava/util/function/Predicate;)Ljava/util/Iterator;", "<E:Ljava/lang/Object;>(Ljava/util/Iterator<TE;>;Ljava/util/function/Predicate<TE;>;)Ljava/util/Iterator<TE;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($Iterator*,$Predicate*)>(&Iterators::createFilterIterator))},
	{}
};

$InnerClassInfo _Iterators_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Iterators$CompoundIterator", "com.sun.tools.javac.util.Iterators", "CompoundIterator", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.util.Iterators$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.util.Iterators$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Iterators_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Iterators",
	"java.lang.Object",
	nullptr,
	_Iterators_FieldInfo_,
	_Iterators_MethodInfo_,
	nullptr,
	nullptr,
	_Iterators_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Iterators$CompoundIterator,com.sun.tools.javac.util.Iterators$2,com.sun.tools.javac.util.Iterators$1"
};

$Object* allocate$Iterators($Class* clazz) {
	return $of($alloc(Iterators));
}

$Iterator* Iterators::EMPTY = nullptr;

void Iterators::init$() {
}

$Iterator* Iterators::createCompoundIterator($Iterable* inputs, $Function* convertor) {
	$init(Iterators);
	return $new($Iterators$CompoundIterator, inputs, convertor);
}

$Iterator* Iterators::createFilterIterator($Iterator* input, $Predicate* test) {
	$init(Iterators);
	return $new($Iterators$2, input, test);
}

void clinit$Iterators($Class* class$) {
	$assignStatic(Iterators::EMPTY, $new($Iterators$1));
}

Iterators::Iterators() {
}

$Class* Iterators::load$($String* name, bool initialize) {
	$loadClass(Iterators, name, initialize, &_Iterators_ClassInfo_, clinit$Iterators, allocate$Iterators);
	return class$;
}

$Class* Iterators::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com