#include <com/sun/tools/javac/tree/DCTree$DCErroneous.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/ErroneousTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef ERRONEOUS

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ErroneousTree = ::com::sun::source::doctree::ErroneousTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCErroneous_FieldInfo_[] = {
	{"body", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCErroneous, body)},
	{"diag", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCErroneous, diag)},
	{}
};

$MethodInfo _DCTree$DCErroneous_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/util/DiagnosticSource;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(static_cast<void(DCTree$DCErroneous::*)($String*,$JCDiagnostic$Factory*,$DiagnosticSource*,$String*,$ObjectArray*)>(&DCTree$DCErroneous::init$))},
	{"<init>", "(Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(static_cast<void(DCTree$DCErroneous::*)($String*,$JCDiagnostic*)>(&DCTree$DCErroneous::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDiagnostic", "()Ljavax/tools/Diagnostic;", "()Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getPreferredPosition", "()I", nullptr, $PUBLIC},
	{"getStartPosition", "()I", nullptr, $PUBLIC},
	{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCErroneous_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCErroneous", "com.sun.tools.javac.tree.DCTree", "DCErroneous", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCErroneous_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCErroneous",
	"com.sun.tools.javac.tree.DCTree",
	"com.sun.source.doctree.ErroneousTree,com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
	_DCTree$DCErroneous_FieldInfo_,
	_DCTree$DCErroneous_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCErroneous_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCErroneous($Class* clazz) {
	return $of($alloc(DCTree$DCErroneous));
}

$String* DCTree$DCErroneous::toString() {
	 return this->$DCTree::toString();
}

int32_t DCTree$DCErroneous::hashCode() {
	 return this->$DCTree::hashCode();
}

bool DCTree$DCErroneous::equals(Object$* arg0) {
	 return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCErroneous::clone() {
	 return this->$DCTree::clone();
}

void DCTree$DCErroneous::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCErroneous::init$($String* body, $JCDiagnostic$Factory* diags, $DiagnosticSource* diagSource, $String* code, $ObjectArray* args) {
	$DCTree::init$();
	$set(this, body, body);
	$set(this, diag, $nc(diags)->error(nullptr, diagSource, this, code, args));
}

void DCTree$DCErroneous::init$($String* body, $JCDiagnostic* diag) {
	$DCTree::init$();
	$set(this, body, body);
	$set(this, diag, diag);
}

$DocTree$Kind* DCTree$DCErroneous::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::ERRONEOUS;
}

$Object* DCTree$DCErroneous::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitErroneous(this, d));
}

$String* DCTree$DCErroneous::getBody() {
	return this->body;
}

$Diagnostic* DCTree$DCErroneous::getDiagnostic() {
	return this->diag;
}

$JCTree* DCTree$DCErroneous::getTree() {
	return nullptr;
}

int32_t DCTree$DCErroneous::getStartPosition() {
	return this->pos$;
}

int32_t DCTree$DCErroneous::getPreferredPosition() {
	return this->pos$ + $nc(this->body)->length() - 1;
}

int32_t DCTree$DCErroneous::getEndPosition($EndPosTable* endPosTable) {
	return this->pos$ + $nc(this->body)->length();
}

DCTree$DCErroneous::DCTree$DCErroneous() {
}

$Class* DCTree$DCErroneous::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCErroneous, name, initialize, &_DCTree$DCErroneous_ClassInfo_, allocate$DCTree$DCErroneous);
	return class$;
}

$Class* DCTree$DCErroneous::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com