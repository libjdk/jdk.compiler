#ifndef _com_sun_tools_sjavac_Source_h_
#define _com_sun_tools_sjavac_Source_h_
//$ class com.sun.tools.sjavac.Source
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Module;
				class Package;
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Source : public ::java::lang::Comparable {
	$class(Source, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	Source();
	void init$(::com::sun::tools::sjavac::Module* m, $String* n, ::java::io::File* f);
	void init$(::com::sun::tools::sjavac::Package* p, $String* n, int64_t lm);
	virtual int32_t compareTo(::com::sun::tools::sjavac::Source* o);
	virtual int32_t compareTo(Object$* o) override;
	static ::java::util::List* createPathMatchers(::java::nio::file::FileSystem* fs, ::java::util::List* patterns);
	virtual bool equals(Object$* o) override;
	virtual ::java::io::File* file();
	virtual int32_t hashCode() override;
	virtual bool isGenerated();
	virtual bool isLinkedOnly();
	virtual int64_t lastModified();
	static ::com::sun::tools::sjavac::Source* load(::com::sun::tools::sjavac::Package* lastPackage, $String* l, bool isGenerated);
	virtual void markAsGenerated();
	virtual void markAsLinkedOnly();
	virtual $String* name();
	static $String* packageOfJavaFile(::java::nio::file::Path* sourceRoot, ::java::nio::file::Path* javaFile);
	virtual ::com::sun::tools::sjavac::Package* pkg();
	void save(::java::lang::StringBuilder* b);
	static void saveSources(::java::util::Map* sources, ::java::lang::StringBuilder* b);
	static void scanRoot(::java::io::File* root, ::java::util::Set* suffixes, ::java::util::List* excludes, ::java::util::List* includes, ::java::util::Map* foundFiles, ::java::util::Map* foundModules, ::com::sun::tools::sjavac::Module* currentModule, bool permitSourcesWithoutPackage, bool inGensrc, bool inLinksrc);
	virtual void setPackage(::com::sun::tools::sjavac::Package* p);
	virtual $String* suffix();
	virtual $String* toString() override;
	::com::sun::tools::sjavac::Package* pkg$ = nullptr;
	$String* name$ = nullptr;
	$String* suffix$ = nullptr;
	int64_t lastModified$ = 0;
	::java::io::File* file$ = nullptr;
	bool isGenerated$ = false;
	bool linkedOnly = false;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_Source_h_