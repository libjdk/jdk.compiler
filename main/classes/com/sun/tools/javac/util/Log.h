#ifndef _com_sun_tools_javac_util_Log_h_
#define _com_sun_tools_javac_util_Log_h_
//$ class com.sun.tools.javac.util.Log
//$ extends com.sun.tools.javac.util.AbstractLog

#include <com/sun/tools/javac/util/AbstractLog.h>
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
				namespace main {
					class Option;
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
					class EndPosTable;
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
					class JCDiagnostic;
					class JCDiagnostic$DiagnosticInfo;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$DiagnosticType;
					class JavacMessages;
					class List;
					class ListBuffer;
					class Log$DiagnosticHandler;
					class Log$PrefixKind;
					class Log$WriterKind;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class DiagnosticListener;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Log : public ::com::sun::tools::javac::util::AbstractLog {
	$class(Log, 0, ::com::sun::tools::javac::util::AbstractLog)
public:
	Log();
	void init$(::com::sun::tools::javac::util::Context* context);
	void init$(::com::sun::tools::javac::util::Context* context, ::java::io::PrintWriter* writer);
	void init$(::com::sun::tools::javac::util::Context* context, ::java::io::PrintWriter* out, ::java::io::PrintWriter* err);
	void init$(::com::sun::tools::javac::util::Context* context, ::java::util::Map* writers);
	virtual ::javax::tools::JavaFileObject* currentSourceFile();
	virtual void directError($String* key, $ObjectArray* args) override;
	virtual void flush();
	virtual void flush(::com::sun::tools::javac::util::Log$WriterKind* kind);
	static $String* format($String* fmt, $ObjectArray* args);
	::com::sun::tools::javac::util::List* getCode(::com::sun::tools::javac::util::JCDiagnostic* d);
	void getCodeRecursive(::com::sun::tools::javac::util::ListBuffer* buf, ::com::sun::tools::javac::util::JCDiagnostic* d);
	virtual int32_t getDefaultMaxErrors();
	virtual int32_t getDefaultMaxWarnings();
	virtual ::com::sun::tools::javac::api::DiagnosticFormatter* getDiagnosticFormatter();
	int32_t getIntOption(::com::sun::tools::javac::util::Options* options, ::com::sun::tools::javac::main::Option* option, int32_t defaultValue);
	static $String* getLocalizedString($String* key, $ObjectArray* args);
	virtual ::java::io::PrintWriter* getWriter(::com::sun::tools::javac::util::Log$WriterKind* kind);
	virtual ::java::io::PrintWriter* getWriterForDiagnosticType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dt);
	virtual bool hasDiagnosticListener();
	virtual bool hasErrorOn(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	void initOptions(::com::sun::tools::javac::util::Options* options);
	static ::java::util::Map* initWriters(::com::sun::tools::javac::util::Context* context);
	static ::java::util::Map* initWriters(::java::io::PrintWriter* out, ::java::io::PrintWriter* err);
	static ::com::sun::tools::javac::util::Log* instance(::com::sun::tools::javac::util::Context* context);
	void lambda$new$1(::com::sun::tools::javac::util::Options* options);
	static ::com::sun::tools::javac::util::Log* lambda$preRegister$0(::java::io::PrintWriter* w, ::com::sun::tools::javac::util::Context* c);
	virtual $String* localize($String* key, $ObjectArray* args);
	virtual $String* localize(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagInfo);
	virtual $String* localize(::com::sun::tools::javac::util::Log$PrefixKind* pk, $String* key, $ObjectArray* args);
	virtual void popDiagnosticHandler(::com::sun::tools::javac::util::Log$DiagnosticHandler* h);
	static void preRegister(::com::sun::tools::javac::util::Context* context, ::java::io::PrintWriter* w);
	void printErrLine(int32_t pos, ::java::io::PrintWriter* writer);
	virtual void printLines($String* key, $ObjectArray* args);
	virtual void printLines(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diag);
	virtual void printLines(::com::sun::tools::javac::util::Log$PrefixKind* pk, $String* key, $ObjectArray* args);
	virtual void printLines(::com::sun::tools::javac::util::Log$WriterKind* wk, $String* key, $ObjectArray* args);
	virtual void printLines(::com::sun::tools::javac::util::Log$WriterKind* wk, ::com::sun::tools::javac::util::Log$PrefixKind* pk, $String* key, $ObjectArray* args);
	virtual void printNewline();
	virtual void printNewline(::com::sun::tools::javac::util::Log$WriterKind* wk);
	void printRawDiag(::java::io::PrintWriter* pw, $String* prefix, int32_t pos, $String* msg);
	virtual void printRawLines($String* msg);
	virtual void printRawLines(::com::sun::tools::javac::util::Log$WriterKind* kind, $String* msg);
	static void printRawLines(::java::io::PrintWriter* writer, $String* msg);
	virtual void printVerbose($String* key, $ObjectArray* args);
	virtual void prompt();
	virtual void rawError(int32_t pos, $String* msg);
	virtual void rawWarning(int32_t pos, $String* msg);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic* diagnostic) override;
	virtual void setDiagnosticFormatter(::com::sun::tools::javac::api::DiagnosticFormatter* diagFormatter);
	virtual void setEndPosTable(::javax::tools::JavaFileObject* name, ::com::sun::tools::javac::tree::EndPosTable* endPosTable);
	virtual void setWriter(::com::sun::tools::javac::util::Log$WriterKind* kind, ::java::io::PrintWriter* pw);
	virtual void setWriters(::java::io::PrintWriter* pw);
	virtual bool shouldReport(::javax::tools::JavaFileObject* file, int32_t pos);
	bool shouldReport(::com::sun::tools::javac::util::JCDiagnostic* d);
	virtual void strictWarning(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args);
	virtual void writeDiagnostic(::com::sun::tools::javac::util::JCDiagnostic* diag);
	static ::com::sun::tools::javac::util::Context$Key* logKey;
	static ::com::sun::tools::javac::util::Context$Key* outKey;
	static ::com::sun::tools::javac::util::Context$Key* errKey;
	::java::util::Map* writers = nullptr;
	int32_t MaxErrors = 0;
	int32_t MaxWarnings = 0;
	bool promptOnError = false;
	bool emitWarnings = false;
	bool suppressNotes = false;
	bool dumpOnError = false;
	::javax::tools::DiagnosticListener* diagListener = nullptr;
	::com::sun::tools::javac::api::DiagnosticFormatter* diagFormatter = nullptr;
	::java::util::Set* expectDiagKeys = nullptr;
	bool compressedOutput = false;
	::com::sun::tools::javac::util::JavacMessages* messages = nullptr;
	::com::sun::tools::javac::util::Log$DiagnosticHandler* diagnosticHandler = nullptr;
	int32_t nerrors = 0;
	int32_t nwarnings = 0;
	int32_t nsuppressederrors = 0;
	int32_t nsuppressedwarns = 0;
	::java::util::Set* recorded = nullptr;
	::java::util::Set* recordedSourceLevelErrors = nullptr;
	static bool useRawMessages;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Log_h_