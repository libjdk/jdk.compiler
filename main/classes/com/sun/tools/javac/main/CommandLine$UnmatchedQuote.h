#ifndef _com_sun_tools_javac_main_CommandLine$UnmatchedQuote_h_
#define _com_sun_tools_javac_main_CommandLine$UnmatchedQuote_h_
//$ class com.sun.tools.javac.main.CommandLine$UnmatchedQuote
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $export CommandLine$UnmatchedQuote : public ::java::lang::Exception {
	$class(CommandLine$UnmatchedQuote, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	CommandLine$UnmatchedQuote();
	void init$($String* variable);
	static const int64_t serialVersionUID = 0;
	$String* variableName = nullptr;
	CommandLine$UnmatchedQuote(const CommandLine$UnmatchedQuote& e);
	virtual void throw$() override;
	inline CommandLine$UnmatchedQuote* operator ->() {
		return (CommandLine$UnmatchedQuote*)throwing$;
	}
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_CommandLine$UnmatchedQuote_h_