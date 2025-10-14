#ifndef _com_sun_tools_javac_tree_TreeInfo$PatternPrimaryType_h_
#define _com_sun_tools_javac_tree_TreeInfo$PatternPrimaryType_h_
//$ class com.sun.tools.javac.tree.TreeInfo$PatternPrimaryType
//$ extends java.lang.Record

#include <java/lang/Record.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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

class $export TreeInfo$PatternPrimaryType : public ::java::lang::Record {
	$class(TreeInfo$PatternPrimaryType, $NO_CLASS_INIT, ::java::lang::Record)
public:
	TreeInfo$PatternPrimaryType();
	void init$(::com::sun::tools::javac::code::Type* type, bool unconditional);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual ::com::sun::tools::javac::code::Type* type();
	virtual bool unconditional();
	::com::sun::tools::javac::code::Type* type$ = nullptr;
	bool unconditional$ = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeInfo$PatternPrimaryType_h_