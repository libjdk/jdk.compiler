#ifndef _jdk_internal_shellsupport_doc_JavadocFormatter_h_
#define _jdk_internal_shellsupport_doc_JavadocFormatter_h_
//$ class jdk.internal.shellsupport.doc.JavadocFormatter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CODE_HIGHLIGHT")
#undef CODE_HIGHLIGHT
#pragma push_macro("CODE_RESET")
#undef CODE_RESET
#pragma push_macro("CODE_UNDERLINE")
#undef CODE_UNDERLINE
#pragma push_macro("INDENT")
#undef INDENT
#pragma push_macro("MAX_LINE_LENGTH")
#undef MAX_LINE_LENGTH
#pragma push_macro("SHORTEST_LINE")
#undef SHORTEST_LINE

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Map;
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
namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {
				class JavadocFormatter$HtmlTag;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class $import JavadocFormatter : public ::java::lang::Object {
	$class(JavadocFormatter, 0, ::java::lang::Object)
public:
	JavadocFormatter();
	void init$(int32_t lineLimit, bool escapeSequencesSupported);
	static void addNewLineIfNeeded(::java::lang::StringBuilder* text);
	static void addSpaceIfNeeded(::java::lang::StringBuilder* text);
	static ::java::util::Map* countTableColumns(::com::sun::source::doctree::DocCommentTree* dct);
	$String* escape($String* sequence);
	virtual $String* formatJavadoc($String* header, $String* javadoc);
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* getHtmlTag(::javax::lang::model::element::Name* name);
	static $String* indentString(int32_t indent);
	static void reflow(::java::lang::StringBuilder* text, int32_t from, int32_t indent, int32_t limit);
	static $String* CODE_RESET;
	static $String* CODE_HIGHLIGHT;
	static $String* CODE_UNDERLINE;
	int32_t lineLimit = 0;
	bool escapeSequencesSupported = false;
	static const int32_t MAX_LINE_LENGTH = 95;
	static const int32_t SHORTEST_LINE = 30;
	static const int32_t INDENT = 4;
	static ::java::util::Map* docSections;
	static $String* inlineReturns;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#pragma pop_macro("CODE_HIGHLIGHT")
#pragma pop_macro("CODE_RESET")
#pragma pop_macro("CODE_UNDERLINE")
#pragma pop_macro("INDENT")
#pragma pop_macro("MAX_LINE_LENGTH")
#pragma pop_macro("SHORTEST_LINE")

#endif // _jdk_internal_shellsupport_doc_JavadocFormatter_h_