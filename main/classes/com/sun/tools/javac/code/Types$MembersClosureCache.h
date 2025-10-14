#ifndef _com_sun_tools_javac_code_Types$MembersClosureCache_h_
#define _com_sun_tools_javac_code_Types$MembersClosureCache_h_
//$ class com.sun.tools.javac.code.Types$MembersClosureCache
//$ extends com.sun.tools.javac.code.Types$SimpleVisitor

#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$CompoundScope;
					class Type;
					class Type$ClassType;
					class Type$TypeVar;
					class Types;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Types$MembersClosureCache : public ::com::sun::tools::javac::code::Types$SimpleVisitor {
	$class(Types$MembersClosureCache, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SimpleVisitor)
public:
	Types$MembersClosureCache();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	virtual ::com::sun::tools::javac::code::Scope$CompoundScope* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* _unused);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* _unused) override;
	virtual ::com::sun::tools::javac::code::Scope$CompoundScope* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* _unused);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* _unused) override;
	virtual ::com::sun::tools::javac::code::Scope$CompoundScope* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* _unused);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* _unused) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::java::util::Map* _map = nullptr;
	::java::util::Set* seenTypes = nullptr;
	::com::sun::tools::javac::code::Scope$CompoundScope* nilScope = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$MembersClosureCache_h_