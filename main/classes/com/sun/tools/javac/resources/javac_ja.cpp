#include <com/sun/tools/javac/resources/javac_ja.h>

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

$MethodInfo _javac_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(javac_ja::*)()>(&javac_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _javac_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.javac_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_javac_ja_MethodInfo_
};

$Object* allocate$javac_ja($Class* clazz) {
	return $of($alloc(javac_ja));
}

void javac_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javac_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("javac.fullVersion"_s),
			$of(u"{0}\u30d5\u30eb\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3\"{1}\""_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.bug"_s),
			$of(u"\u30b3\u30f3\u30d1\u30a4\u30e9\u3067\u4f8b\u5916\u304c\u767a\u751f\u3057\u307e\u3057\u305f({0})\u3002Bug Database (http://bugs.java.com)\u3067\u91cd\u8907\u304c\u306a\u3044\u304b\u3092\u3054\u78ba\u8a8d\u306e\u3046\u3048\u3001Java bug\u30ec\u30dd\u30fc\u30c8\u30fb\u30da\u30fc\u30b8(http://bugreport.java.com)\u3067Java\u30b3\u30f3\u30d1\u30a4\u30e9\u306b\u5bfe\u3059\u308bbug\u306e\u767b\u9332\u3092\u304a\u9858\u3044\u3044\u305f\u3057\u307e\u3059\u3002\u30ec\u30dd\u30fc\u30c8\u306b\u306f\u3001\u305d\u306e\u30d7\u30ed\u30b0\u30e9\u30e0\u3001\u4e0b\u8a18\u306e\u8a3a\u65ad\u5185\u5bb9\u3001\u304a\u3088\u3073Java\u30b3\u30f3\u30d1\u30a4\u30e9\u306b\u6e21\u3057\u305f\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u542b\u3081\u3066\u304f\u3060\u3055\u3044\u3002\u3054\u5354\u529b\u3042\u308a\u304c\u3068\u3046\u3054\u3056\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.io"_s),
			$of(u"\n\n\u5165\u51fa\u529b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002\n\u8a73\u7d30\u306f\u6b21\u306e\u30b9\u30bf\u30c3\u30af\u30c8\u30ec\u30fc\u30b9\u3067\u8abf\u67fb\u3057\u3066\u304f\u3060\u3055\u3044\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output"_s),
			$of(u"javac\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u6b21\u306e\u5834\u6240\u306b\u51fa\u529b\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output.error"_s),
			$of(u"javac\u30d1\u30e9\u30e1\u30fc\u30bf\u3092{0}\u306b\u51fa\u529b\u3057\u3088\u3046\u3068\u3057\u305f\u3068\u304d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002\u30d1\u30e9\u30e1\u30fc\u30bf\u304c\u7d9a\u304d\u307e\u3059:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.plugin.uncaught.exception"_s),
			$of(u"\n\n\u30d7\u30e9\u30b0\u30a4\u30f3\u3067\u6355\u6349\u3055\u308c\u306a\u3044\u4f8b\u5916\u304c\u30b9\u30ed\u30fc\u3055\u308c\u307e\u3057\u305f\u3002\n\u8a73\u7d30\u306f\u6b21\u306e\u30b9\u30bf\u30c3\u30af\u30fb\u30c8\u30ec\u30fc\u30b9\u3067\u8abf\u67fb\u3057\u3066\u304f\u3060\u3055\u3044\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.proc.annotation.uncaught.exception"_s),
			$of(u"\n\n\u6ce8\u91c8\u51e6\u7406\u3067\u6355\u6349\u3055\u308c\u306a\u3044\u4f8b\u5916\u304c\u30b9\u30ed\u30fc\u3055\u308c\u307e\u3057\u305f\u3002\n\u8a73\u7d30\u306f\u6b21\u306e\u30b9\u30bf\u30c3\u30af\u30c8\u30ec\u30fc\u30b9\u3067\u8abf\u67fb\u3057\u3066\u304f\u3060\u3055\u3044\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.resource"_s),
			$of(u"\n\n\u30b7\u30b9\u30c6\u30e0\u30fb\u30ea\u30bd\u30fc\u30b9\u304c\u4e0d\u8db3\u3057\u3066\u3044\u307e\u3059\u3002\n\u8a73\u7d30\u306f\u6b21\u306e\u30b9\u30bf\u30c3\u30af\u30c8\u30ec\u30fc\u30b9\u3067\u8abf\u67fb\u3057\u3066\u304f\u3060\u3055\u3044\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage"_s),
			$of(u"\u4f7f\u7528\u65b9\u6cd5: {0} <options> <source files>\n\u4f7f\u7528\u53ef\u80fd\u306a\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u30ea\u30b9\u30c8\u306b\u3064\u3044\u3066\u306f\u3001--help\u3092\u4f7f\u7528\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.header"_s),
			$of(u"\u4f7f\u7528\u65b9\u6cd5: {0} <options> <source files>\n\u4f7f\u7528\u53ef\u80fd\u306a\u30aa\u30d7\u30b7\u30e7\u30f3\u306b\u306f\u6b21\u306e\u3082\u306e\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.nonstandard.footer"_s),
			$of(u"\u3053\u306e\u8ffd\u52a0\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u4e88\u544a\u306a\u3057\u306b\u5909\u66f4\u3055\u308c\u308b\u3053\u3068\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.A"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\u306b\u6e21\u3055\u308c\u308b\u30aa\u30d7\u30b7\u30e7\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.AT"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u304b\u3089\u306e\u8aad\u53d6\u308a\u30aa\u30d7\u30b7\u30e7\u30f3\u304a\u3088\u3073\u30d5\u30a1\u30a4\u30eb\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.J"_s),
			$of(u"<flag>\u3092\u5b9f\u884c\u30b7\u30b9\u30c6\u30e0\u306b\u76f4\u63a5\u6e21\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Werror"_s),
			$of(u"\u8b66\u544a\u304c\u767a\u751f\u3057\u305f\u5834\u5408\u306b\u30b3\u30f3\u30d1\u30a4\u30eb\u3092\u7d42\u4e86\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.X"_s),
			$of(u"\u8ffd\u52a0\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u30d8\u30eb\u30d7\u3092\u51fa\u529b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.a"_s),
			$of(u"\u30d6\u30fc\u30c8\u30b9\u30c8\u30e9\u30c3\u30d7\u30fb\u30af\u30e9\u30b9\u30fb\u30d1\u30b9\u306b\u8ffd\u52a0\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.p"_s),
			$of(u"\u30d6\u30fc\u30c8\u30b9\u30c8\u30e9\u30c3\u30d7\u30fb\u30af\u30e9\u30b9\u30fb\u30d1\u30b9\u306e\u5148\u982d\u306b\u4ed8\u52a0\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint"_s),
			$of(u"javadoc\u30b3\u30e1\u30f3\u30c8\u306e\u554f\u984c\u306b\u95a2\u3059\u308b\u63a8\u5968\u30c1\u30a7\u30c3\u30af\u3092\u6709\u52b9\u306b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.custom"_s),
			$of(u"javadoc\u30b3\u30e1\u30f3\u30c8\u306e\u554f\u984c\u306b\u95a2\u3059\u308b\u7279\u5b9a\u306e\u30c1\u30a7\u30c3\u30af\u3092\u6709\u52b9\u307e\u305f\u306f\u7121\u52b9\u306b\u3057\u307e\u3059\u3002\n        \u3053\u3053\u3067\u3001<group>\u306faccessibility\u3001html\u3001missing\u3001reference\u307e\u305f\u306fsyntax\u306e\u3044\u305a\u308c\u304b\u3067\u3001\n        <access>\u306fpublic\u3001protected\u3001package\u307e\u305f\u306fprivate\u306e\u3044\u305a\u308c\u304b\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.args"_s),
			$of("[-]<packages>(,[-]<package>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.desc"_s),
			$of(u"\u7279\u5b9a\u306e\u30d1\u30c3\u30b1\u30fc\u30b8\u306e\u30c1\u30a7\u30c3\u30af\u3092\u6709\u52b9\u307e\u305f\u306f\u7121\u52b9\u306b\u3057\u307e\u3059\u3002\u5404<package>\u306f\u3001\n\u30d1\u30c3\u30b1\u30fc\u30b8\u306e\u4fee\u98fe\u3055\u308c\u305f\u540d\u524d\u3001\u307e\u305f\u306f\u30d1\u30c3\u30b1\u30fc\u30b8\u540d\u306e\u63a5\u982d\u8f9e\u306e\u5f8c\u306b\'\'.*\'\'\u3092\u6307\u5b9a\n(\u6307\u5b9a\u3057\u305f\u30d1\u30c3\u30b1\u30fc\u30b8\u306e\u3059\u3079\u3066\u306e\u30b5\u30d6\u30d1\u30c3\u30b1\u30fc\u30b8\u306b\u62e1\u5f35)\u3057\u305f\u3082\u306e\u3067\u3059\u3002\u5404<package>\u306e\u524d\u306b\n\'-\'\u3092\u6307\u5b9a\u3059\u308b\u3068\u3001\u6307\u5b9a\u3057\u305f1\u3064\u4ee5\u4e0a\u306e\u30d1\u30c3\u30b1\u30fc\u30b8\u306b\u95a2\u3059\u308b\u30c1\u30a7\u30c3\u30af\u3092\u7121\u52b9\u306b\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.subopts"_s),
			$of("(all|none|[-]<group>)[/<access>]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint"_s),
			$of(u"\u63a8\u5968\u306e\u8b66\u544a\u3092\u6709\u52b9\u306b\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.all"_s),
			$of(u"\u3059\u3079\u3066\u306e\u8b66\u544a\u3092\u6709\u52b9\u306b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.custom"_s),
			$of(u"\u6709\u52b9\u307e\u305f\u306f\u7121\u52b9\u306b\u3059\u308b\u8b66\u544a(\u30ab\u30f3\u30de\u533a\u5207\u308a)\u3002\n        \u6307\u5b9a\u3057\u305f\u8b66\u544a\u3092\u7121\u52b9\u306b\u3059\u308b\u306b\u306f\u3001\u30ad\u30fc\u306e\u524d\u306b\'-\'\u3092\u6307\u5b9a\u3057\u307e\u3059\u3002\n        \u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u308b\u30ad\u30fc\u306f\u6b21\u306e\u3068\u304a\u308a\u3067\u3059:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.auxiliaryclass"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3067\u975e\u8868\u793a\u306b\u306a\u3063\u3066\u3044\u308b\u304c\u4ed6\u306e\u30d5\u30a1\u30a4\u30eb\u304b\u3089\u4f7f\u7528\u3055\u308c\u3066\u3044\u308b\u88dc\u52a9\u30af\u30e9\u30b9\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.cast"_s),
			$of(u"\u4e0d\u8981\u306a\u30ad\u30e3\u30b9\u30c8\u306e\u4f7f\u7528\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.classfile"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u5185\u5bb9\u306b\u95a2\u9023\u3057\u305f\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.dep-ann"_s),
			$of(u"JavaDoc\u3067\u975e\u63a8\u5968\u3068\u3057\u3066\u30de\u30fc\u30af\u3055\u308c\u3066\u3044\u308b\u304c@\u975e\u63a8\u5968\u306e\u6ce8\u91c8\u3092\u4f7f\u7528\u3057\u3066\u3044\u306a\u3044\u9805\u76ee\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.deprecation"_s),
			$of(u"\u975e\u63a8\u5968\u9805\u76ee\u306e\u4f7f\u7528\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.divzero"_s),
			$of(u"\u5b9a\u6574\u65700\u3067\u9664\u7b97\u3055\u308c\u308b\u3053\u3068\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.empty"_s),
			$of(u"if\u4ee5\u964d\u304c\u7a7a\u306e\u6587\u3067\u3042\u308b\u3053\u3068\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.exports"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u306b\u95a2\u3059\u308b\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.fallthrough"_s),
			$of(u"switch\u6587\u306e1\u3064\u306ecase\u304b\u3089\u6b21\u3078\u306e\u30d5\u30a9\u30fc\u30eb\u30fb\u30b9\u30eb\u30fc\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.finally"_s),
			$of(u"\u6b63\u5e38\u306b\u5b8c\u4e86\u3057\u306a\u3044finally\u7bc0\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.missing-explicit-ctor"_s),
			$of(u"\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3055\u308c\u305f\u30d1\u30c3\u30b1\u30fc\u30b8\u306epublic\u304a\u3088\u3073protected\u306e\u30af\u30e9\u30b9\u306b\u660e\u793a\u7684\u306a\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u304c\u306a\u3044\u3053\u3068\u3092\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30b7\u30b9\u30c6\u30e0\u95a2\u9023\u306e\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.opens"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30aa\u30fc\u30d7\u30f3\u306b\u95a2\u3059\u308b\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.options"_s),
			$of(u"\u30b3\u30de\u30f3\u30c9\u884c\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u4f7f\u7528\u306b\u95a2\u3059\u308b\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overloads"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u306e\u30aa\u30fc\u30d0\u30fc\u30ed\u30fc\u30c9\u306b\u95a2\u3059\u308b\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overrides"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u306e\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u306b\u95a2\u3059\u308b\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.path"_s),
			$of(u"\u30b3\u30de\u30f3\u30c9\u884c\u306e\u7121\u52b9\u306a\u30d1\u30b9\u8981\u7d20\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.preview"_s),
			$of(u"\u30d7\u30ec\u30d3\u30e5\u30fc\u8a00\u8a9e\u6a5f\u80fd\u306e\u4f7f\u7528\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.processing"_s),
			$of(u"\u6ce8\u91c8\u51e6\u7406\u306b\u95a2\u3059\u308b\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.rawtypes"_s),
			$of(u"raw\u578b\u306e\u4f7f\u7528\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.removal"_s),
			$of(u"\u524a\u9664\u7528\u306b\u30de\u30fc\u30af\u3055\u308c\u305fAPI\u306e\u4f7f\u7528\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-automatic"_s),
			$of(u"requires\u53e5\u5185\u306e\u81ea\u52d5\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u4f7f\u7528\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-transitive-automatic"_s),
			$of(u"requires transitive\u5185\u306e\u81ea\u52d5\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.serial"_s),
			$of(u"\u30b7\u30ea\u30a2\u30eb\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3ID\u3092\u6307\u5b9a\u3057\u306a\u3044\u76f4\u5217\u5316\u53ef\u80fd\u306a\u30af\u30e9\u30b9\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002 \n                             \u307e\u305f\u3001\u76f4\u5217\u5316\u53ef\u80fd\u8981\u7d20\u304b\u3089public\u4ee5\u5916\u306e\u30e1\u30f3\u30d0\u30fc\u3078\u306e\u30a2\u30af\u30bb\u30b9\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.static"_s),
			$of(u"\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u4f7f\u7528\u3057\u305fstatic\u30e1\u30f3\u30d0\u30fc\u3078\u306e\u30a2\u30af\u30bb\u30b9\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.synchronization"_s),
			$of(u"\u5024\u30d9\u30fc\u30b9\u30fb\u30af\u30e9\u30b9\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3067\u306e\u540c\u671f\u306e\u8a66\u884c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.text-blocks"_s),
			$of(u"\u30c6\u30ad\u30b9\u30c8\u30fb\u30d6\u30ed\u30c3\u30af\u30fb\u30a4\u30f3\u30c7\u30f3\u30c8\u5185\u306e\u4e00\u8cab\u6027\u306e\u306a\u3044\u7a7a\u767d\u6587\u5b57\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.try"_s),
			$of(u"try\u30d6\u30ed\u30c3\u30af(try-with-resources\u306a\u3069)\u306e\u4f7f\u7528\u306b\u95a2\u3059\u308b\u554f\u984c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.unchecked"_s),
			$of(u"\u7121\u691c\u67fb\u64cd\u4f5c\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.varargs"_s),
			$of(u"\u5b89\u5168\u3067\u306f\u306a\u3044\u53ef\u80fd\u6027\u304c\u3042\u308b\u53ef\u5909\u5f15\u6570\u30e1\u30bd\u30c3\u30c9\u306b\u3064\u3044\u3066\u8b66\u544a\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.none"_s),
			$of(u"\u3059\u3079\u3066\u306e\u8b66\u544a\u3092\u7121\u52b9\u306b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xstdout"_s),
			$of(u"\u6a19\u6e96\u51fa\u529b\u3092\u30ea\u30c0\u30a4\u30ec\u30af\u30c8\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addExports"_s),
			$of(u"<other-module>\u304cALL-UNNAMED\u3067\u3042\u308b\u5834\u5408\u3001\u305d\u306e\u5b9a\u7fa9\u30e2\u30b8\u30e5\u30fc\u30eb\u304b\u3089\u3001\u8ffd\u52a0\u30e2\u30b8\u30e5\u30fc\u30eb\u307e\u305f\u306f\n        \u3059\u3079\u3066\u306e\u540d\u524d\u306e\u306a\u3044\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u6e08\u3068\u307f\u306a\u3055\u308c\u308b\u3088\u3046\u306b\u30d1\u30c3\u30b1\u30fc\u30b8\u3092\u6307\u5b9a\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addReads"_s),
			$of(u"\u6307\u5b9a\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u3067\u5fc5\u9808\u3068\u307f\u306a\u3055\u308c\u308b\u3088\u3046\u306b\u8ffd\u52a0\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\u6307\u5b9a\u3057\u307e\u3059\u3002\n        \u540d\u524d\u306e\u306a\u3044\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\u5fc5\u8981\u3068\u3059\u308b\u5834\u5408\u3001<other-module>\u306fALL-UNNAMED\u306b\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addmods"_s),
			$of(u"\u521d\u671f\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u52a0\u3048\u3066\u89e3\u6c7a\u3059\u308b\u30eb\u30fc\u30c8\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb\u3001\u307e\u305f\u306f<module>\u304c\n        ALL-MODULE-PATH\u3067\u3042\u308b\u5834\u5408\u306f\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30d1\u30b9\u306e\u3059\u3079\u3066\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u3002"_s)
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
			$of(u"<\u30d0\u30fc\u30b8\u30e7\u30f3>"_s)
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
			$of(u"\u30d6\u30fc\u30c8\u30b9\u30c8\u30e9\u30c3\u30d7\u30fb\u30af\u30e9\u30b9\u30fb\u30d1\u30b9\u306e\u4f4d\u7f6e\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.classpath"_s),
			$of(u"\u30e6\u30fc\u30b6\u30fc\u30fb\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u304a\u3088\u3073\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\u3092\u691c\u7d22\u3059\u308b\u4f4d\u7f6e\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.d"_s),
			$of(u"\u751f\u6210\u3055\u308c\u305f\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u683c\u7d0d\u3059\u308b\u4f4d\u7f6e\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.default.module.for.created.files"_s),
			$of(u"\u4f55\u3082\u6307\u5b9a\u3055\u308c\u3066\u3044\u306a\u3044\u304b\u3001\u63a8\u5b9a\u578b\u306e\u5834\u5408\u3001\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\u306b\u3088\u3063\u3066\u4f5c\u6210\u3055\u308c\u308b\u30d5\u30a1\u30a4\u30eb\u306e\u30bf\u30fc\u30b2\u30c3\u30c8\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\u30d5\u30a9\u30fc\u30eb\u30d0\u30c3\u30af\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.deprecation"_s),
			$of(u"\u63a8\u5968\u3055\u308c\u306a\u3044API\u304c\u4f7f\u7528\u3055\u308c\u3066\u3044\u308b\u30bd\u30fc\u30b9\u306e\u4f4d\u7f6e\u3092\u51fa\u529b\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.diags"_s),
			$of(u"\u8a3a\u65ad\u30e2\u30fc\u30c9\u306e\u9078\u629e"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.doclint.format"_s),
			$of(u"\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u30fb\u30b3\u30e1\u30f3\u30c8\u306e\u5f62\u5f0f\u3092\u6307\u5b9a\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.encoding"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u4f7f\u7528\u3059\u308b\u6587\u5b57\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.endorseddirs"_s),
			$of(u"\u63a8\u5968\u898f\u683c\u30d1\u30b9\u306e\u4f4d\u7f6e\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.extdirs"_s),
			$of(u"\u30a4\u30f3\u30b9\u30c8\u30fc\u30eb\u6e08\u307f\u62e1\u5f35\u6a5f\u80fd\u306e\u4f4d\u7f6e\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g"_s),
			$of(u"\u3059\u3079\u3066\u306e\u30c7\u30d0\u30c3\u30b0\u60c5\u5831\u3092\u751f\u6210\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.lines.vars.source"_s),
			$of(u"\u3044\u304f\u3064\u304b\u306e\u30c7\u30d0\u30c3\u30b0\u60c5\u5831\u306e\u307f\u3092\u751f\u6210\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.none"_s),
			$of(u"\u30c7\u30d0\u30c3\u30b0\u60c5\u5831\u3092\u751f\u6210\u3057\u306a\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.headerDest"_s),
			$of(u"\u751f\u6210\u3055\u308c\u305f\u30cd\u30a4\u30c6\u30a3\u30d6\u30fb\u30d8\u30c3\u30c0\u30fc\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u683c\u7d0d\u3059\u308b\u5834\u6240\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.help"_s),
			$of(u"\u3053\u306e\u30d8\u30eb\u30d7\u30fb\u30e1\u30c3\u30bb\u30fc\u30b8\u3092\u51fa\u529b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.implicit"_s),
			$of(u"\u6697\u9ed9\u7684\u306b\u53c2\u7167\u3055\u308c\u308b\u30d5\u30a1\u30a4\u30eb\u306b\u3064\u3044\u3066\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u751f\u6210\u3059\u308b\u304b\u3069\u3046\u304b\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.inherit_runtime_environment"_s),
			$of(u"\u5b9f\u884c\u6642\u74b0\u5883\u304b\u3089\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30b7\u30b9\u30c6\u30e0\u69cb\u6210\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u7d99\u627f\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.limitmods"_s),
			$of(u"\u53c2\u7167\u53ef\u80fd\u306a\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u9818\u57df\u3092\u5236\u9650\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.m"_s),
			$of(u"\u6307\u5b9a\u3057\u305f\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u307f\u30b3\u30f3\u30d1\u30a4\u30eb\u3057\u3001\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u3092\u78ba\u8a8d\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxerrs"_s),
			$of(u"\u51fa\u529b\u3059\u308b\u30a8\u30e9\u30fc\u306e\u6700\u5927\u6570\u3092\u8a2d\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxwarns"_s),
			$of(u"\u51fa\u529b\u3059\u308b\u8b66\u544a\u306e\u6700\u5927\u6570\u3092\u8a2d\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.module.version"_s),
			$of(u"\u30b3\u30f3\u30d1\u30a4\u30eb\u3059\u308b\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u3092\u6307\u5b9a\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulepath"_s),
			$of(u"\u30a2\u30d7\u30ea\u30b1\u30fc\u30b7\u30e7\u30f3\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\u691c\u7d22\u3059\u308b\u4f4d\u7f6e\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulesourcepath"_s),
			$of(u"\u8907\u6570\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u5165\u529b\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u691c\u7d22\u3059\u308b\u4f4d\u7f6e\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.moreinfo"_s),
			$of(u"\u578b\u5909\u6570\u306e\u62e1\u5f35\u60c5\u5831\u3092\u51fa\u529b\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.multi-release"_s),
			$of(u"\u30de\u30eb\u30c1\u30ea\u30ea\u30fc\u30b9jar\u306e\u4f7f\u7528\u3059\u308b\u30ea\u30ea\u30fc\u30b9\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nogj"_s),
			$of(u"\u8a00\u8a9e\u306e\u6c4e\u7528\u6027\u3092\u53d7\u3051\u4ed8\u3051\u306a\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nowarn"_s),
			$of(u"\u8b66\u544a\u3092\u767a\u751f\u3055\u305b\u306a\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.parameters"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u30fb\u30d1\u30e9\u30e1\u30fc\u30bf\u306b\u30ea\u30d5\u30ec\u30af\u30b7\u30e7\u30f3\u7528\u306e\u30e1\u30bf\u30c7\u30fc\u30bf\u3092\u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.patch"_s),
			$of(u"JAR\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306e\u30af\u30e9\u30b9\u304a\u3088\u3073\u30ea\u30bd\u30fc\u30b9\u3067\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\n        \u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u307e\u305f\u306f\u62e1\u5f35\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.pkginfo"_s),
			$of(u"package-info\u30d5\u30a1\u30a4\u30eb\u306e\u51e6\u7406\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.plugin"_s),
			$of(u"\u5b9f\u884c\u3055\u308c\u308b\u30d7\u30e9\u30b0\u30a4\u30f3\u306e\u540d\u524d\u3068\u30aa\u30d7\u30b7\u30e7\u30f3\u5f15\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prefer"_s),
			$of(u"\u6697\u9ed9\u7684\u306b\u30b3\u30f3\u30d1\u30a4\u30eb\u3055\u308c\u308b\u30af\u30e9\u30b9\u306b\u3064\u3044\u3066\u3001\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3068\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u4e21\u65b9\u304c\u898b\u3064\u304b\u3063\u305f\u969b\u3069\u3061\u3089\u3092\u8aad\u307f\u8fbc\u3080\u304b\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.preview"_s),
			$of(u"\u30d7\u30ec\u30d3\u30e5\u30fc\u8a00\u8a9e\u6a5f\u80fd\u3092\u6709\u52b9\u306b\u3057\u307e\u3059\u3002-source\u307e\u305f\u306f--release\u3068\u3068\u3082\u306b\u4f7f\u7528\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.print"_s),
			$of(u"\u6307\u5b9a\u3057\u305f\u578b\u306e\u30c6\u30ad\u30b9\u30c8\u8868\u793a\u3092\u51fa\u529b\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printProcessorInfo"_s),
			$of(u"\u30d7\u30ed\u30bb\u30c3\u30b5\u304c\u51e6\u7406\u3092\u4f9d\u983c\u3055\u308c\u308b\u6ce8\u91c8\u306b\u3064\u3044\u3066\u306e\u60c5\u5831\u3092\u5370\u5237\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printRounds"_s),
			$of(u"\u6ce8\u91c8\u51e6\u7406\u306e\u5f80\u5fa9\u306b\u3064\u3044\u3066\u306e\u60c5\u5831\u3092\u5370\u5237\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printsearch"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u691c\u7d22\u4f4d\u7f6e\u60c5\u5831\u3092\u51fa\u529b\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.proc.none.only"_s),
			$of(u"\u6ce8\u91c8\u51e6\u7406\u3084\u30b3\u30f3\u30d1\u30a4\u30eb\u3092\u5b9f\u884c\u3059\u308b\u304b\u3069\u3046\u304b\u3092\u5236\u5fa1\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processor"_s),
			$of(u"\u5b9f\u884c\u3059\u308b\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\u306e\u540d\u524d\u3002\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u691c\u51fa\u51e6\u7406\u3092\u30d0\u30a4\u30d1\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processormodulepath"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\u3092\u691c\u7d22\u3059\u308b\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30d1\u30b9\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processorpath"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\u3092\u691c\u7d22\u3059\u308b\u4f4d\u7f6e\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.profile"_s),
			$of(u"\u4f7f\u7528\u3055\u308c\u3066\u3044\u308bAPI\u304c\u6307\u5b9a\u3057\u305f\u30d7\u30ed\u30d5\u30a1\u30a4\u30eb\u3067\u4f7f\u7528\u53ef\u80fd\u304b\u3069\u3046\u304b\u3092\u78ba\u8a8d\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prompt"_s),
			$of(u"\u5404\u30a8\u30e9\u30fc\u3067\u505c\u6b62\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.release"_s),
			$of(u"\u6307\u5b9a\u3055\u308c\u305fJava SE\u30ea\u30ea\u30fc\u30b9\u306b\u5bfe\u3057\u3066\u30b3\u30f3\u30d1\u30a4\u30eb\u3057\u307e\u3059\u3002\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u308b\u30ea\u30ea\u30fc\u30b9: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.s"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u304b\u308f\u308a\u306bjava\u30bd\u30fc\u30b9\u3092\u767a\u884c\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.source"_s),
			$of(u"\u6307\u5b9a\u3055\u308c\u305fJava SE\u30ea\u30ea\u30fc\u30b9\u3068\u30bd\u30fc\u30b9\u306e\u4e92\u63db\u6027\u3092\u4fdd\u6301\u3057\u307e\u3059\u3002\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u308b\u30ea\u30ea\u30fc\u30b9: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourceDest"_s),
			$of(u"\u751f\u6210\u3055\u308c\u305f\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u683c\u7d0d\u3059\u308b\u5834\u6240\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourcepath"_s),
			$of(u"\u5165\u529b\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u691c\u7d22\u3059\u308b\u4f4d\u7f6e\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.system"_s),
			$of(u"\u30b7\u30b9\u30c6\u30e0\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u4f4d\u7f6e\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.target"_s),
			$of(u"\u6307\u5b9a\u3055\u308c\u305fJava SE\u30ea\u30ea\u30fc\u30b9\u306b\u9069\u3057\u305f\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u751f\u6210\u3057\u307e\u3059\u3002\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u308b\u30ea\u30ea\u30fc\u30b9: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.upgrademodulepath"_s),
			$of(u"\u30a2\u30c3\u30d7\u30b0\u30ec\u30fc\u30c9\u53ef\u80fd\u306a\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u4f4d\u7f6e\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.userpathsfirst"_s),
			$of(u"\u30d6\u30fc\u30c8\u30fb\u30af\u30e9\u30b9\u30d1\u30b9\u306e\u5f8c\u3067\u306f\u306a\u304f\u3001\u30d6\u30fc\u30c8\u30fb\u30af\u30e9\u30b9\u30d1\u30b9\u306e\u524d\u306b\u30af\u30e9\u30b9\u306e\u30af\u30e9\u30b9\u30d1\u30b9\u304a\u3088\u3073\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9\u3092\u691c\u7d22\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.verbose"_s),
			$of(u"\u30b3\u30f3\u30d1\u30a4\u30e9\u306e\u52d5\u4f5c\u306b\u3064\u3044\u3066\u30e1\u30c3\u30bb\u30fc\u30b8\u3092\u51fa\u529b\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.version"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30f3\u60c5\u5831"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.version"_s),
			$of("{0} {1}"_s)
		})
	});
}

javac_ja::javac_ja() {
}

$Class* javac_ja::load$($String* name, bool initialize) {
	$loadClass(javac_ja, name, initialize, &_javac_ja_ClassInfo_, allocate$javac_ja);
	return class$;
}

$Class* javac_ja::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com