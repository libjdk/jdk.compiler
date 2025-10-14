#ifndef _com_sun_tools_javac_api_JavacTrees$4_h_
#define _com_sun_tools_javac_api_JavacTrees$4_h_
//$ class com.sun.tools.javac.api.JavacTrees$4
//$ extends com.sun.tools.javac.parser.Tokens$Comment

#include <com/sun/tools/javac/parser/Tokens$Comment.h>

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
					class Tokens$Comment$CommentStyle;
				}
			}
		}
	}
}
namespace javax {
	namespace tools {
		class FileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTrees$4 : public ::com::sun::tools::javac::parser::Tokens$Comment {
	$class(JavacTrees$4, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::Tokens$Comment)
public:
	JavacTrees$4();
	void init$(::com::sun::tools::javac::api::JavacTrees* this$0, ::javax::tools::FileObject* val$fileObject);
	virtual int32_t getSourcePos(int32_t index) override;
	virtual ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* getStyle() override;
	virtual $String* getText() override;
	virtual bool isDeprecated() override;
	::com::sun::tools::javac::api::JavacTrees* this$0 = nullptr;
	::javax::tools::FileObject* val$fileObject = nullptr;
	int32_t offset = 0;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees$4_h_