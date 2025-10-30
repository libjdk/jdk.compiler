#include <com/sun/tools/javac/util/Iterators$2.h>

#include <com/sun/tools/javac/util/Iterators.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Iterators$2_FieldInfo_[] = {
	{"val$test", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(Iterators$2, val$test)},
	{"val$input", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Iterators$2, val$input)},
	{"current", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(Iterators$2, current)},
	{}
};

$MethodInfo _Iterators$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;Ljava/util/function/Predicate;)V", "()V", 0, $method(static_cast<void(Iterators$2::*)($Iterator*,$Predicate*)>(&Iterators$2::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"update", "()Ljava/lang/Object;", "()TE;", $PRIVATE, $method(static_cast<$Object*(Iterators$2::*)()>(&Iterators$2::update))},
	{}
};

$EnclosingMethodInfo _Iterators$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.Iterators",
	"createFilterIterator",
	"(Ljava/util/Iterator;Ljava/util/function/Predicate;)Ljava/util/Iterator;"
};

$InnerClassInfo _Iterators$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Iterators$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Iterators$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.Iterators$2",
	"java.lang.Object",
	"java.util.Iterator",
	_Iterators$2_FieldInfo_,
	_Iterators$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	&_Iterators$2_EnclosingMethodInfo_,
	_Iterators$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Iterators"
};

$Object* allocate$Iterators$2($Class* clazz) {
	return $of($alloc(Iterators$2));
}

void Iterators$2::init$($Iterator* val$input, $Predicate* val$test) {
	$set(this, val$input, val$input);
	$set(this, val$test, val$test);
	$set(this, current, update());
}

$Object* Iterators$2::update() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->val$input)->hasNext()) {
		$var($Object, sym, $nc(this->val$input)->next());
		if ($nc(this->val$test)->test(sym)) {
			return $of(sym);
		}
	}
	return $of(nullptr);
}

bool Iterators$2::hasNext() {
	return this->current != nullptr;
}

$Object* Iterators$2::next() {
	$var($Object, res, this->current);
	$set(this, current, update());
	return $of(res);
}

Iterators$2::Iterators$2() {
}

$Class* Iterators$2::load$($String* name, bool initialize) {
	$loadClass(Iterators$2, name, initialize, &_Iterators$2_ClassInfo_, allocate$Iterators$2);
	return class$;
}

$Class* Iterators$2::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com