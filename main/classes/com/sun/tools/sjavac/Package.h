#ifndef _com_sun_tools_sjavac_Package_h_
#define _com_sun_tools_sjavac_Package_h_
//$ class com.sun.tools.sjavac.Package
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

#pragma push_macro("DEP_PATTERN")
#undef DEP_PATTERN

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Module;
				class Source;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {
					class PubApi;
				}
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
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Package : public ::java::lang::Comparable {
	$class(Package, 0, ::java::lang::Comparable)
public:
	Package();
	void init$(::com::sun::tools::sjavac::Module* m, $String* n);
	virtual void addArtifact($String* a);
	virtual void addArtifact(::java::io::File* f);
	virtual void addArtifacts(::java::util::Set* as);
	virtual void addDependency($String* fullyQualifiedFrom, $String* fullyQualifiedTo, bool cp);
	virtual void addDependent($String* d);
	virtual void addSource(::com::sun::tools::sjavac::Source* s);
	virtual ::java::util::Map* artifacts();
	virtual int32_t compareTo(::com::sun::tools::sjavac::Package* o);
	virtual int32_t compareTo(Object$* o) override;
	virtual void deleteArtifacts();
	virtual ::java::util::Set* dependents();
	virtual $String* dirname();
	virtual bool equals(Object$* o) override;
	virtual bool existsInJavacState();
	virtual ::com::sun::tools::sjavac::pubapi::PubApi* getPubApi();
	virtual bool hasPubApiChanged(::com::sun::tools::sjavac::pubapi::PubApi* newPubApi);
	virtual int32_t hashCode() override;
	static ::java::util::stream::Stream* lambda$savePubapi$0($String* l);
	static ::com::sun::tools::sjavac::Package* load(::com::sun::tools::sjavac::Module* module, $String* l);
	virtual void loadArtifact($String* l);
	virtual ::com::sun::tools::sjavac::Module* mod();
	virtual $String* name();
	virtual void parseAndAddDependency($String* d, bool cp);
	virtual void save(::java::lang::StringBuilder* b);
	virtual void saveArtifacts(::java::lang::StringBuilder* b);
	virtual void saveDependencies(::java::lang::StringBuilder* b);
	static void savePackages(::java::util::Map* packages, ::java::lang::StringBuilder* b);
	virtual void savePubapi(::java::lang::StringBuilder* b);
	virtual void setArtifacts(::java::util::Set* as);
	virtual void setDependencies(::java::util::Map* ds, bool cp);
	virtual void setPubapi(::com::sun::tools::sjavac::pubapi::PubApi* newPubApi);
	virtual ::java::util::Map* sources();
	virtual ::java::util::Map* typeClasspathDependencies();
	virtual ::java::util::Map* typeDependencies();
	::com::sun::tools::sjavac::Module* mod$ = nullptr;
	$String* name$ = nullptr;
	$String* dirname$ = nullptr;
	::java::util::Set* dependents$ = nullptr;
	::java::util::Map* dependencies = nullptr;
	::java::util::Map* cpDependencies = nullptr;
	::com::sun::tools::sjavac::pubapi::PubApi* pubApi = nullptr;
	::java::util::Map* sources$ = nullptr;
	::java::util::Map* artifacts$ = nullptr;
	static ::java::util::regex::Pattern* DEP_PATTERN;
};

			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEP_PATTERN")

#endif // _com_sun_tools_sjavac_Package_h_