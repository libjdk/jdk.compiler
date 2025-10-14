#ifndef _com_sun_tools_javac_file_Locations$ModuleTable_h_
#define _com_sun_tools_javac_file_Locations$ModuleTable_h_
//$ class com.sun.tools.javac.file.Locations$ModuleTable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class Locations;
					class Locations$ModuleLocationHandler;
				}
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Map$Entry;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ModuleTable : public ::java::lang::Object {
	$class(Locations$ModuleTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Locations$ModuleTable();
	void init$(::com::sun::tools::javac::file::Locations* this$0);
	virtual void add(::com::sun::tools::javac::file::Locations$ModuleLocationHandler* h);
	virtual void clear();
	virtual bool contains(::java::nio::file::Path* file);
	virtual ::java::util::Set* explicitLocations();
	virtual ::com::sun::tools::javac::file::Locations$ModuleLocationHandler* get($String* name);
	virtual ::com::sun::tools::javac::file::Locations$ModuleLocationHandler* get(::java::nio::file::Path* path);
	virtual bool isEmpty();
	static bool lambda$explicitLocations$0(::java::util::Map$Entry* e);
	static ::com::sun::tools::javac::file::Locations$ModuleLocationHandler* lambda$explicitLocations$1(::java::util::Map$Entry* e);
	virtual ::java::util::Set* locations();
	virtual void updatePaths(::com::sun::tools::javac::file::Locations$ModuleLocationHandler* h);
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	::java::util::Map* nameMap = nullptr;
	::java::util::Map* pathMap = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$ModuleTable_h_