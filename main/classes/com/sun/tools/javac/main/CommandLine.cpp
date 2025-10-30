#include <com/sun/tools/javac/main/CommandLine.h>

#include <com/sun/tools/javac/main/CommandLine$Tokenizer.h>
#include <com/sun/tools/javac/main/CommandLine$UnmatchedQuote.h>
#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NUL

using $CommandLine$Tokenizer = ::com::sun::tools::javac::main::CommandLine$Tokenizer;
using $CommandLine$UnmatchedQuote = ::com::sun::tools::javac::main::CommandLine$UnmatchedQuote;
using $BufferedReader = ::java::io::BufferedReader;
using $Reader = ::java::io::Reader;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Charset = ::java::nio::charset::Charset;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _CommandLine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CommandLine::*)()>(&CommandLine::init$))},
	{"appendParsedCommandArgs", "(Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*,$List*)>(&CommandLine::appendParsedCommandArgs)), "java.io.IOException"},
	{"appendParsedEnvVariables", "(Ljava/util/List;Ljava/lang/String;)V", "(Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*,$String*)>(&CommandLine::appendParsedEnvVariables)), "com.sun.tools.javac.main.CommandLine$UnmatchedQuote"},
	{"loadCmdFile", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$List*)>(&CommandLine::loadCmdFile)), "java.io.IOException"},
	{"parse", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($List*)>(&CommandLine::parse)), "java.io.IOException"},
	{"parse", "(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($String*,$List*)>(&CommandLine::parse)), "java.io.IOException,com.sun.tools.javac.main.CommandLine$UnmatchedQuote"},
	{}
};

$InnerClassInfo _CommandLine_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.CommandLine$UnmatchedQuote", "com.sun.tools.javac.main.CommandLine", "UnmatchedQuote", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.main.CommandLine$Tokenizer", "com.sun.tools.javac.main.CommandLine", "Tokenizer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CommandLine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.CommandLine",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CommandLine_MethodInfo_,
	nullptr,
	nullptr,
	_CommandLine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.CommandLine$UnmatchedQuote,com.sun.tools.javac.main.CommandLine$Tokenizer"
};

$Object* allocate$CommandLine($Class* clazz) {
	return $of($alloc(CommandLine));
}

void CommandLine::init$() {
}

$List* CommandLine::parse($List* args) {
	$var($List, newArgs, $new($ArrayList));
	appendParsedCommandArgs(newArgs, args);
	return newArgs;
}

void CommandLine::appendParsedCommandArgs($List* newArgs, $List* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, arg, $cast($String, i$->next()));
			{
				bool var$0 = $nc(arg)->length() > 1;
				if (var$0 && arg->charAt(0) == u'@') {
					$assign(arg, arg->substring(1));
					if (arg->charAt(0) == u'@') {
						$nc(newArgs)->add(arg);
					} else {
						loadCmdFile(arg, newArgs);
					}
				} else {
					$nc(newArgs)->add(arg);
				}
			}
		}
	}
}

$List* CommandLine::parse($String* envVariable, $List* args) {
	$useLocalCurrentObjectStackCache();
	$var($List, inArgs, $new($ArrayList));
	appendParsedEnvVariables(inArgs, envVariable);
	inArgs->addAll(args);
	$var($List, newArgs, $new($ArrayList));
	appendParsedCommandArgs(newArgs, inArgs);
	return newArgs;
}

void CommandLine::loadCmdFile($String* name, $List* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Path, var$0, $Paths::get(name, $$new($StringArray, 0)));
		$var($Reader, r, $Files::newBufferedReader(var$0, $($Charset::defaultCharset())));
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					$var($CommandLine$Tokenizer, t, $new($CommandLine$Tokenizer, r));
					$var($String, s, nullptr);
					while (($assign(s, t->nextToken())) != nullptr) {
						$nc(args)->add(s);
					}
				} catch ($Throwable& t$) {
					if (r != nullptr) {
						try {
							r->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				if (r != nullptr) {
					r->close();
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
}

void CommandLine::appendParsedEnvVariables($List* newArgs, $String* envVariable) {
	$useLocalCurrentObjectStackCache();
	if (envVariable == nullptr) {
		return;
	}
	$var($String, in, $System::getenv(envVariable));
	if (in == nullptr || $($nc(in)->trim())->isEmpty()) {
		return;
	}
	char16_t NUL = (char16_t)0;
	int32_t len = $nc(in)->length();
	int32_t pos = 0;
	$var($StringBuilder, sb, $new($StringBuilder));
	char16_t quote = NUL;
	char16_t ch = 0;
	bool loop$break = false;
	while (pos < len) {
		ch = in->charAt(pos);
		switch (ch) {
		case u'\"':
			{}
		case u'\'':
			{
				if (quote == NUL) {
					quote = ch;
				} else if (quote == ch) {
					quote = NUL;
				} else {
					sb->append(ch);
				}
				++pos;
				break;
			}
		case u'\f':
			{}
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\t':
			{}
		case u' ':
			{
				if (quote == NUL) {
					$nc(newArgs)->add($(sb->toString()));
					sb->setLength(0);
					while (ch == u'\f' || ch == u'\n' || ch == u'\r' || ch == u'\t' || ch == u' ') {
						++pos;
						if (pos >= len) {
							loop$break = true;
							break;
						}
						ch = in->charAt(pos);
					}
					if (loop$break) {
						break;
					}
					break;
				}
			}
		default:
			{
				sb->append(ch);
				++pos;
			}
		}

		if (loop$break) {
			break;
		}	}
	if (sb->length() != 0) {
		$nc(newArgs)->add($(sb->toString()));
	}
	if (quote != NUL) {
		$throwNew($CommandLine$UnmatchedQuote, envVariable);
	}
}

CommandLine::CommandLine() {
}

$Class* CommandLine::load$($String* name, bool initialize) {
	$loadClass(CommandLine, name, initialize, &_CommandLine_ClassInfo_, allocate$CommandLine);
	return class$;
}

$Class* CommandLine::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com