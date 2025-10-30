#include <com/sun/tools/javac/resources/javac.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$MethodInfo _javac_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(javac::*)()>(&javac::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _javac_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.javac",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_javac_MethodInfo_
};

$Object* allocate$javac($Class* clazz) {
	return $of($alloc(javac));
}

void javac::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javac::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("javac.fullVersion"_s),
			$of("{0} full version \"{1}\""_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.bug"_s),
			$of("An exception has occurred in the compiler ({0}). Please file a bug against the Java compiler via the Java bug reporting page (http://bugreport.java.com) after checking the Bug Database (http://bugs.java.com) for duplicates. Include your program, the following diagnostic, and the parameters passed to the Java compiler in your report. Thank you."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.io"_s),
			$of("\n\nAn input/output error occurred.\nConsult the following stack trace for details.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output"_s),
			$of("printing javac parameters to: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output.error"_s),
			$of("error while trying to print javac parameters to: {0}, parameters will follow:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.plugin.uncaught.exception"_s),
			$of("\n\nA plugin threw an uncaught exception.\nConsult the following stack trace for details.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.proc.annotation.uncaught.exception"_s),
			$of("\n\nAn annotation processor threw an uncaught exception.\nConsult the following stack trace for details.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.resource"_s),
			$of("\n\nThe system is out of resources.\nConsult the following stack trace for details.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage"_s),
			$of("Usage: {0} <options> <source files>\nuse --help for a list of possible options"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.header"_s),
			$of("Usage: {0} <options> <source files>\nwhere possible options include:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.nonstandard.footer"_s),
			$of("These extra options are subject to change without notice."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.A"_s),
			$of("Options to pass to annotation processors"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.AT"_s),
			$of("Read options and filenames from file"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.J"_s),
			$of("Pass <flag> directly to the runtime system"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Werror"_s),
			$of("Terminate compilation if warnings occur"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.X"_s),
			$of("Print help on extra options"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.a"_s),
			$of("Append to the bootstrap class path"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.p"_s),
			$of("Prepend to the bootstrap class path"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint"_s),
			$of("Enable recommended checks for problems in javadoc comments"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.custom"_s),
			$of("Enable or disable specific checks for problems in javadoc comments,\nwhere <group> is one of accessibility, html, missing, reference, or syntax,\nand <access> is one of public, protected, package, or private."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.args"_s),
			$of("[-]<packages>(,[-]<package>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.desc"_s),
			$of("Enable or disable checks in specific packages. Each <package> is either the\nqualified name of a package or a package name prefix followed by \'.*\', which\nexpands to all sub-packages of the given package. Each <package> can be prefixed\nwith \'-\' to disable checks for the specified package or packages."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.subopts"_s),
			$of("(all|none|[-]<group>)[/<access>]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint"_s),
			$of("Enable recommended warnings"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.all"_s),
			$of("Enable all warnings"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.custom"_s),
			$of("Warnings to enable or disable, separated by comma.\nPrecede a key by \'-\' to disable the specified warning.\nUse --help-lint to see the supported keys."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.auxiliaryclass"_s),
			$of("Warn about an auxiliary class that is hidden in a source file, and is used from other files."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.cast"_s),
			$of("Warn about use of unnecessary casts."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.classfile"_s),
			$of("Warn about issues related to classfile contents."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.dep-ann"_s),
			$of("Warn about items marked as deprecated in JavaDoc but not using the @Deprecated annotation."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.deprecation"_s),
			$of("Warn about use of deprecated items."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.divzero"_s),
			$of("Warn about division by constant integer 0."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.empty"_s),
			$of("Warn about empty statement after if."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.exports"_s),
			$of("Warn about issues regarding module exports."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.fallthrough"_s),
			$of("Warn about falling through from one case of a switch statement to the next."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.finally"_s),
			$of("Warn about finally clauses that do not terminate normally."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.missing-explicit-ctor"_s),
			$of("Warn about missing explicit constructors in public and protected classes in exported packages."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.module"_s),
			$of("Warn about module system related issues."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.opens"_s),
			$of("Warn about issues regarding module opens."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.options"_s),
			$of("Warn about issues relating to use of command line options."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overloads"_s),
			$of("Warn about issues regarding method overloads."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overrides"_s),
			$of("Warn about issues regarding method overrides."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.path"_s),
			$of("Warn about invalid path elements on the command line."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.preview"_s),
			$of("Warn about use of preview language features."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.processing"_s),
			$of("Warn about issues regarding annotation processing."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.rawtypes"_s),
			$of("Warn about use of raw types."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.removal"_s),
			$of("Warn about use of API that has been marked for removal."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-automatic"_s),
			$of("Warn about use of automatic modules in the requires clauses."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-transitive-automatic"_s),
			$of("Warn about automatic modules in requires transitive."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.serial"_s),
			$of("Warn about Serializable classes that do not provide a serial version ID. \n                         Also warn about access to non-public members from a serializable element."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.static"_s),
			$of("Warn about accessing a static member using an instance."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.strictfp"_s),
			$of("Warn about unnecessary use of the strictfp modifier."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.synchronization"_s),
			$of("Warn about synchronization attempts on instances of value-based classes."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.text-blocks"_s),
			$of("Warn about inconsistent white space characters in text block indentation."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.try"_s),
			$of("Warn about issues relating to use of try blocks (i.e. try-with-resources)."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.unchecked"_s),
			$of("Warn about unchecked operations."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.varargs"_s),
			$of("Warn about potentially unsafe vararg methods."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.none"_s),
			$of("Disable all warnings"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xstdout"_s),
			$of("Redirect standard output"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addExports"_s),
			$of("Specify a package to be considered as exported from its defining module\nto additional modules, or to all unnamed modules if <other-module> is ALL-UNNAMED."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addReads"_s),
			$of("Specify additional modules to be considered as required by a given module.\n<other-module> may be ALL-UNNAMED to require the unnamed module."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addmods"_s),
			$of("Root modules to resolve in addition to the initial modules, or all modules\non the module path if <module> is ALL-MODULE-PATH."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.Xlint"_s),
			$of("<key>(,<key>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addExports"_s),
			$of("<module>/<package>=<other-module>(,<other-module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addReads"_s),
			$of("<module>=<other-module>(,<other-module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addmods"_s),
			$of("<module>(,<module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.class"_s),
			$of("<class>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.class.list"_s),
			$of("<class1>[,<class2>,<class3>...]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.default.module.for.created.files"_s),
			$of("<module-name>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.directory"_s),
			$of("<directory>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.dirs"_s),
			$of("<dirs>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.encoding"_s),
			$of("<encoding>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.file"_s),
			$of("<filename>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.flag"_s),
			$of("<flag>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.jdk"_s),
			$of("<jdk>|none"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.key.equals.value"_s),
			$of("key[=value]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.limitmods"_s),
			$of("<module>(,<module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.m"_s),
			$of("<module>(,<module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.module.version"_s),
			$of("<version>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.mspath"_s),
			$of("<module-source-path>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.multi-release"_s),
			$of("<release>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.number"_s),
			$of("<number>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.patch"_s),
			$of("<module>=<file>(:<file>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.path"_s),
			$of("<path>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.pathname"_s),
			$of("<pathname>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.plugin"_s),
			$of("\"name args\""_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.profile"_s),
			$of("<profile>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.release"_s),
			$of("<release>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.bootclasspath"_s),
			$of("Override location of bootstrap class files"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.classpath"_s),
			$of("Specify where to find user class files and annotation processors"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.d"_s),
			$of("Specify where to place generated class files"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.default.module.for.created.files"_s),
			$of("Fallback target module for files created by annotation processors, if none specified or inferred."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.deprecation"_s),
			$of("Output source locations where deprecated APIs are used"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.diags"_s),
			$of("Select a diagnostic mode"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.encoding"_s),
			$of("Specify character encoding used by source files"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.endorseddirs"_s),
			$of("Override location of endorsed standards path"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.extdirs"_s),
			$of("Override location of installed extensions"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g"_s),
			$of("Generate all debugging info"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.lines.vars.source"_s),
			$of("Generate only some debugging info"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.none"_s),
			$of("Generate no debugging info"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.headerDest"_s),
			$of("Specify where to place generated native header files"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.help"_s),
			$of("Print this help message"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.help.lint"_s),
			$of("Print the supported keys for -Xlint"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.help.lint.header"_s),
			$of("The supported keys for -Xlint are:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.implicit"_s),
			$of("Specify whether or not to generate class files for implicitly referenced files"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.inherit_runtime_environment"_s),
			$of("Inherit module system configuration options from the runtime environment."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.limitmods"_s),
			$of("Limit the universe of observable modules"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.m"_s),
			$of("Compile only the specified module(s), check timestamps"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxerrs"_s),
			$of("Set the maximum number of errors to print"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxwarns"_s),
			$of("Set the maximum number of warnings to print"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.module.version"_s),
			$of("Specify version of modules that are being compiled"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulepath"_s),
			$of("Specify where to find application modules"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulesourcepath"_s),
			$of("Specify where to find input source files for multiple modules"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.moreinfo"_s),
			$of("Print extended information for type variables"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.multi-release"_s),
			$of("Specify which release to use in multi-release jars"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nogj"_s),
			$of("Don\'t accept generics in the language"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nowarn"_s),
			$of("Generate no warnings"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.parameters"_s),
			$of("Generate metadata for reflection on method parameters"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.patch"_s),
			$of("Override or augment a module with classes and resources\nin JAR files or directories"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.pkginfo"_s),
			$of("Specify handling of package-info files"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.plugin"_s),
			$of("Name and optional arguments for a plug-in to be run"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prefer"_s),
			$of("Specify which file to read when both a source file and class file are found for an implicitly compiled class"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.preview"_s),
			$of("Enable preview language features. To be used in conjunction with either -source or --release."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.print"_s),
			$of("Print out a textual representation of specified types"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printProcessorInfo"_s),
			$of("Print information about which annotations a processor is asked to process"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printRounds"_s),
			$of("Print information about rounds of annotation processing"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printsearch"_s),
			$of("Print information where classfiles are searched"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.proc.none.only"_s),
			$of("Control whether annotation processing and/or compilation is done."_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processor"_s),
			$of("Names of the annotation processors to run; bypasses default discovery process"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processormodulepath"_s),
			$of("Specify a module path where to find annotation processors"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processorpath"_s),
			$of("Specify where to find annotation processors"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.profile"_s),
			$of("Check that API used is available in the specified profile"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prompt"_s),
			$of("Stop after each error"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.release"_s),
			$of("Compile for the specified Java SE release. Supported releases: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.s"_s),
			$of("Emit java sources instead of classfiles"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.source"_s),
			$of("Provide source compatibility with the specified Java SE release. Supported releases: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourceDest"_s),
			$of("Specify where to place generated source files"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourcepath"_s),
			$of("Specify where to find input source files"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.system"_s),
			$of("Override location of system modules"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.target"_s),
			$of("Generate class files suitable for the specified Java SE release. Supported releases: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.upgrademodulepath"_s),
			$of("Override location of upgradeable modules"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.userpathsfirst"_s),
			$of("Search classpath and sourcepath for classes before the bootclasspath instead of after"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.verbose"_s),
			$of("Output messages about what the compiler is doing"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.version"_s),
			$of("Version information"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.version"_s),
			$of("{0} {1}"_s)
		})
	});
}

javac::javac() {
}

$Class* javac::load$($String* name, bool initialize) {
	$loadClass(javac, name, initialize, &_javac_ClassInfo_, allocate$javac);
	return class$;
}

$Class* javac::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com