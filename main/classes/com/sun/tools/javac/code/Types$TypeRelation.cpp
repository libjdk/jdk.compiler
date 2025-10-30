#include <com/sun/tools/javac/code/Types$TypeRelation.h>

#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$TypeRelation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Types$TypeRelation::*)()>(&Types$TypeRelation::init$))},
	{}
};

$InnerClassInfo _Types$TypeRelation_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$TypeRelation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Types$TypeRelation",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	nullptr,
	_Types$TypeRelation_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Boolean;Lcom/sun/tools/javac/code/Type;>;",
	nullptr,
	_Types$TypeRelation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$TypeRelation($Class* clazz) {
	return $of($alloc(Types$TypeRelation));
}

void Types$TypeRelation::init$() {
	$Types$SimpleVisitor::init$();
}

Types$TypeRelation::Types$TypeRelation() {
}

$Class* Types$TypeRelation::load$($String* name, bool initialize) {
	$loadClass(Types$TypeRelation, name, initialize, &_Types$TypeRelation_ClassInfo_, allocate$Types$TypeRelation);
	return class$;
}

$Class* Types$TypeRelation::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com