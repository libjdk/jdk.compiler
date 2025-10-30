#include <com/sun/tools/javac/resources/javac_zh_CN.h>

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

$MethodInfo _javac_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(javac_zh_CN::*)()>(&javac_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _javac_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.javac_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_javac_zh_CN_MethodInfo_
};

$Object* allocate$javac_zh_CN($Class* clazz) {
	return $of($alloc(javac_zh_CN));
}

void javac_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javac_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("javac.fullVersion"_s),
			$of(u"{0}\u5b8c\u6574\u7248\u672c \"{1}\""_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.bug"_s),
			$of(u"\u7f16\u8bd1\u5668 ({0}) \u4e2d\u51fa\u73b0\u5f02\u5e38\u9519\u8bef\u3002\u5982\u679c\u5728 Bug Database (http://bugs.java.com) \u4e2d\u6ca1\u6709\u627e\u5230\u8be5\u9519\u8bef\uff0c\u8bf7\u901a\u8fc7 Java Bug \u62a5\u544a\u9875 (http://bugreport.java.com) \u5efa\u7acb\u8be5 Java \u7f16\u8bd1\u5668 Bug\u3002\u8bf7\u5728\u62a5\u544a\u4e2d\u9644\u4e0a\u60a8\u7684\u7a0b\u5e8f\u3001\u4ee5\u4e0b\u8bca\u65ad\u4fe1\u606f\u4ee5\u53ca\u4f20\u9012\u5230 Java \u7f16\u8bd1\u5668\u7684\u53c2\u6570\u3002\u8c22\u8c22\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.io"_s),
			$of(u"\n\n\u53d1\u751f\u8f93\u5165/\u8f93\u51fa\u9519\u8bef\u3002\n\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u53c2\u9605\u4ee5\u4e0b\u5806\u6808\u8ddf\u8e2a\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output"_s),
			$of(u"\u6b63\u5728\u5c06 javac \u53c2\u6570\u6253\u5370\u5230\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output.error"_s),
			$of(u"\u5c1d\u8bd5\u5c06 javac \u53c2\u6570\u6253\u5370\u5230 {0} \u65f6\u51fa\u9519\uff0c\u53c2\u6570\u5c06\u91c7\u7528\uff1a"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.plugin.uncaught.exception"_s),
			$of(u"\n\n\u63d2\u4ef6\u629b\u51fa\u672a\u6355\u83b7\u7684\u5f02\u5e38\u9519\u8bef\u3002\n\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u53c2\u9605\u4ee5\u4e0b\u5806\u6808\u8ddf\u8e2a\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.proc.annotation.uncaught.exception"_s),
			$of(u"\n\n\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f\u629b\u51fa\u672a\u6355\u83b7\u7684\u5f02\u5e38\u9519\u8bef\u3002\n\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u53c2\u9605\u4ee5\u4e0b\u5806\u6808\u8ddf\u8e2a\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.resource"_s),
			$of(u"\n\n\u7cfb\u7edf\u8d44\u6e90\u4e0d\u8db3\u3002\n\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u53c2\u9605\u4ee5\u4e0b\u5806\u6808\u8ddf\u8e2a\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage"_s),
			$of(u"\u7528\u6cd5: {0} <\u9009\u9879> <\u6e90\u6587\u4ef6>\n\u4f7f\u7528 --help \u53ef\u5217\u51fa\u53ef\u80fd\u7684\u9009\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.header"_s),
			$of(u"\u7528\u6cd5: {0} <options> <source files>\n\u5176\u4e2d, \u53ef\u80fd\u7684\u9009\u9879\u5305\u62ec:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.nonstandard.footer"_s),
			$of(u"\u8fd9\u4e9b\u989d\u5916\u9009\u9879\u5982\u6709\u66f4\u6539, \u6055\u4e0d\u53e6\u884c\u901a\u77e5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.A"_s),
			$of(u"\u4f20\u9012\u7ed9\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f\u7684\u9009\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.AT"_s),
			$of(u"\u4ece\u6587\u4ef6\u8bfb\u53d6\u9009\u9879\u548c\u6587\u4ef6\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.J"_s),
			$of(u"\u76f4\u63a5\u5c06 <\u6807\u8bb0> \u4f20\u9012\u7ed9\u8fd0\u884c\u65f6\u7cfb\u7edf"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Werror"_s),
			$of(u"\u51fa\u73b0\u8b66\u544a\u65f6\u7ec8\u6b62\u7f16\u8bd1"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.X"_s),
			$of(u"\u8f93\u51fa\u989d\u5916\u9009\u9879\u7684\u5e2e\u52a9"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.a"_s),
			$of(u"\u7f6e\u4e8e\u5f15\u5bfc\u7c7b\u8def\u5f84\u4e4b\u540e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.p"_s),
			$of(u"\u7f6e\u4e8e\u5f15\u5bfc\u7c7b\u8def\u5f84\u4e4b\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint"_s),
			$of(u"\u4e3a javadoc \u6ce8\u91ca\u4e2d\u7684\u95ee\u9898\u542f\u7528\u5efa\u8bae\u7684\u68c0\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.custom"_s),
			$of(u"\u4e3a javadoc \u6ce8\u91ca\u4e2d\u7684\u95ee\u9898\u542f\u7528\u6216\u7981\u7528\u7279\u5b9a\u68c0\u67e5,\n        \u5176\u4e2d <group> \u4e3a accessibility, html, missing, reference \u6216 syntax \u4e4b\u4e00\u3002\n        <access> \u4e3a public, protected, package \u6216 private \u4e4b\u4e00\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.args"_s),
			$of(u"[-]<\u7a0b\u5e8f\u5305>(,[-]<\u7a0b\u5e8f\u5305>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.desc"_s),
			$of(u"\u5728\u7279\u5b9a\u7684\u7a0b\u5e8f\u5305\u4e2d\u542f\u7528\u6216\u7981\u7528\u68c0\u67e5\u3002\u6bcf\u4e2a <\u7a0b\u5e8f\u5305> \u662f\n\u7a0b\u5e8f\u5305\u7684\u9650\u5b9a\u540d\u79f0, \u6216\u7a0b\u5e8f\u5305\u540d\u79f0\u524d\u7f00\u540e\u8ddf \'.*\', \n\u5b83\u6269\u5c55\u5230\u7ed9\u5b9a\u7a0b\u5e8f\u5305\u7684\u6240\u6709\u5b50\u7a0b\u5e8f\u5305\u3002\u5728\u6bcf\u4e2a <\u7a0b\u5e8f\u5305>\n\u524d\u9762\u52a0\u4e0a \'-\' \u53ef\u4ee5\u4e3a\u6307\u5b9a\u7a0b\u5e8f\u5305\u7981\u7528\u68c0\u67e5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.subopts"_s),
			$of("(all|none|[-]<group>)[/<access>]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint"_s),
			$of(u"\u542f\u7528\u5efa\u8bae\u7684\u8b66\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.all"_s),
			$of(u"\u542f\u7528\u6240\u6709\u8b66\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.custom"_s),
			$of(u"\u8981\u542f\u7528\u6216\u7981\u7528\u7684\u8b66\u544a, \u4f7f\u7528\u9017\u53f7\u5206\u9694\u3002\n        \u5728\u5173\u952e\u5b57\u524d\u9762\u52a0\u4e0a \'-\' \u53ef\u7981\u7528\u6307\u5b9a\u7684\u8b66\u544a\u3002\n        \u652f\u6301\u7684\u5173\u952e\u5b57\u5305\u62ec:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.auxiliaryclass"_s),
			$of(u"\u6709\u5173\u8f85\u52a9\u7c7b\u5728\u6e90\u6587\u4ef6\u4e2d\u9690\u85cf, \u4f46\u5728\u5176\u4ed6\u6587\u4ef6\u4e2d\u4f7f\u7528\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.cast"_s),
			$of(u"\u6709\u5173\u4f7f\u7528\u4e86\u4e0d\u5fc5\u8981\u8f6c\u6362\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.classfile"_s),
			$of(u"\u6709\u5173\u4e0e\u7c7b\u6587\u4ef6\u5185\u5bb9\u76f8\u5173\u7684\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.dep-ann"_s),
			$of(u"\u6709\u5173\u9879\u5728 JavaDoc \u4e2d\u6807\u8bb0\u4e3a\u5df2\u8fc7\u65f6\u4f46\u672a\u4f7f\u7528 @Deprecated \u6ce8\u91ca\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.deprecation"_s),
			$of(u"\u6709\u5173\u4f7f\u7528\u4e86\u5df2\u8fc7\u65f6\u9879\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.divzero"_s),
			$of(u"\u6709\u5173\u9664\u4ee5\u5e38\u91cf\u6574\u6570 0 \u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.empty"_s),
			$of(u"\u6709\u5173 if \u4e4b\u540e\u6ca1\u6709\u8bed\u53e5\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.exports"_s),
			$of(u"\u6709\u5173\u4e0e\u6a21\u5757\u5bfc\u51fa\u76f8\u5173\u7684\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.fallthrough"_s),
			$of(u"\u6709\u5173\u4ece switch \u8bed\u53e5\u7684\u4e00\u4e2a case \u5411\u4e0b\u987a\u5e8f\u6267\u884c\u5230\u4e0b\u4e00\u4e2a case \u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.finally"_s),
			$of(u"\u6709\u5173 finally \u5b50\u53e5\u672a\u6b63\u5e38\u7ec8\u6b62\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.missing-explicit-ctor"_s),
			$of(u"\u6709\u5173\u5bfc\u51fa\u7684\u7a0b\u5e8f\u5305\u4e2d\u7684\u516c\u5171\u548c\u53d7\u4fdd\u62a4\u7c7b\u4e2d\u7f3a\u5c11\u663e\u5f0f\u6784\u9020\u5668\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.module"_s),
			$of(u"\u6709\u5173\u6a21\u5757\u7cfb\u7edf\u76f8\u5173\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.opens"_s),
			$of(u"\u6709\u5173\u4e0e\u6a21\u5757\u6253\u5f00\u76f8\u5173\u7684\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.options"_s),
			$of(u"\u6709\u5173\u4e0e\u4f7f\u7528\u547d\u4ee4\u884c\u9009\u9879\u76f8\u5173\u7684\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overloads"_s),
			$of(u"\u6709\u5173\u4e0e\u65b9\u6cd5\u91cd\u8f7d\u76f8\u5173\u7684\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overrides"_s),
			$of(u"\u6709\u5173\u4e0e\u65b9\u6cd5\u8986\u76d6\u76f8\u5173\u7684\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.path"_s),
			$of(u"\u6709\u5173\u547d\u4ee4\u884c\u4e0a\u7684\u8def\u5f84\u5143\u7d20\u65e0\u6548\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.preview"_s),
			$of(u"\u6709\u5173\u4f7f\u7528\u9884\u89c8\u8bed\u8a00\u529f\u80fd\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.processing"_s),
			$of(u"\u6709\u5173\u4e0e\u6ce8\u91ca\u5904\u7406\u76f8\u5173\u7684\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.rawtypes"_s),
			$of(u"\u6709\u5173\u4f7f\u7528\u4e86\u539f\u59cb\u7c7b\u578b\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.removal"_s),
			$of(u"\u6709\u5173\u4f7f\u7528\u4e86\u6807\u8bb0\u4e3a\u5f85\u5220\u9664\u7684 API \u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-automatic"_s),
			$of(u"\u6709\u5173\u5728 requires \u5b50\u53e5\u4e2d\u4f7f\u7528\u81ea\u52a8\u6a21\u5757\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-transitive-automatic"_s),
			$of(u"\u6709\u5173 requires \u8fc7\u6e21\u4e2d\u7684\u81ea\u52a8\u6a21\u5757\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.serial"_s),
			$of(u"\u6709\u5173\u672a\u63d0\u4f9b\u5e8f\u5217\u7248\u672c ID \u7684\u53ef\u5e8f\u5217\u5316\u7c7b\u7684\u8b66\u544a\u3002\n                             \u6b64\u5916\u8fd8\u8b66\u544a\u6709\u5173\u53ef\u4e32\u884c\u5316\u5143\u7d20\u5bf9\u975e\u516c\u5171\u6210\u5458\u7684\u8bbf\u95ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.static"_s),
			$of(u"\u6709\u5173\u4f7f\u7528\u5b9e\u4f8b\u6765\u8bbf\u95ee\u9759\u6001\u6210\u5458\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.synchronization"_s),
			$of(u"\u6709\u5173\u5c1d\u8bd5\u5728\u57fa\u4e8e\u503c\u7684\u7c7b\u7684\u5b9e\u4f8b\u4e0a\u540c\u6b65\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.text-blocks"_s),
			$of(u"\u6709\u5173\u6587\u672c\u5757\u7f29\u8fdb\u4e2d\u7684\u7a7a\u683c\u5b57\u7b26\u4e0d\u4e00\u81f4\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.try"_s),
			$of(u"\u6709\u5173\u4e0e\u4f7f\u7528 try \u5757 (\u4f8b\u5982 try-with-resources) \u76f8\u5173\u7684\u95ee\u9898\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.unchecked"_s),
			$of(u"\u6709\u5173\u672a\u68c0\u67e5\u64cd\u4f5c\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.varargs"_s),
			$of(u"\u6709\u5173\u6f5c\u5728\u4e0d\u5b89\u5168\u7684 vararg \u65b9\u6cd5\u7684\u8b66\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.none"_s),
			$of(u"\u7981\u7528\u6240\u6709\u8b66\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xstdout"_s),
			$of(u"\u91cd\u5b9a\u5411\u6807\u51c6\u8f93\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addExports"_s),
			$of(u"\u6307\u5b9a\u88ab\u89c6\u4e3a\u5df2\u4ece\u5176\u5b9a\u4e49\u6a21\u5757\u5bfc\u51fa\u5230\u5176\u4ed6\u6a21\u5757\u6216\u8005\u5bfc\u51fa\u5230\u6240\u6709\n        \u672a\u547d\u540d\u6a21\u5757 (\u5982\u679c <other-module> \u4e3a ALL-UNNAMED) \u7684\u7a0b\u5e8f\u5305\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addReads"_s),
			$of(u"\u6307\u5b9a\u88ab\u89c6\u4e3a\u7ed9\u5b9a\u6a21\u5757\u9700\u8981\u7684\u5176\u4ed6\u6a21\u5757\u3002\n<other-module> \u53ef\u80fd\u9700\u8981\u4e3a ALL-UNNAMED, \u4ee5\u4fbf\u8981\u6c42\u672a\u547d\u540d\u6a21\u5757\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addmods"_s),
			$of(u"\u9664\u4e86\u521d\u59cb\u6a21\u5757\u4e4b\u5916\u8981\u89e3\u6790\u7684\u6839\u6a21\u5757; \u5982\u679c <module>\n        \u4e3a ALL-MODULE-PATH, \u5219\u4e3a\u6a21\u5757\u8def\u5f84\u4e2d\u7684\u6240\u6709\u6a21\u5757\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.Xlint"_s),
			$of(u"<\u5bc6\u94a5>(,<\u5bc6\u94a5>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addExports"_s),
			$of(u"<\u6a21\u5757>/<\u7a0b\u5e8f\u5305>=<\u5176\u4ed6\u6a21\u5757>(,<\u5176\u4ed6\u6a21\u5757>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addReads"_s),
			$of(u"<\u6a21\u5757>=<\u5176\u4ed6\u6a21\u5757>(,<\u5176\u4ed6\u6a21\u5757>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addmods"_s),
			$of(u"<\u6a21\u5757>(,<\u6a21\u5757>)*"_s)
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
			$of(u"<\u6a21\u5757>(,<\u6a21\u5757>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.m"_s),
			$of(u"<\u6a21\u5757>(,<\u6a21\u5757>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.module.version"_s),
			$of(u"<\u7248\u672c>"_s)
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
			$of(u"<\u6a21\u5757>=<\u6587\u4ef6>(:<\u6587\u4ef6>)*"_s)
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
			$of(u"\"\u540d\u79f0\u53c2\u6570\""_s)
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
			$of(u"\u8986\u76d6\u5f15\u5bfc\u7c7b\u6587\u4ef6\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.classpath"_s),
			$of(u"\u6307\u5b9a\u67e5\u627e\u7528\u6237\u7c7b\u6587\u4ef6\u548c\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.d"_s),
			$of(u"\u6307\u5b9a\u653e\u7f6e\u751f\u6210\u7684\u7c7b\u6587\u4ef6\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.default.module.for.created.files"_s),
			$of(u"\u7531\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f\u521b\u5efa\u7684\u6587\u4ef6\u7684\u5907\u7528\u76ee\u6807\u6a21\u5757 (\u5982\u679c\u672a\u6307\u5b9a\u6216\u63a8\u65ad\u4efb\u4f55\u6a21\u5757)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.deprecation"_s),
			$of(u"\u8f93\u51fa\u4f7f\u7528\u5df2\u8fc7\u65f6\u7684 API \u7684\u6e90\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.diags"_s),
			$of(u"\u9009\u62e9\u8bca\u65ad\u6a21\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.doclint.format"_s),
			$of(u"\u6307\u5b9a\u6587\u6863\u6ce8\u91ca\u7684\u683c\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.encoding"_s),
			$of(u"\u6307\u5b9a\u6e90\u6587\u4ef6\u4f7f\u7528\u7684\u5b57\u7b26\u7f16\u7801"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.endorseddirs"_s),
			$of(u"\u8986\u76d6\u7b7e\u540d\u7684\u6807\u51c6\u8def\u5f84\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.extdirs"_s),
			$of(u"\u8986\u76d6\u6240\u5b89\u88c5\u6269\u5c55\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g"_s),
			$of(u"\u751f\u6210\u6240\u6709\u8c03\u8bd5\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.lines.vars.source"_s),
			$of(u"\u53ea\u751f\u6210\u67d0\u4e9b\u8c03\u8bd5\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.none"_s),
			$of(u"\u4e0d\u751f\u6210\u4efb\u4f55\u8c03\u8bd5\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.headerDest"_s),
			$of(u"\u6307\u5b9a\u653e\u7f6e\u751f\u6210\u7684\u672c\u673a\u6807\u5934\u6587\u4ef6\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.help"_s),
			$of(u"\u8f93\u51fa\u6b64\u5e2e\u52a9\u6d88\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.implicit"_s),
			$of(u"\u6307\u5b9a\u662f\u5426\u4e3a\u9690\u5f0f\u5f15\u7528\u6587\u4ef6\u751f\u6210\u7c7b\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.inherit_runtime_environment"_s),
			$of(u"\u4ece\u8fd0\u884c\u65f6\u73af\u5883\u7ee7\u627f\u6a21\u5757\u7cfb\u7edf\u914d\u7f6e\u9009\u9879\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.limitmods"_s),
			$of(u"\u9650\u5236\u53ef\u89c2\u5bdf\u6a21\u5757\u7684\u9886\u57df"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.m"_s),
			$of(u"\u53ea\u7f16\u8bd1\u6307\u5b9a\u7684\u6a21\u5757\uff0c\u8bf7\u68c0\u67e5\u65f6\u95f4\u6233"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxerrs"_s),
			$of(u"\u8bbe\u7f6e\u8981\u8f93\u51fa\u7684\u9519\u8bef\u7684\u6700\u5927\u6570\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxwarns"_s),
			$of(u"\u8bbe\u7f6e\u8981\u8f93\u51fa\u7684\u8b66\u544a\u7684\u6700\u5927\u6570\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.module.version"_s),
			$of(u"\u6307\u5b9a\u6b63\u5728\u7f16\u8bd1\u7684\u6a21\u5757\u7248\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulepath"_s),
			$of(u"\u6307\u5b9a\u67e5\u627e\u5e94\u7528\u7a0b\u5e8f\u6a21\u5757\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulesourcepath"_s),
			$of(u"\u6307\u5b9a\u67e5\u627e\u591a\u4e2a\u6a21\u5757\u7684\u8f93\u5165\u6e90\u6587\u4ef6\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.moreinfo"_s),
			$of(u"\u8f93\u51fa\u7c7b\u578b\u53d8\u91cf\u7684\u6269\u5c55\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.multi-release"_s),
			$of(u"\u6307\u5b9a\u5728\u591a\u53d1\u884c\u7248 jar \u4e2d\u4f7f\u7528\u54ea\u4e2a\u53d1\u884c\u7248"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nogj"_s),
			$of(u"\u8bed\u8a00\u4e2d\u4e0d\u63a5\u53d7\u6cdb\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nowarn"_s),
			$of(u"\u4e0d\u751f\u6210\u4efb\u4f55\u8b66\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.parameters"_s),
			$of(u"\u751f\u6210\u5143\u6570\u636e\u4ee5\u7528\u4e8e\u65b9\u6cd5\u53c2\u6570\u7684\u53cd\u5c04"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.patch"_s),
			$of(u"\u4f7f\u7528 JAR \u6587\u4ef6\u6216\u76ee\u5f55\u4e2d\u7684\u7c7b\u548c\u8d44\u6e90\u8986\u76d6\n        \u6216\u589e\u5f3a\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.pkginfo"_s),
			$of(u"\u6307\u5b9a package-info \u6587\u4ef6\u7684\u5904\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.plugin"_s),
			$of(u"\u8981\u8fd0\u884c\u7684\u63d2\u4ef6\u7684\u540d\u79f0\u548c\u53ef\u9009\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prefer"_s),
			$of(u"\u6307\u5b9a\u8bfb\u53d6\u6587\u4ef6, \u5f53\u540c\u65f6\u627e\u5230\u9690\u5f0f\u7f16\u8bd1\u7c7b\u7684\u6e90\u6587\u4ef6\u548c\u7c7b\u6587\u4ef6\u65f6"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.preview"_s),
			$of(u"\u542f\u7528\u9884\u89c8\u8bed\u8a00\u529f\u80fd\u3002\u8981\u4e0e -source \u6216 --release \u4e00\u8d77\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.print"_s),
			$of(u"\u8f93\u51fa\u6307\u5b9a\u7c7b\u578b\u7684\u6587\u672c\u8868\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printProcessorInfo"_s),
			$of(u"\u8f93\u51fa\u6709\u5173\u8bf7\u6c42\u5904\u7406\u7a0b\u5e8f\u5904\u7406\u54ea\u4e9b\u6ce8\u91ca\u7684\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printRounds"_s),
			$of(u"\u8f93\u51fa\u6709\u5173\u6ce8\u91ca\u5904\u7406\u5faa\u73af\u7684\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printsearch"_s),
			$of(u"\u8f93\u51fa\u6709\u5173\u641c\u7d22\u7c7b\u6587\u4ef6\u7684\u4f4d\u7f6e\u7684\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.proc.none.only"_s),
			$of(u"\u63a7\u5236\u662f\u5426\u6267\u884c\u6ce8\u91ca\u5904\u7406\u548c/\u6216\u7f16\u8bd1\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processor"_s),
			$of(u"\u8981\u8fd0\u884c\u7684\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f\u7684\u540d\u79f0; \u7ed5\u8fc7\u9ed8\u8ba4\u7684\u641c\u7d22\u8fdb\u7a0b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processormodulepath"_s),
			$of(u"\u6307\u5b9a\u67e5\u627e\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f\u7684\u6a21\u5757\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processorpath"_s),
			$of(u"\u6307\u5b9a\u67e5\u627e\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.profile"_s),
			$of(u"\u8bf7\u786e\u4fdd\u4f7f\u7528\u7684 API \u5728\u6307\u5b9a\u7684\u914d\u7f6e\u6587\u4ef6\u4e2d\u53ef\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prompt"_s),
			$of(u"\u5728\u6bcf\u6b21\u51fa\u9519\u540e\u505c\u6b62"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.release"_s),
			$of(u"\u4e3a\u6307\u5b9a\u7684 Java SE \u53d1\u884c\u7248\u7f16\u8bd1\u3002\u652f\u6301\u7684\u53d1\u884c\u7248\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.s"_s),
			$of(u"\u53d1\u51fa java \u6e90\u800c\u4e0d\u662f\u7c7b\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.source"_s),
			$of(u"\u63d0\u4f9b\u4e0e\u6307\u5b9a\u7684 Java SE \u53d1\u884c\u7248\u7684\u6e90\u517c\u5bb9\u6027\u3002\u652f\u6301\u7684\u53d1\u884c\u7248\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourceDest"_s),
			$of(u"\u6307\u5b9a\u653e\u7f6e\u751f\u6210\u7684\u6e90\u6587\u4ef6\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourcepath"_s),
			$of(u"\u6307\u5b9a\u67e5\u627e\u8f93\u5165\u6e90\u6587\u4ef6\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.system"_s),
			$of(u"\u8986\u76d6\u7cfb\u7edf\u6a21\u5757\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.target"_s),
			$of(u"\u751f\u6210\u9002\u5408\u6307\u5b9a\u7684 Java SE \u53d1\u884c\u7248\u7684\u7c7b\u6587\u4ef6\u3002\u652f\u6301\u7684\u53d1\u884c\u7248\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.upgrademodulepath"_s),
			$of(u"\u8986\u76d6\u53ef\u5347\u7ea7\u6a21\u5757\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.userpathsfirst"_s),
			$of(u"\u5728\u5f15\u5bfc\u7c7b\u8def\u5f84\u4e4b\u524d\u800c\u4e0d\u662f\u4e4b\u540e\u641c\u7d22\u7c7b\u7684\u7c7b\u8def\u5f84\u548c\u6e90\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.verbose"_s),
			$of(u"\u8f93\u51fa\u6709\u5173\u7f16\u8bd1\u5668\u6b63\u5728\u6267\u884c\u7684\u64cd\u4f5c\u7684\u6d88\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.version"_s),
			$of(u"\u7248\u672c\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.version"_s),
			$of("{0} {1}"_s)
		})
	});
}

javac_zh_CN::javac_zh_CN() {
}

$Class* javac_zh_CN::load$($String* name, bool initialize) {
	$loadClass(javac_zh_CN, name, initialize, &_javac_zh_CN_ClassInfo_, allocate$javac_zh_CN);
	return class$;
}

$Class* javac_zh_CN::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com