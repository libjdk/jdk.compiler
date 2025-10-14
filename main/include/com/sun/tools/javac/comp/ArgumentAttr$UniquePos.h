#ifndef _com_sun_tools_javac_comp_ArgumentAttr$UniquePos_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$UniquePos_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$UniquePos
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class ArgumentAttr;
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
					class JCTree;
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
					class DiagnosticSource;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import ArgumentAttr$UniquePos : public ::java::lang::Object {
	$class(ArgumentAttr$UniquePos, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArgumentAttr$UniquePos();
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree* tree);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
	int32_t pos = 0;
	::com::sun::tools::javac::util::DiagnosticSource* source = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$UniquePos_h_