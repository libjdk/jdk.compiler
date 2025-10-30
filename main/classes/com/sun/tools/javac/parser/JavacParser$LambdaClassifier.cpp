#include <com/sun/tools/javac/parser/JavacParser$LambdaClassifier.h>

#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/parser/JavacParser$LambdaParameterKind.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

#undef ERROR
#undef EXPLICIT
#undef IMPLICIT
#undef VAR
#undef VAR_SYNTAX_IMPLICIT_LAMBDAS

using $JCDiagnostic$FragmentArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$Fragment>;
using $JCDiagnostic$FragmentArray2 = $Array<::com::sun::tools::javac::util::JCDiagnostic$Fragment, 2>;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JavacParser$LambdaParameterKind = ::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavacParser$LambdaClassifier_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/parser/JavacParser;", nullptr, $FINAL | $SYNTHETIC, $field(JavacParser$LambdaClassifier, this$0)},
	{"kind", "Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, 0, $field(JavacParser$LambdaClassifier, kind)},
	{"diagFragment", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0, $field(JavacParser$LambdaClassifier, diagFragment)},
	{"params", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0, $field(JavacParser$LambdaClassifier, params)},
	{}
};

$MethodInfo _JavacParser$LambdaClassifier_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/JavacParser;)V", nullptr, 0, $method(static_cast<void(JavacParser$LambdaClassifier::*)($JavacParser*)>(&JavacParser$LambdaClassifier::init$))},
	{"addParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, 0},
	{"reduce", "(Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacParser$LambdaClassifier::*)($JavacParser$LambdaParameterKind*)>(&JavacParser$LambdaClassifier::reduce))},
	{"result", "()Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, 0},
	{}
};

$InnerClassInfo _JavacParser$LambdaClassifier_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$LambdaClassifier", "com.sun.tools.javac.parser.JavacParser", "LambdaClassifier", 0},
	{}
};

$ClassInfo _JavacParser$LambdaClassifier_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.JavacParser$LambdaClassifier",
	"java.lang.Object",
	nullptr,
	_JavacParser$LambdaClassifier_FieldInfo_,
	_JavacParser$LambdaClassifier_MethodInfo_,
	nullptr,
	nullptr,
	_JavacParser$LambdaClassifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$LambdaClassifier($Class* clazz) {
	return $of($alloc(JavacParser$LambdaClassifier));
}

void JavacParser$LambdaClassifier::init$($JavacParser* this$0) {
	$set(this, this$0, this$0);
}

void JavacParser$LambdaClassifier::addParameter($JCTree$JCVariableDecl* param) {
	if ($nc(param)->vartype != nullptr && param->name != $nc(this->this$0->names)->empty) {
		if (this->this$0->restrictedTypeName(param->vartype, false) != nullptr) {
			$init($JavacParser$LambdaParameterKind);
			reduce($JavacParser$LambdaParameterKind::VAR);
		} else {
			$init($JavacParser$LambdaParameterKind);
			reduce($JavacParser$LambdaParameterKind::EXPLICIT);
		}
	}
	if ($nc(param)->vartype == nullptr && param->name != $nc(this->this$0->names)->empty || $nc(param)->vartype != nullptr && param->name == $nc(this->this$0->names)->empty) {
		$init($JavacParser$LambdaParameterKind);
		reduce($JavacParser$LambdaParameterKind::IMPLICIT);
	}
}

void JavacParser$LambdaClassifier::reduce($JavacParser$LambdaParameterKind* newKind) {
	if (this->kind == nullptr) {
		$set(this, kind, newKind);
	} else {
		$init($JavacParser$LambdaParameterKind);
		if (this->kind != newKind && this->kind != $JavacParser$LambdaParameterKind::ERROR) {
			$JavacParser$LambdaParameterKind* currentKind = this->kind;
			$set(this, kind, $JavacParser$LambdaParameterKind::ERROR);
			bool varIndex = $nc(currentKind)->index == $JavacParser$LambdaParameterKind::VAR->index || $nc(newKind)->index == $JavacParser$LambdaParameterKind::VAR->index;
			$init($Source$Feature);
			$init($JavacParser);
			$set(this, diagFragment, $Source$Feature::VAR_SYNTAX_IMPLICIT_LAMBDAS->allowedInSource(this->this$0->source) || !varIndex ? $nc($nc($JavacParser::decisionTable)->get($nc(currentKind)->index))->get(newKind->index) : ($JCDiagnostic$Fragment*)nullptr);
		}
	}
}

$JavacParser$LambdaParameterKind* JavacParser$LambdaClassifier::result() {
	return this->kind;
}

JavacParser$LambdaClassifier::JavacParser$LambdaClassifier() {
}

$Class* JavacParser$LambdaClassifier::load$($String* name, bool initialize) {
	$loadClass(JavacParser$LambdaClassifier, name, initialize, &_JavacParser$LambdaClassifier_ClassInfo_, allocate$JavacParser$LambdaClassifier);
	return class$;
}

$Class* JavacParser$LambdaClassifier::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com