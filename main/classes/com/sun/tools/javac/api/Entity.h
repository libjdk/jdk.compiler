#ifndef _com_sun_tools_javac_api_Entity_h_
#define _com_sun_tools_javac_api_Entity_h_
//$ class com.sun.tools.javac.api.Entity
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class EntityTree;
			}
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class Entity : public ::java::lang::Object {
	$class(Entity, 0, ::java::lang::Object)
public:
	Entity();
	void init$();
	static $String* getCharacters(::com::sun::source::doctree::EntityTree* tree);
	static void put($String* name, char16_t c);
	static void put($String* name, char16_t c1, char16_t c2);
	static ::java::util::HashMap* entities;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_Entity_h_