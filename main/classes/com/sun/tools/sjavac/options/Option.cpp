#include <com/sun/tools/sjavac/options/Option.h>

#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option$1.h>
#include <com/sun/tools/sjavac/options/Option$10.h>
#include <com/sun/tools/sjavac/options/Option$11.h>
#include <com/sun/tools/sjavac/options/Option$12.h>
#include <com/sun/tools/sjavac/options/Option$13.h>
#include <com/sun/tools/sjavac/options/Option$14.h>
#include <com/sun/tools/sjavac/options/Option$15.h>
#include <com/sun/tools/sjavac/options/Option$16.h>
#include <com/sun/tools/sjavac/options/Option$17.h>
#include <com/sun/tools/sjavac/options/Option$18.h>
#include <com/sun/tools/sjavac/options/Option$19.h>
#include <com/sun/tools/sjavac/options/Option$2.h>
#include <com/sun/tools/sjavac/options/Option$20.h>
#include <com/sun/tools/sjavac/options/Option$21.h>
#include <com/sun/tools/sjavac/options/Option$22.h>
#include <com/sun/tools/sjavac/options/Option$23.h>
#include <com/sun/tools/sjavac/options/Option$24.h>
#include <com/sun/tools/sjavac/options/Option$25.h>
#include <com/sun/tools/sjavac/options/Option$26.h>
#include <com/sun/tools/sjavac/options/Option$3.h>
#include <com/sun/tools/sjavac/options/Option$4.h>
#include <com/sun/tools/sjavac/options/Option$5.h>
#include <com/sun/tools/sjavac/options/Option$6.h>
#include <com/sun/tools/sjavac/options/Option$7.h>
#include <com/sun/tools/sjavac/options/Option$8.h>
#include <com/sun/tools/sjavac/options/Option$9.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <java/io/File.h>
#include <java/lang/Enum.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CLASSPATH
#undef CLASS_PATH
#undef COMPARE_FOUND_SOURCES
#undef COPY
#undef CP
#undef D
#undef H
#undef I
#undef IMPLICIT
#undef J
#undef LOG
#undef MODULE_PATH
#undef P
#undef PERMIT_ARTIFACT
#undef PERMIT_SOURCES_WITHOUT_PACKAGE
#undef PERMIT_UNIDENTIFIED_ARTIFACTS
#undef S
#undef SERVER
#undef SOURCEPATH
#undef SOURCE_PATH
#undef SRC
#undef STARTSERVER
#undef STATE_DIR
#undef TR
#undef VERBOSE
#undef X

using $OptionArray = $Array<::com::sun::tools::sjavac::options::Option>;
using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option$1 = ::com::sun::tools::sjavac::options::Option$1;
using $Option$10 = ::com::sun::tools::sjavac::options::Option$10;
using $Option$11 = ::com::sun::tools::sjavac::options::Option$11;
using $Option$12 = ::com::sun::tools::sjavac::options::Option$12;
using $Option$13 = ::com::sun::tools::sjavac::options::Option$13;
using $Option$14 = ::com::sun::tools::sjavac::options::Option$14;
using $Option$15 = ::com::sun::tools::sjavac::options::Option$15;
using $Option$16 = ::com::sun::tools::sjavac::options::Option$16;
using $Option$17 = ::com::sun::tools::sjavac::options::Option$17;
using $Option$18 = ::com::sun::tools::sjavac::options::Option$18;
using $Option$19 = ::com::sun::tools::sjavac::options::Option$19;
using $Option$2 = ::com::sun::tools::sjavac::options::Option$2;
using $Option$20 = ::com::sun::tools::sjavac::options::Option$20;
using $Option$21 = ::com::sun::tools::sjavac::options::Option$21;
using $Option$22 = ::com::sun::tools::sjavac::options::Option$22;
using $Option$23 = ::com::sun::tools::sjavac::options::Option$23;
using $Option$24 = ::com::sun::tools::sjavac::options::Option$24;
using $Option$25 = ::com::sun::tools::sjavac::options::Option$25;
using $Option$26 = ::com::sun::tools::sjavac::options::Option$26;
using $Option$3 = ::com::sun::tools::sjavac::options::Option$3;
using $Option$4 = ::com::sun::tools::sjavac::options::Option$4;
using $Option$5 = ::com::sun::tools::sjavac::options::Option$5;
using $Option$6 = ::com::sun::tools::sjavac::options::Option$6;
using $Option$7 = ::com::sun::tools::sjavac::options::Option$7;
using $Option$8 = ::com::sun::tools::sjavac::options::Option$8;
using $Option$9 = ::com::sun::tools::sjavac::options::Option$9;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$FieldInfo _Option_FieldInfo_[] = {
	{"SRC", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SRC)},
	{"SOURCE_PATH", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SOURCE_PATH)},
	{"SOURCEPATH", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SOURCEPATH)},
	{"MODULE_PATH", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, MODULE_PATH)},
	{"P", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, P)},
	{"CLASS_PATH", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, CLASS_PATH)},
	{"CLASSPATH", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, CLASSPATH)},
	{"CP", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, CP)},
	{"X", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, X)},
	{"I", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, I)},
	{"TR", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, TR)},
	{"COPY", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, COPY)},
	{"J", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, J)},
	{"SERVER", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SERVER)},
	{"STARTSERVER", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, STARTSERVER)},
	{"IMPLICIT", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, IMPLICIT)},
	{"LOG", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, LOG)},
	{"VERBOSE", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, VERBOSE)},
	{"PERMIT_ARTIFACT", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PERMIT_ARTIFACT)},
	{"PERMIT_UNIDENTIFIED_ARTIFACTS", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PERMIT_UNIDENTIFIED_ARTIFACTS)},
	{"PERMIT_SOURCES_WITHOUT_PACKAGE", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PERMIT_SOURCES_WITHOUT_PACKAGE)},
	{"COMPARE_FOUND_SOURCES", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, COMPARE_FOUND_SOURCES)},
	{"D", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, D)},
	{"S", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, S)},
	{"H", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, H)},
	{"STATE_DIR", "Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, STATE_DIR)},
	{"$VALUES", "[Lcom/sun/tools/sjavac/options/Option;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option, $VALUES)},
	{"arg", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Option, arg)},
	{"description", "Ljava/lang/String;", nullptr, $FINAL, $field(Option, description)},
	{}
};

$MethodInfo _Option_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/sjavac/options/Option;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OptionArray*(*)()>(&Option::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Option::*)($String*,int32_t,$String*,$String*)>(&Option::init$))},
	{"getFileArg", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;ZZ)Ljava/nio/file/Path;", nullptr, 0},
	{"getFileListArg", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)Ljava/util/List;", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)Ljava/util/List<Ljava/nio/file/Path;>;", 0},
	{"getFilePatternArg", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)Ljava/lang/String;", nullptr, 0},
	{"hasOption", "()Z", nullptr, $PUBLIC},
	{"processCurrent", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Option::*)($ArgumentIterator*,$OptionHelper*)>(&Option::processCurrent))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option*(*)($String*)>(&Option::valueOf))},
	{"values", "()[Lcom/sun/tools/sjavac/options/Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OptionArray*(*)()>(&Option::values))},
	{}
};

$InnerClassInfo _Option_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$26", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$25", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$24", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$23", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$22", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$21", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$20", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$19", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$18", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$17", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$16", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$15", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$14", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$13", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$12", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$11", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$10", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$9", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$8", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$7", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$6", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$5", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$4", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$3", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.sjavac.options.Option$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.sjavac.options.Option",
	"java.lang.Enum",
	nullptr,
	_Option_FieldInfo_,
	_Option_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/sjavac/options/Option;>;",
	nullptr,
	_Option_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option$26,com.sun.tools.sjavac.options.Option$25,com.sun.tools.sjavac.options.Option$24,com.sun.tools.sjavac.options.Option$23,com.sun.tools.sjavac.options.Option$22,com.sun.tools.sjavac.options.Option$21,com.sun.tools.sjavac.options.Option$20,com.sun.tools.sjavac.options.Option$19,com.sun.tools.sjavac.options.Option$18,com.sun.tools.sjavac.options.Option$17,com.sun.tools.sjavac.options.Option$16,com.sun.tools.sjavac.options.Option$15,com.sun.tools.sjavac.options.Option$14,com.sun.tools.sjavac.options.Option$13,com.sun.tools.sjavac.options.Option$12,com.sun.tools.sjavac.options.Option$11,com.sun.tools.sjavac.options.Option$10,com.sun.tools.sjavac.options.Option$9,com.sun.tools.sjavac.options.Option$8,com.sun.tools.sjavac.options.Option$7,com.sun.tools.sjavac.options.Option$6,com.sun.tools.sjavac.options.Option$5,com.sun.tools.sjavac.options.Option$4,com.sun.tools.sjavac.options.Option$3,com.sun.tools.sjavac.options.Option$2,com.sun.tools.sjavac.options.Option$1"
};

$Object* allocate$Option($Class* clazz) {
	return $of($alloc(Option));
}

Option* Option::SRC = nullptr;
Option* Option::SOURCE_PATH = nullptr;
Option* Option::SOURCEPATH = nullptr;
Option* Option::MODULE_PATH = nullptr;
Option* Option::P = nullptr;
Option* Option::CLASS_PATH = nullptr;
Option* Option::CLASSPATH = nullptr;
Option* Option::CP = nullptr;
Option* Option::X = nullptr;
Option* Option::I = nullptr;
Option* Option::TR = nullptr;
Option* Option::COPY = nullptr;
Option* Option::J = nullptr;
Option* Option::SERVER = nullptr;
Option* Option::STARTSERVER = nullptr;
Option* Option::IMPLICIT = nullptr;
Option* Option::LOG = nullptr;
Option* Option::VERBOSE = nullptr;
Option* Option::PERMIT_ARTIFACT = nullptr;
Option* Option::PERMIT_UNIDENTIFIED_ARTIFACTS = nullptr;
Option* Option::PERMIT_SOURCES_WITHOUT_PACKAGE = nullptr;
Option* Option::COMPARE_FOUND_SOURCES = nullptr;
Option* Option::D = nullptr;
Option* Option::S = nullptr;
Option* Option::H = nullptr;
Option* Option::STATE_DIR = nullptr;
$OptionArray* Option::$VALUES = nullptr;

$OptionArray* Option::$values() {
	$init(Option);
	return $new($OptionArray, {
		Option::SRC,
		Option::SOURCE_PATH,
		Option::SOURCEPATH,
		Option::MODULE_PATH,
		Option::P,
		Option::CLASS_PATH,
		Option::CLASSPATH,
		Option::CP,
		Option::X,
		Option::I,
		Option::TR,
		Option::COPY,
		Option::J,
		Option::SERVER,
		Option::STARTSERVER,
		Option::IMPLICIT,
		Option::LOG,
		Option::VERBOSE,
		Option::PERMIT_ARTIFACT,
		Option::PERMIT_UNIDENTIFIED_ARTIFACTS,
		Option::PERMIT_SOURCES_WITHOUT_PACKAGE,
		Option::COMPARE_FOUND_SOURCES,
		Option::D,
		Option::S,
		Option::H,
		Option::STATE_DIR
	});
}

$OptionArray* Option::values() {
	$init(Option);
	return $cast($OptionArray, Option::$VALUES->clone());
}

Option* Option::valueOf($String* name) {
	$init(Option);
	return $cast(Option, $Enum::valueOf(Option::class$, name));
}

void Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, arg, arg);
	$set(this, description, description);
}

$List* Option::getFileListArg($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(iter)->hasNext()) {
		$init($File);
		$nc(helper)->reportError($$str({this->arg, " must be followed by a list of files separated by "_s, $File::pathSeparator}));
		return nullptr;
	}
	$var($List, result, $new($ArrayList));
	{
		$init($File);
		$var($StringArray, arr$, $nc($($cast($String, $nc(iter)->next())))->split($File::pathSeparator));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, pathStr, arr$->get(i$));
			result->add($($Paths::get(pathStr, $$new($StringArray, 0))));
		}
	}
	return result;
}

$Path* Option::getFileArg($ArgumentIterator* iter, $OptionHelper* helper, bool fileAcceptable, bool dirAcceptable) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(iter)->hasNext()) {
		$var($String, errmsg, $str({this->arg, " must be followed by "_s}));
		if (fileAcceptable && dirAcceptable) {
			$plusAssign(errmsg, "a file or directory."_s);
		} else if (fileAcceptable) {
			$plusAssign(errmsg, "a file."_s);
		} else if (dirAcceptable) {
			$plusAssign(errmsg, "a directory."_s);
		} else {
			$throwNew($IllegalArgumentException, "File or directory must be acceptable."_s);
		}
		$nc(helper)->reportError(errmsg);
		return nullptr;
	}
	return $Paths::get($($cast($String, $nc(iter)->next())), $$new($StringArray, 0));
}

$String* Option::getFilePatternArg($ArgumentIterator* iter, $OptionHelper* helper) {
	if (!$nc(iter)->hasNext()) {
		$nc(helper)->reportError($$str({this->arg, " must be followed by a glob pattern."_s}));
		return nullptr;
	}
	return $cast($String, $nc(iter)->next());
}

bool Option::hasOption() {
	bool var$0 = $nc(this->arg)->endsWith(":"_s);
	return var$0 || $nc(this->arg)->endsWith("="_s);
}

bool Option::processCurrent($ArgumentIterator* argIter, $OptionHelper* helper) {
	$var($String, fullArg, $nc(argIter)->current());
	if (hasOption() ? $nc(fullArg)->startsWith(this->arg) : fullArg->equals(this->arg)) {
		processMatching(argIter, helper);
		return true;
	}
	return false;
}

void clinit$Option($Class* class$) {
	$assignStatic(Option::SRC, $new($Option$1, "SRC"_s, 0, "-src"_s, "Location of source files to be compiled"_s));
	$assignStatic(Option::SOURCE_PATH, $new($Option$2, "SOURCE_PATH"_s, 1, "--source-path"_s, "Specify search path for sources."_s));
	$assignStatic(Option::SOURCEPATH, $new($Option$3, "SOURCEPATH"_s, 2, "-sourcepath"_s, "An alias for -sourcepath"_s));
	$assignStatic(Option::MODULE_PATH, $new($Option$4, "MODULE_PATH"_s, 3, "--module-path"_s, "Specify search path for modules."_s));
	$assignStatic(Option::P, $new($Option$5, "P"_s, 4, "-p"_s, "An alias for --module-path"_s));
	$assignStatic(Option::CLASS_PATH, $new($Option$6, "CLASS_PATH"_s, 5, "--class-path"_s, "Specify search path for classes."_s));
	$assignStatic(Option::CLASSPATH, $new($Option$7, "CLASSPATH"_s, 6, "-classpath"_s, "An alias for -classpath."_s));
	$assignStatic(Option::CP, $new($Option$8, "CP"_s, 7, "-cp"_s, "An alias for -classpath"_s));
	$assignStatic(Option::X, $new($Option$9, "X"_s, 8, "-x"_s, "Exclude files matching the given pattern"_s));
	$assignStatic(Option::I, $new($Option$10, "I"_s, 9, "-i"_s, "Include only files matching the given pattern"_s));
	$assignStatic(Option::TR, $new($Option$11, "TR"_s, 10, "-tr"_s, "Translate resources"_s));
	$assignStatic(Option::COPY, $new($Option$12, "COPY"_s, 11, "-copy"_s, "Copy resources"_s));
	$assignStatic(Option::J, $new($Option$13, "J"_s, 12, "-j"_s, "Number of cores"_s));
	$assignStatic(Option::SERVER, $new($Option$14, "SERVER"_s, 13, "--server:"_s, "Specify server configuration file of running server"_s));
	$assignStatic(Option::STARTSERVER, $new($Option$15, "STARTSERVER"_s, 14, "--startserver:"_s, "Start server and use the given configuration file"_s));
	$assignStatic(Option::IMPLICIT, $new($Option$16, "IMPLICIT"_s, 15, "-implicit:"_s, "Specify how to treat implicitly referenced source code"_s));
	$assignStatic(Option::LOG, $new($Option$17, "LOG"_s, 16, "--log="_s, "Specify logging level"_s));
	$assignStatic(Option::VERBOSE, $new($Option$18, "VERBOSE"_s, 17, "-verbose"_s, "Set verbosity level to \"info\""_s));
	$assignStatic(Option::PERMIT_ARTIFACT, $new($Option$19, "PERMIT_ARTIFACT"_s, 18, "--permit-artifact="_s, "Allow this artifact in destination directory"_s));
	$assignStatic(Option::PERMIT_UNIDENTIFIED_ARTIFACTS, $new($Option$20, "PERMIT_UNIDENTIFIED_ARTIFACTS"_s, 19, "--permit-unidentified-artifacts"_s, "Allow unidentified artifacts in destination directory"_s));
	$assignStatic(Option::PERMIT_SOURCES_WITHOUT_PACKAGE, $new($Option$21, "PERMIT_SOURCES_WITHOUT_PACKAGE"_s, 20, "--permit-sources-without-package"_s, "Permit sources in the default package"_s));
	$assignStatic(Option::COMPARE_FOUND_SOURCES, $new($Option$22, "COMPARE_FOUND_SOURCES"_s, 21, "--compare-found-sources"_s, "Compare found sources with given sources"_s));
	$assignStatic(Option::D, $new($Option$23, "D"_s, 22, "-d"_s, "Output destination directory"_s));
	$assignStatic(Option::S, $new($Option$24, "S"_s, 23, "-s"_s, "Directory for generated sources"_s));
	$assignStatic(Option::H, $new($Option$25, "H"_s, 24, "-h"_s, "Directory for header files"_s));
	$assignStatic(Option::STATE_DIR, $new($Option$26, "STATE_DIR"_s, 25, "--state-dir="_s, "Directory used to store sjavac state and log files."_s));
	$assignStatic(Option::$VALUES, Option::$values());
}

Option::Option() {
}

$Class* Option::load$($String* name, bool initialize) {
	$loadClass(Option, name, initialize, &_Option_ClassInfo_, clinit$Option, allocate$Option);
	return class$;
}

$Class* Option::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com