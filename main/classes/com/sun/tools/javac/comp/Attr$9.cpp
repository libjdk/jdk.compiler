#include <com/sun/tools/javac/comp/Attr$9.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$9_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$9, this$0)},
	{}
};

$MethodInfo _Attr$9_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, 0, $method(static_cast<void(Attr$9::*)($Attr*)>(&Attr$9::init$))},
	{"makeNotionalInterface", "(Lcom/sun/tools/javac/code/Type$IntersectionClassType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$TypeSymbol*(Attr$9::*)($Type$IntersectionClassType*,$JCDiagnostic$DiagnosticPosition*)>(&Attr$9::makeNotionalInterface))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitIntersectionClassType", "(Lcom/sun/tools/javac/code/Type$IntersectionClassType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$9_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	nullptr,
	nullptr
};

$InnerClassInfo _Attr$9_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$9", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Attr$9_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$9",
	"com.sun.tools.javac.code.Types$MapVisitor",
	nullptr,
	_Attr$9_FieldInfo_,
	_Attr$9_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;>;",
	&_Attr$9_EnclosingMethodInfo_,
	_Attr$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$9($Class* clazz) {
	return $of($alloc(Attr$9));
}

void Attr$9::init$($Attr* this$0) {
	$set(this, this$0, this$0);
	$Types$MapVisitor::init$();
}

$Type* Attr$9::visitClassType($Type$ClassType* t, $JCDiagnostic$DiagnosticPosition* pos) {
	return $nc(t)->isIntersection() ? visitIntersectionClassType($cast($Type$IntersectionClassType, t), pos) : static_cast<$Type*>(t);
}

$Type* Attr$9::visitIntersectionClassType($Type$IntersectionClassType* ict, $JCDiagnostic$DiagnosticPosition* pos) {
	$nc(this->this$0->types)->findDescriptorSymbol($(makeNotionalInterface(ict, pos)));
	return ict;
}

$Symbol$TypeSymbol* Attr$9::makeNotionalInterface($Type$IntersectionClassType* ict, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, targs, $new($ListBuffer));
	$var($ListBuffer, supertypes, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($nc(ict)->interfaces_field)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, i, $cast($Type, i$->next()));
			{
				if ($nc(i)->isParameterized()) {
					targs->appendList($($nc($nc(i->tsym)->type)->allparams()));
				}
				supertypes->append($nc($nc(i)->tsym)->type);
			}
		}
	}
	$var($Type$IntersectionClassType, notionalIntf, $nc(this->this$0->types)->makeIntersectionType($(supertypes->toList())));
	$set($nc(notionalIntf), allparams_field, targs->toList());
	$nc(notionalIntf->tsym)->flags_field |= 512;
	return notionalIntf->tsym;
}

$Object* Attr$9::visitClassType($Type$ClassType* t, Object$* pos) {
	return $of(this->visitClassType(t, $cast($JCDiagnostic$DiagnosticPosition, pos)));
}

Attr$9::Attr$9() {
}

$Class* Attr$9::load$($String* name, bool initialize) {
	$loadClass(Attr$9, name, initialize, &_Attr$9_ClassInfo_, allocate$Attr$9);
	return class$;
}

$Class* Attr$9::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com