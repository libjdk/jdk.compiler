#ifndef _com_sun_tools_javac_model_FilteredMemberList_h_
#define _com_sun_tools_javac_model_FilteredMemberList_h_
//$ class com.sun.tools.javac.model.FilteredMemberList
//$ extends java.util.AbstractList

#include <java/util/AbstractList.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Symbol;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class $export FilteredMemberList : public ::java::util::AbstractList {
	$class(FilteredMemberList, $NO_CLASS_INIT, ::java::util::AbstractList)
public:
	FilteredMemberList();
	using ::java::util::AbstractList::addAll;
	void init$(::com::sun::tools::javac::code::Scope* scope);
	virtual $Object* get(int32_t index) override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$iterator$0(::com::sun::tools::javac::code::Symbol* t);
	using ::java::util::AbstractList::remove;
	virtual int32_t size() override;
	using ::java::util::AbstractList::toArray;
	static bool unwanted(::com::sun::tools::javac::code::Symbol* s);
	::com::sun::tools::javac::code::Scope* scope = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_FilteredMemberList_h_