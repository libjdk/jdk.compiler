#include <com/sun/tools/javac/code/Types$ClosureHolder.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiPredicate = ::java::util::function::BiPredicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$ClosureHolder_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$ClosureHolder, this$0)},
	{"closure", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types$ClosureHolder, closure$)},
	{"minClosure", "Z", nullptr, $FINAL, $field(Types$ClosureHolder, minClosure)},
	{"shouldSkip", "Ljava/util/function/BiPredicate;", "Ljava/util/function/BiPredicate<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;", $FINAL, $field(Types$ClosureHolder, shouldSkip)},
	{}
};

$MethodInfo _Types$ClosureHolder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;ZLjava/util/function/BiPredicate;)V", "(ZLjava/util/function/BiPredicate<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(static_cast<void(Types$ClosureHolder::*)($Types*,bool,$BiPredicate*)>(&Types$ClosureHolder::init$))},
	{"add", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"closure", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"merge", "(Lcom/sun/tools/javac/code/Types$ClosureHolder;)Lcom/sun/tools/javac/code/Types$ClosureHolder;", nullptr, 0},
	{}
};

$InnerClassInfo _Types$ClosureHolder_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$ClosureHolder", "com.sun.tools.javac.code.Types", "ClosureHolder", 0},
	{}
};

$ClassInfo _Types$ClosureHolder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$ClosureHolder",
	"java.lang.Object",
	nullptr,
	_Types$ClosureHolder_FieldInfo_,
	_Types$ClosureHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Types$ClosureHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$ClosureHolder($Class* clazz) {
	return $of($alloc(Types$ClosureHolder));
}

void Types$ClosureHolder::init$($Types* this$0, bool minClosure, $BiPredicate* shouldSkip) {
	$set(this, this$0, this$0);
	$set(this, closure$, $List::nil());
	this->minClosure = minClosure;
	$set(this, shouldSkip, shouldSkip);
}

void Types$ClosureHolder::add($Type* type) {
	$set(this, closure$, this->this$0->insert(this->closure$, type, this->shouldSkip));
}

Types$ClosureHolder* Types$ClosureHolder::merge(Types$ClosureHolder* other) {
	$set(this, closure$, this->this$0->union$(this->closure$, $nc(other)->closure$, this->shouldSkip));
	return this;
}

$List* Types$ClosureHolder::closure() {
	return this->minClosure ? this->this$0->closureMin(this->closure$) : this->closure$;
}

Types$ClosureHolder::Types$ClosureHolder() {
}

$Class* Types$ClosureHolder::load$($String* name, bool initialize) {
	$loadClass(Types$ClosureHolder, name, initialize, &_Types$ClosureHolder_ClassInfo_, allocate$Types$ClosureHolder);
	return class$;
}

$Class* Types$ClosureHolder::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com