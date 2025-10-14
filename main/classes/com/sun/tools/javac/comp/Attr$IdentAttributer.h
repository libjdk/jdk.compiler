#ifndef _com_sun_tools_javac_comp_Attr$IdentAttributer_h_
#define _com_sun_tools_javac_comp_Attr$IdentAttributer_h_
//$ class com.sun.tools.javac.comp.Attr$IdentAttributer
//$ extends com.sun.source.util.SimpleTreeVisitor

#include <com/sun/source/util/SimpleTreeVisitor.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class IdentifierTree;
				class MemberSelectTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class Attr;
					class Env;
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

class Attr$IdentAttributer : public ::com::sun::source::util::SimpleTreeVisitor {
	$class(Attr$IdentAttributer, $NO_CLASS_INIT, ::com::sun::source::util::SimpleTreeVisitor)
public:
	Attr$IdentAttributer();
	void init$(::com::sun::tools::javac::comp::Attr* this$0);
	virtual ::com::sun::tools::javac::code::Symbol* visitIdentifier(::com::sun::source::tree::IdentifierTree* node, ::com::sun::tools::javac::comp::Env* env);
	virtual $Object* visitIdentifier(::com::sun::source::tree::IdentifierTree* node, Object$* env) override;
	virtual ::com::sun::tools::javac::code::Symbol* visitMemberSelect(::com::sun::source::tree::MemberSelectTree* node, ::com::sun::tools::javac::comp::Env* env);
	virtual $Object* visitMemberSelect(::com::sun::source::tree::MemberSelectTree* node, Object$* env) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$IdentAttributer_h_