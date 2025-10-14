#ifndef _com_sun_tools_javac_tree_DocTreeMaker_h_
#define _com_sun_tools_javac_tree_DocTreeMaker_h_
//$ class com.sun.tools.javac.tree.DocTreeMaker
//$ extends com.sun.source.util.DocTreeFactory

#include <com/sun/source/util/DocTreeFactory.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class AttributeTree;
				class AttributeTree$ValueKind;
				class AuthorTree;
				class CommentTree;
				class DeprecatedTree;
				class DocCommentTree;
				class DocRootTree;
				class DocTree;
				class DocTypeTree;
				class EndElementTree;
				class EntityTree;
				class ErroneousTree;
				class HiddenTree;
				class IdentifierTree;
				class IndexTree;
				class InheritDocTree;
				class LinkTree;
				class LiteralTree;
				class ParamTree;
				class ProvidesTree;
				class ReferenceTree;
				class ReturnTree;
				class SeeTree;
				class SerialDataTree;
				class SerialFieldTree;
				class SerialTree;
				class SinceTree;
				class StartElementTree;
				class SummaryTree;
				class SystemPropertyTree;
				class TextTree;
				class ThrowsTree;
				class UnknownBlockTagTree;
				class UnknownInlineTagTree;
				class UsesTree;
				class ValueTree;
				class VersionTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTrees;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ReferenceParser;
					class Tokens$Comment;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree$DCDocComment;
					class DCTree$DCErroneous;
					class DCTree$DCReference;
					class JCTree;
					class JCTree$JCExpression;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Key;
					class DiagnosticSource;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Factory;
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export DocTreeMaker : public ::com::sun::source::util::DocTreeFactory {
	$class(DocTreeMaker, 0, ::com::sun::source::util::DocTreeFactory)
public:
	DocTreeMaker();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::tree::DocTreeMaker* at(int32_t pos) override;
	virtual ::com::sun::tools::javac::tree::DocTreeMaker* at(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	::java::util::List* cast(::java::util::List* list);
	int32_t defaultSentenceBreak($String* s);
	virtual ::java::util::List* getFirstSentence(::java::util::List* list) override;
	int32_t getSentenceBreak($String* s, ::com::sun::source::doctree::DocTree* dt);
	static ::com::sun::tools::javac::tree::DocTreeMaker* instance(::com::sun::tools::javac::util::Context* context);
	bool isSentenceBreak(::javax::lang::model::element::Name* tagName);
	bool isSentenceBreak(::com::sun::source::doctree::DocTree* dt, bool isFirstDocTree);
	bool isTextTree(::com::sun::source::doctree::DocTree* tree);
	virtual ::com::sun::source::doctree::AttributeTree* newAttributeTree(::javax::lang::model::element::Name* name, ::com::sun::source::doctree::AttributeTree$ValueKind* vkind, ::java::util::List* value) override;
	virtual ::com::sun::source::doctree::AuthorTree* newAuthorTree(::java::util::List* name) override;
	virtual ::com::sun::source::doctree::LiteralTree* newCodeTree(::com::sun::source::doctree::TextTree* text) override;
	virtual ::com::sun::source::doctree::CommentTree* newCommentTree($String* text) override;
	virtual ::com::sun::source::doctree::DeprecatedTree* newDeprecatedTree(::java::util::List* text) override;
	virtual ::com::sun::source::doctree::DocCommentTree* newDocCommentTree(::java::util::List* fullBody, ::java::util::List* tags) override;
	virtual ::com::sun::tools::javac::tree::DCTree$DCDocComment* newDocCommentTree(::com::sun::tools::javac::parser::Tokens$Comment* comment, ::java::util::List* fullBody, ::java::util::List* tags, ::java::util::List* preamble, ::java::util::List* postamble);
	virtual ::com::sun::source::doctree::DocCommentTree* newDocCommentTree(::java::util::List* fullBody, ::java::util::List* tags, ::java::util::List* preamble, ::java::util::List* postamble) override;
	virtual ::com::sun::source::doctree::DocRootTree* newDocRootTree() override;
	virtual ::com::sun::source::doctree::DocTypeTree* newDocTypeTree($String* text) override;
	virtual ::com::sun::source::doctree::EndElementTree* newEndElementTree(::javax::lang::model::element::Name* name) override;
	virtual ::com::sun::source::doctree::EntityTree* newEntityTree(::javax::lang::model::element::Name* name) override;
	virtual ::com::sun::source::doctree::ErroneousTree* newErroneousTree($String* text, ::javax::tools::Diagnostic* diag) override;
	virtual ::com::sun::tools::javac::tree::DCTree$DCErroneous* newErroneousTree($String* text, ::com::sun::tools::javac::util::DiagnosticSource* diagSource, $String* code, $ObjectArray* args);
	virtual ::com::sun::source::doctree::ThrowsTree* newExceptionTree(::com::sun::source::doctree::ReferenceTree* name, ::java::util::List* description) override;
	virtual ::com::sun::source::doctree::HiddenTree* newHiddenTree(::java::util::List* text) override;
	virtual ::com::sun::source::doctree::IdentifierTree* newIdentifierTree(::javax::lang::model::element::Name* name) override;
	virtual ::com::sun::source::doctree::IndexTree* newIndexTree(::com::sun::source::doctree::DocTree* term, ::java::util::List* description) override;
	virtual ::com::sun::source::doctree::InheritDocTree* newInheritDocTree() override;
	virtual ::com::sun::source::doctree::LinkTree* newLinkPlainTree(::com::sun::source::doctree::ReferenceTree* ref, ::java::util::List* label) override;
	virtual ::com::sun::source::doctree::LinkTree* newLinkTree(::com::sun::source::doctree::ReferenceTree* ref, ::java::util::List* label) override;
	virtual ::com::sun::source::doctree::LiteralTree* newLiteralTree(::com::sun::source::doctree::TextTree* text) override;
	virtual ::com::sun::source::doctree::ParamTree* newParamTree(bool isTypeParameter, ::com::sun::source::doctree::IdentifierTree* name, ::java::util::List* description) override;
	virtual ::com::sun::source::doctree::ProvidesTree* newProvidesTree(::com::sun::source::doctree::ReferenceTree* name, ::java::util::List* description) override;
	virtual ::com::sun::source::doctree::ReferenceTree* newReferenceTree($String* signature) override;
	virtual ::com::sun::tools::javac::tree::DCTree$DCReference* newReferenceTree($String* signature, ::com::sun::tools::javac::tree::JCTree$JCExpression* moduleName, ::com::sun::tools::javac::tree::JCTree* qualExpr, ::javax::lang::model::element::Name* member, ::java::util::List* paramTypes);
	virtual ::com::sun::source::doctree::ReturnTree* newReturnTree(::java::util::List* description) override;
	virtual ::com::sun::source::doctree::ReturnTree* newReturnTree(bool isInline, ::java::util::List* description) override;
	virtual ::com::sun::source::doctree::SeeTree* newSeeTree(::java::util::List* reference) override;
	virtual ::com::sun::source::doctree::SerialDataTree* newSerialDataTree(::java::util::List* description) override;
	virtual ::com::sun::source::doctree::SerialFieldTree* newSerialFieldTree(::com::sun::source::doctree::IdentifierTree* name, ::com::sun::source::doctree::ReferenceTree* type, ::java::util::List* description) override;
	virtual ::com::sun::source::doctree::SerialTree* newSerialTree(::java::util::List* description) override;
	virtual ::com::sun::source::doctree::SinceTree* newSinceTree(::java::util::List* text) override;
	virtual ::com::sun::source::doctree::StartElementTree* newStartElementTree(::javax::lang::model::element::Name* name, ::java::util::List* attrs, bool selfClosing) override;
	virtual ::com::sun::source::doctree::SummaryTree* newSummaryTree(::java::util::List* text) override;
	virtual ::com::sun::source::doctree::SystemPropertyTree* newSystemPropertyTree(::javax::lang::model::element::Name* propertyName) override;
	virtual ::com::sun::source::doctree::TextTree* newTextTree($String* text) override;
	virtual ::com::sun::source::doctree::ThrowsTree* newThrowsTree(::com::sun::source::doctree::ReferenceTree* name, ::java::util::List* description) override;
	virtual ::com::sun::source::doctree::UnknownBlockTagTree* newUnknownBlockTagTree(::javax::lang::model::element::Name* name, ::java::util::List* content) override;
	virtual ::com::sun::source::doctree::UnknownInlineTagTree* newUnknownInlineTagTree(::javax::lang::model::element::Name* name, ::java::util::List* content) override;
	virtual ::com::sun::source::doctree::UsesTree* newUsesTree(::com::sun::source::doctree::ReferenceTree* name, ::java::util::List* description) override;
	virtual ::com::sun::source::doctree::ValueTree* newValueTree(::com::sun::source::doctree::ReferenceTree* ref) override;
	virtual ::com::sun::source::doctree::VersionTree* newVersionTree(::java::util::List* text) override;
	int32_t skipWhiteSpace($String* s, int32_t start);
	::com::sun::tools::javac::util::Pair* splitBody(::java::util::Collection* list);
	static ::com::sun::tools::javac::util::Context$Key* treeMakerKey;
	::java::util::Set* sentenceBreakTags = nullptr;
	int32_t pos = 0;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::api::JavacTrees* trees = nullptr;
	::com::sun::tools::javac::parser::ReferenceParser* referenceParser = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DocTreeMaker_h_