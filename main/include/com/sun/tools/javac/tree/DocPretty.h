#ifndef _com_sun_tools_javac_tree_DocPretty_h_
#define _com_sun_tools_javac_tree_DocPretty_h_
//$ class com.sun.tools.javac.tree.DocPretty
//$ extends com.sun.source.doctree.DocTreeVisitor

#include <com/sun/source/doctree/DocTreeVisitor.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class AttributeTree;
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
namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import DocPretty : public ::com::sun::source::doctree::DocTreeVisitor {
	$class(DocPretty, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTreeVisitor)
public:
	DocPretty();
	void init$(::java::io::Writer* out);
	virtual void print(::com::sun::source::doctree::DocTree* tree);
	virtual void print(Object$* s);
	virtual void print(::java::util::List* list);
	virtual void print(::java::util::List* list, $String* sep);
	virtual void printTagName(::com::sun::source::doctree::DocTree* node);
	virtual void println();
	virtual ::java::lang::Void* visitAttribute(::com::sun::source::doctree::AttributeTree* node, ::java::lang::Void* p);
	virtual $Object* visitAttribute(::com::sun::source::doctree::AttributeTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitAuthor(::com::sun::source::doctree::AuthorTree* node, ::java::lang::Void* p);
	virtual $Object* visitAuthor(::com::sun::source::doctree::AuthorTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitComment(::com::sun::source::doctree::CommentTree* node, ::java::lang::Void* p);
	virtual $Object* visitComment(::com::sun::source::doctree::CommentTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitDeprecated(::com::sun::source::doctree::DeprecatedTree* node, ::java::lang::Void* p);
	virtual $Object* visitDeprecated(::com::sun::source::doctree::DeprecatedTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, ::java::lang::Void* p);
	virtual $Object* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitDocRoot(::com::sun::source::doctree::DocRootTree* node, ::java::lang::Void* p);
	virtual $Object* visitDocRoot(::com::sun::source::doctree::DocRootTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitDocType(::com::sun::source::doctree::DocTypeTree* node, ::java::lang::Void* p);
	virtual $Object* visitDocType(::com::sun::source::doctree::DocTypeTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitEndElement(::com::sun::source::doctree::EndElementTree* node, ::java::lang::Void* p);
	virtual $Object* visitEndElement(::com::sun::source::doctree::EndElementTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitEntity(::com::sun::source::doctree::EntityTree* node, ::java::lang::Void* p);
	virtual $Object* visitEntity(::com::sun::source::doctree::EntityTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitErroneous(::com::sun::source::doctree::ErroneousTree* node, ::java::lang::Void* p);
	virtual $Object* visitErroneous(::com::sun::source::doctree::ErroneousTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitHidden(::com::sun::source::doctree::HiddenTree* node, ::java::lang::Void* p);
	virtual $Object* visitHidden(::com::sun::source::doctree::HiddenTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitIdentifier(::com::sun::source::doctree::IdentifierTree* node, ::java::lang::Void* p);
	virtual $Object* visitIdentifier(::com::sun::source::doctree::IdentifierTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitIndex(::com::sun::source::doctree::IndexTree* node, ::java::lang::Void* p);
	virtual $Object* visitIndex(::com::sun::source::doctree::IndexTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitInheritDoc(::com::sun::source::doctree::InheritDocTree* node, ::java::lang::Void* p);
	virtual $Object* visitInheritDoc(::com::sun::source::doctree::InheritDocTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitLink(::com::sun::source::doctree::LinkTree* node, ::java::lang::Void* p);
	virtual $Object* visitLink(::com::sun::source::doctree::LinkTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitLiteral(::com::sun::source::doctree::LiteralTree* node, ::java::lang::Void* p);
	virtual $Object* visitLiteral(::com::sun::source::doctree::LiteralTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitOther(::com::sun::source::doctree::DocTree* node, ::java::lang::Void* p);
	virtual $Object* visitOther(::com::sun::source::doctree::DocTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitParam(::com::sun::source::doctree::ParamTree* node, ::java::lang::Void* p);
	virtual $Object* visitParam(::com::sun::source::doctree::ParamTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitProvides(::com::sun::source::doctree::ProvidesTree* node, ::java::lang::Void* p);
	virtual $Object* visitProvides(::com::sun::source::doctree::ProvidesTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitReference(::com::sun::source::doctree::ReferenceTree* node, ::java::lang::Void* p);
	virtual $Object* visitReference(::com::sun::source::doctree::ReferenceTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitReturn(::com::sun::source::doctree::ReturnTree* node, ::java::lang::Void* p);
	virtual $Object* visitReturn(::com::sun::source::doctree::ReturnTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitSee(::com::sun::source::doctree::SeeTree* node, ::java::lang::Void* p);
	virtual $Object* visitSee(::com::sun::source::doctree::SeeTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitSerial(::com::sun::source::doctree::SerialTree* node, ::java::lang::Void* p);
	virtual $Object* visitSerial(::com::sun::source::doctree::SerialTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitSerialData(::com::sun::source::doctree::SerialDataTree* node, ::java::lang::Void* p);
	virtual $Object* visitSerialData(::com::sun::source::doctree::SerialDataTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitSerialField(::com::sun::source::doctree::SerialFieldTree* node, ::java::lang::Void* p);
	virtual $Object* visitSerialField(::com::sun::source::doctree::SerialFieldTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitSince(::com::sun::source::doctree::SinceTree* node, ::java::lang::Void* p);
	virtual $Object* visitSince(::com::sun::source::doctree::SinceTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitStartElement(::com::sun::source::doctree::StartElementTree* node, ::java::lang::Void* p);
	virtual $Object* visitStartElement(::com::sun::source::doctree::StartElementTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitSummary(::com::sun::source::doctree::SummaryTree* node, ::java::lang::Void* p);
	virtual $Object* visitSummary(::com::sun::source::doctree::SummaryTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitSystemProperty(::com::sun::source::doctree::SystemPropertyTree* node, ::java::lang::Void* p);
	virtual $Object* visitSystemProperty(::com::sun::source::doctree::SystemPropertyTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitText(::com::sun::source::doctree::TextTree* node, ::java::lang::Void* p);
	virtual $Object* visitText(::com::sun::source::doctree::TextTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitThrows(::com::sun::source::doctree::ThrowsTree* node, ::java::lang::Void* p);
	virtual $Object* visitThrows(::com::sun::source::doctree::ThrowsTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitUnknownBlockTag(::com::sun::source::doctree::UnknownBlockTagTree* node, ::java::lang::Void* p);
	virtual $Object* visitUnknownBlockTag(::com::sun::source::doctree::UnknownBlockTagTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitUnknownInlineTag(::com::sun::source::doctree::UnknownInlineTagTree* node, ::java::lang::Void* p);
	virtual $Object* visitUnknownInlineTag(::com::sun::source::doctree::UnknownInlineTagTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitUses(::com::sun::source::doctree::UsesTree* node, ::java::lang::Void* p);
	virtual $Object* visitUses(::com::sun::source::doctree::UsesTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitValue(::com::sun::source::doctree::ValueTree* node, ::java::lang::Void* p);
	virtual $Object* visitValue(::com::sun::source::doctree::ValueTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitVersion(::com::sun::source::doctree::VersionTree* node, ::java::lang::Void* p);
	virtual $Object* visitVersion(::com::sun::source::doctree::VersionTree* node, Object$* p) override;
	::java::io::Writer* out = nullptr;
	$String* lineSep = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DocPretty_h_