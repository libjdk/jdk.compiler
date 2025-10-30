#include <com/sun/tools/javac/parser/ReferenceParser$Reference.h>

#include <com/sun/tools/javac/parser/ReferenceParser.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $ReferenceParser = ::com::sun::tools::javac::parser::ReferenceParser;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _ReferenceParser$Reference_FieldInfo_[] = {
	{"moduleName", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $FINAL, $field(ReferenceParser$Reference, moduleName)},
	{"qualExpr", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $FINAL, $field(ReferenceParser$Reference, qualExpr)},
	{"member", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(ReferenceParser$Reference, member)},
	{"paramTypes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC | $FINAL, $field(ReferenceParser$Reference, paramTypes)},
	{}
};

$MethodInfo _ReferenceParser$Reference_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0, $method(static_cast<void(ReferenceParser$Reference::*)($JCTree$JCExpression*,$JCTree*,$Name*,$List*)>(&ReferenceParser$Reference::init$))},
	{}
};

$InnerClassInfo _ReferenceParser$Reference_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.ReferenceParser$Reference", "com.sun.tools.javac.parser.ReferenceParser", "Reference", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ReferenceParser$Reference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.ReferenceParser$Reference",
	"java.lang.Object",
	nullptr,
	_ReferenceParser$Reference_FieldInfo_,
	_ReferenceParser$Reference_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceParser$Reference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.ReferenceParser"
};

$Object* allocate$ReferenceParser$Reference($Class* clazz) {
	return $of($alloc(ReferenceParser$Reference));
}

void ReferenceParser$Reference::init$($JCTree$JCExpression* moduleName, $JCTree* qualExpr, $Name* member, $List* paramTypes) {
	$set(this, moduleName, moduleName);
	$set(this, qualExpr, qualExpr);
	$set(this, member, member);
	$set(this, paramTypes, paramTypes);
}

ReferenceParser$Reference::ReferenceParser$Reference() {
}

$Class* ReferenceParser$Reference::load$($String* name, bool initialize) {
	$loadClass(ReferenceParser$Reference, name, initialize, &_ReferenceParser$Reference_ClassInfo_, allocate$ReferenceParser$Reference);
	return class$;
}

$Class* ReferenceParser$Reference::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com