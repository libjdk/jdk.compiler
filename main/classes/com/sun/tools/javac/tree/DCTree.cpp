#include <com/sun/tools/javac/tree/DCTree.h>

#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/DocPretty.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$SimpleDiagnosticPosition.h>
#include <java/io/IOException.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $DocPretty = ::com::sun::tools::javac::tree::DocPretty;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$SimpleDiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$SimpleDiagnosticPosition;
using $IOException = ::java::io::IOException;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree_FieldInfo_[] = {
	{"pos", "I", nullptr, $PUBLIC, $field(DCTree, pos$)},
	{}
};

$MethodInfo _DCTree_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DCTree::*)()>(&DCTree::init$))},
	{"getSourcePosition", "(Lcom/sun/tools/javac/tree/DCTree$DCDocComment;)J", nullptr, $PUBLIC},
	{"pos", "(Lcom/sun/tools/javac/tree/DCTree$DCDocComment;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCVersion", "com.sun.tools.javac.tree.DCTree", "DCVersion", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCValue", "com.sun.tools.javac.tree.DCTree", "DCValue", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCUses", "com.sun.tools.javac.tree.DCTree", "DCUses", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCUnknownInlineTag", "com.sun.tools.javac.tree.DCTree", "DCUnknownInlineTag", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCUnknownBlockTag", "com.sun.tools.javac.tree.DCTree", "DCUnknownBlockTag", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCThrows", "com.sun.tools.javac.tree.DCTree", "DCThrows", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCText", "com.sun.tools.javac.tree.DCTree", "DCText", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCSystemProperty", "com.sun.tools.javac.tree.DCTree", "DCSystemProperty", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCSummary", "com.sun.tools.javac.tree.DCTree", "DCSummary", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCStartElement", "com.sun.tools.javac.tree.DCTree", "DCStartElement", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCSince", "com.sun.tools.javac.tree.DCTree", "DCSince", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCSerialField", "com.sun.tools.javac.tree.DCTree", "DCSerialField", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCSerialData", "com.sun.tools.javac.tree.DCTree", "DCSerialData", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCSerial", "com.sun.tools.javac.tree.DCTree", "DCSerial", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCSee", "com.sun.tools.javac.tree.DCTree", "DCSee", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCReturn", "com.sun.tools.javac.tree.DCTree", "DCReturn", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCReference", "com.sun.tools.javac.tree.DCTree", "DCReference", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCProvides", "com.sun.tools.javac.tree.DCTree", "DCProvides", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCParam", "com.sun.tools.javac.tree.DCTree", "DCParam", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCLiteral", "com.sun.tools.javac.tree.DCTree", "DCLiteral", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCLink", "com.sun.tools.javac.tree.DCTree", "DCLink", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCInheritDoc", "com.sun.tools.javac.tree.DCTree", "DCInheritDoc", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCIndex", "com.sun.tools.javac.tree.DCTree", "DCIndex", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCIdentifier", "com.sun.tools.javac.tree.DCTree", "DCIdentifier", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCHidden", "com.sun.tools.javac.tree.DCTree", "DCHidden", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCErroneous", "com.sun.tools.javac.tree.DCTree", "DCErroneous", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCEntity", "com.sun.tools.javac.tree.DCTree", "DCEntity", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCEndElement", "com.sun.tools.javac.tree.DCTree", "DCEndElement", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCDocType", "com.sun.tools.javac.tree.DCTree", "DCDocType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCDocRoot", "com.sun.tools.javac.tree.DCTree", "DCDocRoot", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCDeprecated", "com.sun.tools.javac.tree.DCTree", "DCDeprecated", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCComment", "com.sun.tools.javac.tree.DCTree", "DCComment", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCAuthor", "com.sun.tools.javac.tree.DCTree", "DCAuthor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCAttribute", "com.sun.tools.javac.tree.DCTree", "DCAttribute", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.DCTree$DCDocComment", "com.sun.tools.javac.tree.DCTree", "DCDocComment", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.DCTree",
	"java.lang.Object",
	"com.sun.source.doctree.DocTree",
	_DCTree_FieldInfo_,
	_DCTree_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree$DCVersion,com.sun.tools.javac.tree.DCTree$DCValue,com.sun.tools.javac.tree.DCTree$DCUses,com.sun.tools.javac.tree.DCTree$DCUnknownInlineTag,com.sun.tools.javac.tree.DCTree$DCUnknownBlockTag,com.sun.tools.javac.tree.DCTree$DCThrows,com.sun.tools.javac.tree.DCTree$DCText,com.sun.tools.javac.tree.DCTree$DCSystemProperty,com.sun.tools.javac.tree.DCTree$DCSummary,com.sun.tools.javac.tree.DCTree$DCStartElement,com.sun.tools.javac.tree.DCTree$DCSince,com.sun.tools.javac.tree.DCTree$DCSerialField,com.sun.tools.javac.tree.DCTree$DCSerialData,com.sun.tools.javac.tree.DCTree$DCSerial,com.sun.tools.javac.tree.DCTree$DCSee,com.sun.tools.javac.tree.DCTree$DCReturn,com.sun.tools.javac.tree.DCTree$DCReference,com.sun.tools.javac.tree.DCTree$DCProvides,com.sun.tools.javac.tree.DCTree$DCParam,com.sun.tools.javac.tree.DCTree$DCLiteral,com.sun.tools.javac.tree.DCTree$DCLink,com.sun.tools.javac.tree.DCTree$DCInheritDoc,com.sun.tools.javac.tree.DCTree$DCIndex,com.sun.tools.javac.tree.DCTree$DCIdentifier,com.sun.tools.javac.tree.DCTree$DCHidden,com.sun.tools.javac.tree.DCTree$DCErroneous,com.sun.tools.javac.tree.DCTree$DCEntity,com.sun.tools.javac.tree.DCTree$DCEndElement,com.sun.tools.javac.tree.DCTree$DCDocType,com.sun.tools.javac.tree.DCTree$DCDocRoot,com.sun.tools.javac.tree.DCTree$DCDeprecated,com.sun.tools.javac.tree.DCTree$DCComment,com.sun.tools.javac.tree.DCTree$DCAuthor,com.sun.tools.javac.tree.DCTree$DCAttribute,com.sun.tools.javac.tree.DCTree$DCInlineTag,com.sun.tools.javac.tree.DCTree$DCBlockTag,com.sun.tools.javac.tree.DCTree$DCDocComment,com.sun.tools.javac.tree.DCTree$DCEndPosTree"
};

$Object* allocate$DCTree($Class* clazz) {
	return $of($alloc(DCTree));
}

void DCTree::init$() {
}

int64_t DCTree::getSourcePosition($DCTree$DCDocComment* dc) {
	return $nc($nc(dc)->comment)->getSourcePos(this->pos$);
}

$JCDiagnostic$DiagnosticPosition* DCTree::pos($DCTree$DCDocComment* dc) {
	return $new($JCDiagnostic$SimpleDiagnosticPosition, $nc($nc(dc)->comment)->getSourcePos(this->pos$));
}

$String* DCTree::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringWriter, s, $new($StringWriter));
	try {
		$$new($DocPretty, s)->print(static_cast<$DocTree*>(this));
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of(e));
	}
	return s->toString();
}

DCTree::DCTree() {
}

$Class* DCTree::load$($String* name, bool initialize) {
	$loadClass(DCTree, name, initialize, &_DCTree_ClassInfo_, allocate$DCTree);
	return class$;
}

$Class* DCTree::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com