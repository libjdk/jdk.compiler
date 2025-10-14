#ifndef _com_sun_tools_javac_util_JavacMessages_h_
#define _com_sun_tools_javac_util_JavacMessages_h_
//$ class com.sun.tools.javac.util.JavacMessages
//$ extends com.sun.tools.javac.api.Messages

#include <com/sun/tools/javac/api/Messages.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter;
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
					class Context;
					class Context$Key;
					class JCDiagnostic$DiagnosticInfo;
					class JCDiagnostic$Factory;
					class JavacMessages$ResourceBundleHelper;
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export JavacMessages : public ::com::sun::tools::javac::api::Messages {
	$class(JavacMessages, 0, ::com::sun::tools::javac::api::Messages)
public:
	JavacMessages();
	void init$(::com::sun::tools::javac::util::Context* context);
	void init$($String* bundleName);
	void init$($String* bundleName, ::java::util::Locale* locale);
	void init$();
	virtual void add($String* bundleName) override;
	virtual void add(::com::sun::tools::javac::util::JavacMessages$ResourceBundleHelper* ma);
	virtual ::com::sun::tools::javac::util::List* getBundles(::java::util::Locale* locale);
	virtual ::java::util::Locale* getCurrentLocale();
	static ::java::util::ResourceBundle* getDefaultBundle();
	static $String* getDefaultLocalizedString($String* key, $ObjectArray* args);
	static ::com::sun::tools::javac::util::JavacMessages* getDefaultMessages();
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Factory* getDiagFactory();
	virtual $String* getLocalizedString($String* key, $ObjectArray* args);
	virtual $String* getLocalizedString(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagInfo);
	virtual $String* getLocalizedString(::java::util::Locale* l, $String* key, $ObjectArray* args) override;
	virtual $String* getLocalizedString(::java::util::Locale* l, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagInfo);
	static $String* getLocalizedString(::com::sun::tools::javac::util::List* bundles, $String* key, $ObjectArray* args);
	$String* getLocalizedString(::com::sun::tools::javac::util::List* bundles, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagInfo);
	static ::com::sun::tools::javac::util::JavacMessages* instance(::com::sun::tools::javac::util::Context* context);
	static ::java::util::ResourceBundle* lambda$add$0($String* bundleName, ::java::util::Locale* locale);
	virtual void setCurrentLocale(::java::util::Locale* locale);
	static ::com::sun::tools::javac::util::Context$Key* messagesKey;
	::java::util::Map* bundleCache = nullptr;
	::com::sun::tools::javac::util::List* bundleHelpers = nullptr;
	::java::util::Locale* currentLocale = nullptr;
	::com::sun::tools::javac::util::List* currentBundles = nullptr;
	::com::sun::tools::javac::api::DiagnosticFormatter* diagFormatter = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diagFactory = nullptr;
	::com::sun::tools::javac::util::Context* context = nullptr;
	static $String* defaultBundleName;
	static ::java::util::ResourceBundle* defaultBundle;
	static ::com::sun::tools::javac::util::JavacMessages* defaultMessages;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JavacMessages_h_