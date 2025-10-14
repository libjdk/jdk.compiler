#ifndef _com_sun_tools_sjavac_Module_h_
#define _com_sun_tools_sjavac_Module_h_
//$ class com.sun.tools.sjavac.Module
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Package;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Module : public ::java::lang::Comparable {
	$class(Module, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	Module();
	void init$($String* n, $String* dn);
	virtual void addArtifacts($String* pkg, ::java::util::Set* as);
	virtual void addPackage(::com::sun::tools::sjavac::Package* p);
	virtual void addSource($String* pkg, ::com::sun::tools::sjavac::Source* src);
	virtual ::java::util::Map* artifacts();
	virtual int32_t compareTo(::com::sun::tools::sjavac::Module* o);
	virtual int32_t compareTo(Object$* o) override;
	virtual $String* dirname();
	virtual bool equals(Object$* o) override;
	virtual bool hasPubapiChanged($String* pkg, ::com::sun::tools::sjavac::pubapi::PubApi* newPubApi);
	virtual int32_t hashCode() override;
	static ::com::sun::tools::sjavac::Module* load($String* l);
	virtual ::com::sun::tools::sjavac::Package* lookupPackage($String* pkg);
	virtual ::com::sun::tools::sjavac::Source* lookupSource($String* path);
	virtual $String* name();
	virtual ::java::util::Map* packages();
	virtual void save(::java::lang::StringBuilder* b);
	static void saveModules(::java::util::Map* ms, ::java::lang::StringBuilder* b);
	virtual void setDependencies($String* pkg, ::java::util::Map* deps, bool cp);
	virtual void setPubapi($String* pkg, ::com::sun::tools::sjavac::pubapi::PubApi* ps);
	virtual ::java::util::Map* sources();
	$String* name$ = nullptr;
	$String* dirname$ = nullptr;
	::java::util::Map* packages$ = nullptr;
	::java::util::Map* sources$ = nullptr;
	::java::util::Map* artifacts$ = nullptr;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_Module_h_