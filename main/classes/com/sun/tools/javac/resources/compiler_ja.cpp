#include <com/sun/tools/javac/resources/compiler_ja.h>

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

$MethodInfo _compiler_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(compiler_ja::*)()>(&compiler_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _compiler_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.compiler_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_compiler_ja_MethodInfo_
};

$Object* allocate$compiler_ja($Class* clazz) {
	return $of($alloc(compiler_ja));
}

void compiler_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* compiler_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("compiler.err.abstract.cant.be.accessed.directly"_s),
			$of(u"\u62bd\u8c61{0}\u3067\u3042\u308b{1}({2}\u5185)\u306b\u76f4\u63a5\u30a2\u30af\u30bb\u30b9\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.abstract.cant.be.instantiated"_s),
			$of(u"{0}\u306fabstract\u3067\u3059\u3002\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u751f\u6210\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.abstract.meth.cant.have.body"_s),
			$of(u"abstract\u30e1\u30bd\u30c3\u30c9\u304c\u672c\u4f53\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.add.exports.with.release"_s),
			$of(u"\u30b7\u30b9\u30c6\u30e0\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u304b\u3089\u306e\u30d1\u30c3\u30b1\u30fc\u30b8\u306e\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u306f--release\u3092\u6307\u5b9a\u3057\u3066\u5b9f\u884c\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.add.reads.with.release"_s),
			$of(u"\u30b7\u30b9\u30c6\u30e0\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306e\u8aad\u53d6\u308a\u30a8\u30c3\u30b8\u306e\u8ffd\u52a0\u306f--release\u3092\u6307\u5b9a\u3057\u3066\u5b9f\u884c\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.addmods.all.module.path.invalid"_s),
			$of(u"--add-modules ALL-MODULE-PATH\u306f\u3001\u540d\u524d\u306e\u306a\u3044\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30b3\u30f3\u30d1\u30a4\u30eb\u6642\u307e\u305f\u306f\u81ea\u52d5\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u3067\u306e\u30b3\u30f3\u30d1\u30a4\u30eb\u6642\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.annotated"_s),
			$of(u"{0} {1}\u306f\u6ce8\u91c8\u304c\u4ed8\u3044\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined"_s),
			$of(u"{0} {1}\u306f\u3059\u3067\u306b{2} {3}\u3067\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.in.clinit"_s),
			$of(u"{0} {1}\u306f\u3059\u3067\u306b{3} {4}\u306e{2}\u3067\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.single.import"_s),
			$of(u"\u540c\u3058\u5358\u7d14\u540d\u306e\u578b\u304c{0}\u306e\u5358\u4e00\u578b\u30a4\u30f3\u30dd\u30fc\u30c8\u306b\u3088\u3063\u3066\u3059\u3067\u306b\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.static.single.import"_s),
			$of(u"\u540c\u3058\u5358\u7d14\u540d\u306e\u578b\u304c{0}\u306estatic\u5358\u4e00\u578b\u30a4\u30f3\u30dd\u30fc\u30c8\u306b\u3088\u3063\u3066\u3059\u3067\u306b\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.this.unit"_s),
			$of(u"{0}\u306f\u30b3\u30f3\u30d1\u30a4\u30eb\u5358\u4f4d\u3067\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.decl.not.allowed.here"_s),
			$of(u"\u3053\u3053\u3067\u306f\u6ce8\u91c8\u578b\u306e\u5ba3\u8a00\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.missing.default.value"_s),
			$of(u"\u6ce8\u91c8@{0}\u306b\u306f\u8981\u7d20\'\'{1}\'\'\u306e\u30c7\u30d5\u30a9\u30eb\u30c8\u5024\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.missing.default.value.1"_s),
			$of(u"\u6ce8\u91c8@{0}\u306b\u306f\u8981\u7d20{1}\u306e\u30c7\u30d5\u30a9\u30eb\u30c8\u5024\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.not.valid.for.type"_s),
			$of(u"\u6ce8\u91c8\u306f\u578b{0}\u306e\u8981\u7d20\u306b\u5bfe\u3057\u3066\u6709\u52b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.type.not.applicable"_s),
			$of(u"\u6ce8\u91c8\u578b\u306f\u3053\u306e\u7a2e\u985e\u306e\u5ba3\u8a00\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.type.not.applicable.to.type"_s),
			$of(u"\u6ce8\u91c8@{0}\u306f\u3053\u306e\u578b\u306e\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.annotation"_s),
			$of(u"\u6ce8\u91c8\u306e\u5024\u306f\u6ce8\u91c8\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.class.literal"_s),
			$of(u"\u6ce8\u91c8\u306e\u5024\u306f\u30af\u30e9\u30b9\u30fb\u30ea\u30c6\u30e9\u30eb\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.name.value"_s),
			$of(u"\u6ce8\u91c8\u306e\u5024\u306f\'\'name=value\'\'\u3068\u3044\u3046\u5f62\u5f0f\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.not.allowable.type"_s),
			$of(u"\u4f7f\u7528\u3067\u304d\u306a\u3044\u578b\u306e\u6ce8\u91c8\u306e\u5024\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.args"_s),
			$of(u"\u540d\u524d\u306e\u306a\u3044\u30af\u30e9\u30b9\u304c\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u3092\u5b9f\u88c5\u3057\u3066\u3044\u307e\u3059\u3002\u5f15\u6570\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.qual.for.new"_s),
			$of(u"\u540d\u524d\u306e\u306a\u3044\u30af\u30e9\u30b9\u304c\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u3092\u5b9f\u88c5\u3057\u3066\u3044\u307e\u3059\u3002new\u306b\u4fee\u98fe\u5b50\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.typeargs"_s),
			$of(u"\u540d\u524d\u306e\u306a\u3044\u30af\u30e9\u30b9\u304c\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u3092\u5b9f\u88c5\u3057\u3066\u3044\u307e\u3059\u3002\u578b\u5f15\u6570\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anonymous.diamond.method.does.not.override.superclass"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u306f\u30b9\u30fc\u30d1\u30fc\u30bf\u30a4\u30d7\u306e\u30e1\u30bd\u30c3\u30c9\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u307e\u305f\u306f\u5b9f\u88c5\u3057\u307e\u305b\u3093\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.and.receiver"_s),
			$of(u"\u65e7\u5f0f\u306e\u914d\u5217\u8868\u8a18\u6cd5\u306f\u53d7\u53d6\u308a\u5074\u30d1\u30e9\u30e1\u30fc\u30bf\u3067\u306f\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.and.varargs"_s),
			$of(u"{2}\u3067{0}\u3068{1}\u306e\u4e21\u65b9\u3092\u5ba3\u8a00\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.dimension.missing"_s),
			$of(u"\u914d\u5217\u306e\u5927\u304d\u3055\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.req.but.found"_s),
			$of(u"\u914d\u5217\u304c\u8981\u6c42\u3055\u308c\u307e\u3057\u305f\u304c\u3001{0}\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.assert.as.identifier"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b91.4\u304b\u3089\'\'assert\'\'\u306f\u30ad\u30fc\u30ef\u30fc\u30c9\u306a\u306e\u3067\u8b58\u5225\u5b50\u3068\u3057\u3066\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.attribute.value.must.be.constant"_s),
			$of(u"\u8981\u7d20\u5024\u306f\u5b9a\u6570\u5f0f\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.functional.intf.anno"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044@FunctionalInterface\u6ce8\u91c8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.functional.intf.anno.1"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044@FunctionalInterface\u6ce8\u91c8\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.initializer"_s),
			$of(u"{0}\u306e\u4e0d\u6b63\u306a\u521d\u671f\u5316\u5b50"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.name.for.option"_s),
			$of(u"{0}\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u5024\u306b\u542b\u307e\u308c\u308b\u540d\u524d\u304c\u4e0d\u6b63\u3067\u3059: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.value.for.option"_s),
			$of(u"{0}\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u5024\u304c\u4e0d\u6b63\u3067\u3059: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.break.outside.switch.expression"_s),
			$of(u"switch\u5f0f\u306e\u5916\u5074\u3067break\u3092\u5b9f\u884c\u3057\u3088\u3046\u3068\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.break.outside.switch.loop"_s),
			$of(u"break\u304cswitch\u6587\u307e\u305f\u306f\u30eb\u30fc\u30d7\u306e\u5916\u306b\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.call.must.be.first.stmt.in.ctor"_s),
			$of(u"{0}\u306e\u547c\u51fa\u3057\u306f\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306e\u5148\u982d\u6587\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.call.to.super.not.allowed.in.enum.ctor"_s),
			$of(u"\u5217\u6319\u578b\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u3067\u306f\u3001\u30b9\u30fc\u30d1\u30fc\u30af\u30e9\u30b9\u306e\u547c\u51fa\u3057\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.create.array.with.diamond"_s),
			$of(u"\'\'<>\'\'\u3092\u6301\u3064\u914d\u5217\u306f\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.create.array.with.type.arguments"_s),
			$of(u"\u578b\u5f15\u6570\u3092\u6301\u3064\u914d\u5217\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.generate.class"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u306e\u751f\u6210\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.access"_s),
			$of(u"{0}\u306b\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.diamond"_s),
			$of(u"{0}\u306e\u578b\u5f15\u6570\u3092\u63a8\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.diamond.1"_s),
			$of(u"{0}\u306e\u578b\u5f15\u6570\u3092\u63a8\u8ad6\u3067\u304d\u307e\u305b\u3093\n\u7406\u7531: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.symbol"_s),
			$of(u"{4} {5}\u306e{0} {1}\u306f\u6307\u5b9a\u3055\u308c\u305f\u578b\u306b\u9069\u7528\u3067\u304d\u307e\u305b\u3093\u3002\n\u671f\u5f85\u5024: {2}\n\u691c\u51fa\u5024:    {3}\n\u7406\u7531: {6}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.symbols"_s),
			$of(u"{1}\u306b\u9069\u5207\u306a{0}\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.assign.val.to.final.var"_s),
			$of(u"final\u5909\u6570{0}\u306b\u5024\u3092\u4ee3\u5165\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.assign.val.to.this"_s),
			$of(u"\'\'\u3053\u308c\'\'\u306b\u5272\u308a\u5f53\u3066\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.deref"_s),
			$of(u"{0}\u306f\u9593\u63a5\u53c2\u7167\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.extend.intf.annotation"_s),
			$of(u"@interfaces\u3067\u306f\'\'extends\'\'\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.infer.local.var.type"_s),
			$of(u"\u30ed\u30fc\u30ab\u30eb\u5909\u6570{0}\u306e\u578b\u3092\u63a8\u8ad6\u3067\u304d\u307e\u305b\u3093\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.diff.arg"_s),
			$of(u"{0}\u3092\u7570\u306a\u308b\u5f15\u6570<{1}>\u3068<{2}>\u3067\u7d99\u627f\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.anon"_s),
			$of(u"\u533f\u540d\u30af\u30e9\u30b9\u304b\u3089\u7d99\u627f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.final"_s),
			$of(u"final {0}\u304b\u3089\u306f\u7d99\u627f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.sealed"_s),
			$of(u"\u30af\u30e9\u30b9\u306f\u30b7\u30fc\u30eb\u30fb\u30af\u30e9\u30b9{0}\u3092\u62e1\u5f35\u3067\u304d\u307e\u305b\u3093(\'\'permits\'\'\u53e5\u306b\u6307\u5b9a\u3055\u308c\u3066\u3044\u306a\u3044\u305f\u3081\u3067\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.read.file"_s),
			$of(u"{0}\u3092\u8aad\u307f\u8fbc\u3081\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.ref.before.ctor.called"_s),
			$of(u"\u30b9\u30fc\u30d1\u30fc\u30bf\u30a4\u30d7\u306e\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306e\u547c\u51fa\u3057\u524d\u306f{0}\u3092\u53c2\u7167\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.ref.non.effectively.final.var"_s),
			$of(u"{1}\u304b\u3089\u53c2\u7167\u3055\u308c\u308b\u30ed\u30fc\u30ab\u30eb\u5909\u6570\u306f\u3001final\u307e\u305f\u306f\u4e8b\u5b9f\u4e0a\u306efinal\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb: {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.args"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb: {0} {1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.args.params"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb: {0} <{2}>{1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb:   {0} {1}\n\u5834\u6240: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location.args"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb:   {0} {1}({3})\n\u5834\u6240: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location.args.params"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb:   {0} <{2}>{1}({3})\n\u5834\u6240: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.select.static.class.from.param.type"_s),
			$of(u"\u30d1\u30e9\u30e1\u30fc\u30bf\u306b\u3055\u308c\u305f\u578b\u304b\u3089static\u30af\u30e9\u30b9\u3092\u9078\u629e\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.type.annotate.scoping"_s),
			$of(u"\u30b9\u30b3\u30fc\u30d7\u30fb\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30c8\u3092\u578b\u4f7f\u7528\u6ce8\u91c8\u3067\u6ce8\u91c8\u4ed8\u3051\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.type.annotate.scoping.1"_s),
			$of(u"\u30b9\u30b3\u30fc\u30d7\u30fb\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30c8\u3092\u578b\u4f7f\u7528\u6ce8\u91c8\u3067\u6ce8\u91c8\u4ed8\u3051\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.catch.without.try"_s),
			$of(u"\'\'catch\'\'\u3078\u306e\'\'try\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.clash.with.pkg.of.same.name"_s),
			$of(u"{0} {1}\u306f\u540c\u540d\u306e\u30d1\u30c3\u30b1\u30fc\u30b8\u3068\u7af6\u5408\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.cant.write"_s),
			$of(u"{0}\u306e\u66f8\u8fbc\u307f\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.in.module.cant.extend.sealed.in.diff.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{1}\u306e\u30af\u30e9\u30b9{0}\u306f\u5225\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30b7\u30fc\u30eb\u30fb\u30af\u30e9\u30b9\u3092\u62e1\u5f35\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.in.unnamed.module.cant.extend.sealed.in.diff.package"_s),
			$of(u"\u540d\u524d\u306e\u306a\u3044\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30af\u30e9\u30b9{0}\u306f\u5225\u306e\u30d1\u30c3\u30b1\u30fc\u30b8\u306e\u30b7\u30fc\u30eb\u30fb\u30af\u30e9\u30b9\u3092\u62e1\u5f35\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.not.allowed"_s),
			$of(u"\u30af\u30e9\u30b9\u3001\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u307e\u305f\u306f\u5217\u6319\u578b\u306e\u5ba3\u8a00\u3092\u3053\u3053\u3067\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.public.should.be.in.file"_s),
			$of(u"{0} {1}\u306fpublic\u3067\u3042\u308a\u3001\u30d5\u30a1\u30a4\u30eb{1}.java\u3067\u5ba3\u8a00\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.concrete.inheritance.conflict"_s),
			$of(u"{1}\u306e\u30e1\u30bd\u30c3\u30c9{0}\u3068{3}\u306e{2}\u306f\u540c\u3058\u30b7\u30b0\u30cb\u30c1\u30e3\u304b\u3089\u7d99\u627f\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.exports"_s),
			$of(u"\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u304c\u91cd\u8907\u307e\u305f\u306f\u7af6\u5408\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.exports.to.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u3078\u306e\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u304c\u91cd\u8907\u307e\u305f\u306f\u7af6\u5408\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.opens"_s),
			$of(u"\u30aa\u30fc\u30d7\u30f3\u304c\u91cd\u8907\u307e\u305f\u306f\u7af6\u5408\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.opens.to.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u3078\u306e\u30aa\u30fc\u30d7\u30f3\u304c\u91cd\u8907\u307e\u305f\u306f\u7af6\u5408\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.const.expr.req"_s),
			$of(u"\u5b9a\u6570\u5f0f\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cont.outside.loop"_s),
			$of(u"continue\u304c\u30eb\u30fc\u30d7\u306e\u5916\u306b\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.continue.outside.switch.expression"_s),
			$of(u"switch\u5f0f\u306e\u5916\u5074\u3067continue\u3092\u5b9f\u884c\u3057\u3088\u3046\u3068\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.annotation.element"_s),
			$of(u"\u8981\u7d20{0}\u306e\u578b\u304c\u30eb\u30fc\u30d7\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.inheritance"_s),
			$of(u"{0}\u3092\u542b\u3080\u7d99\u627f\u304c\u30eb\u30fc\u30d7\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.requires"_s),
			$of(u"{0}\u3092\u542b\u3080\u4f9d\u5b58\u6027\u304c\u30eb\u30fc\u30d7\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.bad.entity"_s),
			$of(u"HTML\u30a8\u30f3\u30c6\u30a3\u30c6\u30a3\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.bad.inline.tag"_s),
			$of(u"\u30a4\u30f3\u30e9\u30a4\u30f3\u30fb\u30bf\u30b0\u306e\u4f7f\u7528\u304c\u6b63\u3057\u304f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.gt.expected"_s),
			$of(u"\'\'>\'\'\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.identifier.expected"_s),
			$of(u"\u8b58\u5225\u5b50\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.malformed.html"_s),
			$of(u"HTML\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.missing.semicolon"_s),
			$of(u"\u30bb\u30df\u30b3\u30ed\u30f3\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.no.content"_s),
			$of(u"\u30b3\u30f3\u30c6\u30f3\u30c4\u306a\u3057"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.no.tag.name"_s),
			$of(u"\'@\'\u306e\u5f8c\u306b\u30bf\u30b0\u540d\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.bad.parens"_s),
			$of(u"\u53c2\u7167\u306b\'\')\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.syntax.error"_s),
			$of(u"\u53c2\u7167\u306b\u69cb\u6587\u30a8\u30e9\u30fc\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.unexpected.input"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044\u30c6\u30ad\u30b9\u30c8\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unexpected.content"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044\u30b3\u30f3\u30c6\u30f3\u30c4\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.inline.tag"_s),
			$of(u"\u30a4\u30f3\u30e9\u30a4\u30f3\u30fb\u30bf\u30b0\u304c\u7d42\u4e86\u3057\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.signature"_s),
			$of(u"\u30b7\u30b0\u30cd\u30c1\u30e3\u304c\u7d42\u4e86\u3057\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.string"_s),
			$of(u"\u6587\u5b57\u5217\u304c\u7d42\u4e86\u3057\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.default.allowed.in.intf.annotation.member"_s),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u5024\u306f\u6ce8\u91c8\u578b\u306e\u5ba3\u8a00\u3067\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.default.overrides.object.member"_s),
			$of(u"{1} {2}\u306e\u30c7\u30d5\u30a9\u30eb\u30c8\u30fb\u30e1\u30bd\u30c3\u30c9{0}\u306fjava.lang.Object\u306e\u30e1\u30f3\u30d0\u30fc\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.does.not.override.abstract"_s),
			$of(u"{0}\u306fabstract\u3067\u306a\u304f\u3001{2}\u5185\u306eabstract\u30e1\u30bd\u30c3\u30c9{1}\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.doesnt.exist"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dot.class.expected"_s),
			$of(u"\'\'.class\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.invalid.repeated"_s),
			$of(u"\u6ce8\u91c8{0}\u306f\u6709\u52b9\u306a\u7e70\u8fd4\u3057\u53ef\u80fd\u306a\u6ce8\u91c8\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.member.value"_s),
			$of(u"\u6ce8\u91c8@{1}\u306b\u91cd\u8907\u3057\u305f\u8981\u7d20\'\'{0}\'\'\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.missing.container"_s),
			$of(u"{0}\u306f\u7e70\u8fd4\u3057\u53ef\u80fd\u306a\u6ce8\u91c8\u578b\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.case.label"_s),
			$of(u"case\u30e9\u30d9\u30eb\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.class"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.default.label"_s),
			$of(u"default\u30e9\u30d9\u30eb\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.module.on.path"_s),
			$of(u"{0}\u3067\u30e2\u30b8\u30e5\u30fc\u30eb\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059\n{1}\u306e\u30e2\u30b8\u30e5\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.provides"_s),
			$of(u"\u6307\u5b9a\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059: \u30b5\u30fc\u30d3\u30b9{0}\u3001\u5b9f\u88c5{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.requires"_s),
			$of(u"\u5fc5\u9808\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.uses"_s),
			$of(u"\u4f7f\u7528\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.else.without.if"_s),
			$of(u"\'\'else\'\'\u3078\u306e\'\'if\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.empty.A.argument"_s),
			$of(u"-A\u306b\u306f\u5f15\u6570\u304c\u5fc5\u8981\u3067\u3059\u3002\'\'-Akey\'\'\u307e\u305f\u306f\'\'-Akey=value\'\'\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.empty.char.lit"_s),
			$of(u"\u7a7a\u306e\u6587\u5b57\u30ea\u30c6\u30e9\u30eb\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.encl.class.required"_s),
			$of(u"{0}\u3092\u542b\u3080\u56f2\u3046\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.annotation.must.be.enum.constant"_s),
			$of(u"\u5217\u6319\u578b\u6ce8\u91c8\u5024\u306f\u3001\u5217\u6319\u578b\u5b9a\u6570\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.as.identifier"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b95\u304b\u3089\'\'enum\'\u306f\u30ad\u30fc\u30ef\u30fc\u30c9\u306a\u306e\u3067\u8b58\u5225\u5b50\u3068\u3057\u3066\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.cant.be.instantiated"_s),
			$of(u"\u5217\u6319\u578b\u306f\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u5316\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.constant.expected"_s),
			$of(u"\u3053\u3053\u306b\u5217\u6319\u578b\u5b9a\u6570\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.constant.not.expected"_s),
			$of(u"\u3053\u3053\u306b\u5217\u6319\u578b\u5b9a\u6570\u306f\u5fc5\u8981\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.label.must.be.unqualified.enum"_s),
			$of(u"\u5217\u6319\u578b\u306eswitch case\u30e9\u30d9\u30eb\u306f\u5217\u6319\u578b\u5b9a\u6570\u306e\u975e\u4fee\u98fe\u540d\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.no.finalize"_s),
			$of(u"\u5217\u6319\u578b\u306ffinalize\u30e1\u30bd\u30c3\u30c9\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.no.subclassing"_s),
			$of(u"\u30af\u30e9\u30b9\u306f\u76f4\u63a5java.lang.Enum\u3092\u62e1\u5f35\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.types.not.extensible"_s),
			$of(u"\u5217\u6319\u578b\u306f\u62e1\u5f35\u53ef\u80fd\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error"_s),
			$of(u"\u30a8\u30e9\u30fc: "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error.reading.file"_s),
			$of(u"{0}\u306e\u8aad\u8fbc\u307f\u30a8\u30e9\u30fc\u3067\u3059\u3002{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error.writing.file"_s),
			$of(u"{0}\u306e\u66f8\u8fbc\u307f\u30a8\u30e9\u30fc\u3067\u3059\u3002{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.except.already.caught"_s),
			$of(u"\u4f8b\u5916{0}\u306f\u3059\u3067\u306b\u6355\u6349\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.except.never.thrown.in.try"_s),
			$of(u"\u4f8b\u5916{0}\u306f\u5bfe\u5fdc\u3059\u308btry\u6587\u306e\u672c\u4f53\u3067\u306f\u30b9\u30ed\u30fc\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected"_s),
			$of(u"{0}\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.module"_s),
			$of(u"\'\'\u30e2\u30b8\u30e5\u30fc\u30eb\'\'\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.module.or.open"_s),
			$of(u"\'\'\u30e2\u30b8\u30e5\u30fc\u30eb\'\'\u307e\u305f\u306f\'\'\u30aa\u30fc\u30d7\u30f3\'\'\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.str"_s),
			$of(u"{0}\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected2"_s),
			$of(u"{0}\u307e\u305f\u306f{1}\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected3"_s),
			$of(u"{0}\u3001{1}\u307e\u305f\u306f{2}\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected4"_s),
			$of(u"{0}, {1}, {2}\u307e\u305f\u306f{3}\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expression.not.allowable.as.annotation.value"_s),
			$of(u"\u5f0f\u304c\u6ce8\u91c8\u306e\u5024\u3068\u3057\u3066\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.feature.not.supported.in.source"_s),
			$of(u"{0}\u306f-source {1}\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\n({0}\u3092\u6709\u52b9\u306b\u3059\u308b\u306b\u306f-source {2}\u4ee5\u4e0a\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.feature.not.supported.in.source.plural"_s),
			$of(u"{0}\u306f-source {1}\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\n({0}\u3092\u6709\u52b9\u306b\u3059\u308b\u306b\u306f-source {2}\u4ee5\u4e0a\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.directory"_s),
			$of(u"\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u3067\u306f\u3042\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.file"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u3067\u306f\u3042\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.found"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.patched.and.msp"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306f\u3001--patch-module\u3068--module-source-path\u306e\u4e21\u65b9\u304b\u3089\u30a2\u30af\u30bb\u30b9\u53ef\u80fd\u3067\u3059\u304c\u3001\u5404\u30d1\u30b9\u4e0a\u306e\u7570\u306a\u308b\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u5c5e\u3057\u3066\u3044\u307e\u3059: {0}, {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.sb.on.source.or.patch.path.for.module"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306f\u3001\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9\u3001\u307e\u305f\u306f\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30d1\u30c3\u30c1\u30fb\u30d1\u30b9\u306b\u5b58\u5728\u3057\u3066\u3044\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.final.parameter.may.not.be.assigned"_s),
			$of(u"final\u30d1\u30e9\u30e1\u30fc\u30bf{0}\u306b\u5024\u3092\u4ee3\u5165\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.finally.without.try"_s),
			$of(u"\'\'finally\'\'\u3078\u306e\'\'try\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.first.statement.must.be.call.to.another.constructor"_s),
			$of(u"\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u304c\u6a19\u6e96\u3067\u306a\u3044\u305f\u3081\u3001\u5148\u982d\u6587\u304c\u30af\u30e9\u30b9{0}\u306e\u4ed6\u306e\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u3092\u547c\u3073\u51fa\u3059\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.foreach.not.applicable.to.type"_s),
			$of(u"for-each\u306f\u5f0f\u306e\u30bf\u30a4\u30d7\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093\n\u671f\u5f85\u5024: {1}\n\u691c\u51fa\u5024: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.fp.number.too.large"_s),
			$of(u"\u6d6e\u52d5\u5c0f\u6570\u70b9\u6570\u304c\u5927\u304d\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.fp.number.too.small"_s),
			$of(u"\u6d6e\u52d5\u5c0f\u6570\u70b9\u6570\u304c\u5c0f\u3055\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.generic.array.creation"_s),
			$of(u"\u6c4e\u7528\u914d\u5217\u3092\u4f5c\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.generic.throwable"_s),
			$of(u"\u6c4e\u7528\u30af\u30e9\u30b9\u306fjava.lang.Throwable\u3092\u62e1\u5f35\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.icls.cant.have.static.decl"_s),
			$of(u"\u5185\u90e8\u30af\u30e9\u30b9{0}\u306e\u9759\u7684\u5ba3\u8a00\u304c\u4e0d\u6b63\u3067\u3059\n\u4fee\u98fe\u5b50\'\'static\'\'\u306f\u5b9a\u6570\u304a\u3088\u3073\u5909\u6570\u306e\u5ba3\u8a00\u3067\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.argument.for.option"_s),
			$of(u"{0}\u306e\u5f15\u6570\u304c\u4e0d\u6b63\u3067\u3059: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.array.creation.both.dimension.and.initialization"_s),
			$of(u"\u6b21\u5143\u5f0f\u3068\u521d\u671f\u5316\u306e\u4e21\u65b9\u3092\u4f7f\u7528\u3057\u305f\u914d\u5217\u306e\u4f5c\u6210\u306f\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.char"_s),
			$of(u"\'\'{0}\'\'\u306f\u4e0d\u6b63\u306a\u6587\u5b57\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.char.for.encoding"_s),
			$of(u"\u3053\u306e\u6587\u5b57(0x{0})\u306f\u3001\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0{1}\u306b\u30de\u30c3\u30d7\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.combination.of.modifiers"_s),
			$of(u"\u4fee\u98fe\u5b50{0}\u3068{1}\u306e\u7d44\u5408\u305b\u306f\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.default.super.call"_s),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30b9\u30fc\u30d1\u30fc\u30fb\u30b3\u30fc\u30eb\u306e\u578b\u4fee\u98fe\u5b50{0}\u304c\u4e0d\u6b63\u3067\u3059\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.dot"_s),
			$of(u"\u4e0d\u6b63\u306a\'\'.\'\'\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.enum.static.ref"_s),
			$of(u"\u521d\u671f\u5316\u5b50\u304b\u3089static\u30d5\u30a3\u30fc\u30eb\u30c9\u3078\u306e\u53c2\u7167\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.esc.char"_s),
			$of(u"\u30a8\u30b9\u30b1\u30fc\u30d7\u6587\u5b57\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.forward.ref"_s),
			$of(u"\u524d\u65b9\u53c2\u7167\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.initializer.for.type"_s),
			$of(u"{0}\u306e\u521d\u671f\u5316\u5b50\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.line.end.in.char.lit"_s),
			$of(u"\u6587\u5b57\u30ea\u30c6\u30e9\u30eb\u306e\u884c\u672b\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.nonascii.digit"_s),
			$of(u"\u4e0d\u6b63\u306a\u975eASCII\u6570\u5b57\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.parenthesized.expression"_s),
			$of(u"\u30ab\u30c3\u30b3\u5185\u306e\u5f0f\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.qual.not.icls"_s),
			$of(u"\u4fee\u98fe\u5b50\u304c\u4e0d\u6b63\u3067\u3059\u3002{0}\u306f\u5185\u90e8\u30af\u30e9\u30b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.record.component.name"_s),
			$of(u"\u30ec\u30b3\u30fc\u30c9\u30fb\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8\u540d{0}\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.ref.to.restricted.type"_s),
			$of(u"\u5236\u9650\u3055\u308c\u305f\u578b\'\'{0}\'\'\u3078\u306e\u7121\u52b9\u306a\u53c2\u7167\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.self.ref"_s),
			$of(u"\u521d\u671f\u5316\u5b50\u5185\u306e\u81ea\u5df1\u53c2\u7167"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.expr"_s),
			$of(u"\u5f0f\u306e\u958b\u59cb\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.stmt"_s),
			$of(u"\u6587\u306e\u958b\u59cb\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.type"_s),
			$of(u"\u578b\u306e\u958b\u59cb\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.static.intf.meth.call"_s),
			$of(u"static\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u30fb\u30e1\u30bd\u30c3\u30c9\u30fb\u30b3\u30fc\u30eb\u304c\u4e0d\u6b63\u3067\u3059\n\u53d7\u4fe1\u5f0f\u306f\u578b\u4fee\u98fe\u5b50\'\'{0}\'\'\u3067\u7f6e\u63db\u3055\u308c\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.text.block.open"_s),
			$of(u"\u30c6\u30ad\u30b9\u30c8\u30fb\u30d6\u30ed\u30c3\u30af\u306e\u958b\u59cb\u533a\u5207\u308a\u6587\u5b57\u306e\u30b7\u30fc\u30b1\u30f3\u30b9\u304c\u7121\u52b9\u3067\u3059\u3002\u884c\u306e\u7d42\u4e86\u6587\u5b57\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.underscore"_s),
			$of(u"\u4e0d\u6b63\u306a\u30a2\u30f3\u30c0\u30fc\u30b9\u30b3\u30a2\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.unicode.esc"_s),
			$of(u"Unicode\u30a8\u30b9\u30b1\u30fc\u30d7\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.import.requires.canonical"_s),
			$of(u"\u30a4\u30f3\u30dd\u30fc\u30c8\u306b\u306f{0}\u306e\u6a19\u6e96\u540d\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.improperly.formed.type.inner.raw.param"_s),
			$of(u"\u578b\u306e\u5f62\u5f0f\u304c\u4e0d\u9069\u5207\u3067\u3059\u3002raw\u578b\u306b\u6307\u5b9a\u3055\u308c\u305f\u578b\u5f15\u6570\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.improperly.formed.type.param.missing"_s),
			$of(u"\u578b\u306e\u5f62\u5f0f\u304c\u4e0d\u9069\u5207\u3067\u3059\u3002\u30d1\u30e9\u30e1\u30fc\u30bf\u304c\u4e0d\u8db3\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incomparable.types"_s),
			$of(u"\u578b{0}\u3068{1}\u306f\u6bd4\u8f03\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incompatible.thrown.types.in.mref"_s),
			$of(u"\u6a5f\u80fd\u5f0f\u3067\u30b9\u30ed\u30fc\u3055\u308c\u305f\u30bf\u30a4\u30d7{0}\u306f\u4e0d\u9069\u5408\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.constructor.receiver.name"_s),
			$of(u"\u53d7\u53d6\u308a\u5074\u306e\u540d\u524d\u304c\u3001\u5305\u542b\u3059\u308b\u5916\u90e8\u30af\u30e9\u30b9\u30fb\u30bf\u30a4\u30d7\u3068\u4e00\u81f4\u3057\u307e\u305b\u3093\n\u5fc5\u9808: {0}\n\u691c\u51fa:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.constructor.receiver.type"_s),
			$of(u"\u53d7\u53d6\u308a\u5074\u306e\u30bf\u30a4\u30d7\u304c\u3001\u5305\u542b\u3059\u308b\u5916\u90e8\u30af\u30e9\u30b9\u30fb\u30bf\u30a4\u30d7\u3068\u4e00\u81f4\u3057\u307e\u305b\u3093\n\u5fc5\u9808: {0}\n\u691c\u51fa:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.receiver.name"_s),
			$of(u"\u53d7\u53d6\u308a\u5074\u306e\u540d\u524d\u304c\u3001\u5305\u542b\u3059\u308b\u30af\u30e9\u30b9\u30fb\u30bf\u30a4\u30d7\u3068\u4e00\u81f4\u3057\u307e\u305b\u3093\n\u5fc5\u9808: {0}\n\u691c\u51fa:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.receiver.type"_s),
			$of(u"\u53d7\u53d6\u308a\u5074\u306e\u30bf\u30a4\u30d7\u304c\u3001\u5305\u542b\u3059\u308b\u30af\u30e9\u30b9\u30fb\u30bf\u30a4\u30d7\u3068\u4e00\u81f4\u3057\u307e\u305b\u3093\n\u5fc5\u9808: {0}\n\u691c\u51fa:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.initializer.must.be.able.to.complete.normally"_s),
			$of(u"\u521d\u671f\u5316\u5b50\u306f\u6b63\u5e38\u306b\u5b8c\u4e86\u3067\u304d\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.initializer.not.allowed"_s),
			$of(u"\u30a4\u30cb\u30b7\u30e3\u30e9\u30a4\u30b6\u306finterfaces\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instance.initializer.not.allowed.in.records"_s),
			$of(u"\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u30fb\u30a4\u30cb\u30b7\u30e3\u30e9\u30a4\u30b6\u306f\u30ec\u30b3\u30fc\u30c9\u3067\u306f\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instanceof.pattern.no.subtype"_s),
			$of(u"\u30d1\u30bf\u30fc\u30f3\u30fb\u30bf\u30a4\u30d7{0}\u306f\u5f0f\u30bf\u30a4\u30d7{1}\u306e\u30b5\u30d6\u30bf\u30a4\u30d7\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instanceof.reifiable.not.safe"_s),
			$of(u"{0}\u3092{1}\u306b\u5b89\u5168\u306b\u30ad\u30e3\u30b9\u30c8\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.int.number.too.large"_s),
			$of(u"\u6574\u6570\u304c\u5927\u304d\u3059\u304e\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.cant.have.type.params"_s),
			$of(u"\u6ce8\u91c8\u578b{0}\u306f\u6c4e\u7528\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.member.clash"_s),
			$of(u"\u6ce8\u91c8\u578b{1}\u3067\u30e1\u30bd\u30c3\u30c9{0}\u3068\u540c\u3058\u540d\u524d\u306e\u8981\u7d20\u304c\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.members.cant.have.params"_s),
			$of(u"\u6ce8\u91c8\u578b\u5ba3\u8a00\u5185\u306e\u8981\u7d20\u304c\u4eee\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u5ba3\u8a00\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.members.cant.have.type.params"_s),
			$of(u"\u6ce8\u91c8\u578b\u5ba3\u8a00\u5185\u306e\u8981\u7d20\u306f\u6c4e\u7528\u30e1\u30bd\u30c3\u30c9\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.expected.here"_s),
			$of(u"\u3053\u3053\u306b\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.meth.cant.have.body"_s),
			$of(u"\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u62bd\u8c61\u30e1\u30bd\u30c3\u30c9\u304c\u672c\u4f53\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.not.allowed.here"_s),
			$of(u"\u3053\u3053\u3067\u306f\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.A.key"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\u30fb\u30aa\u30d7\u30b7\u30e7\u30f3\'\'{0}\'\'\u306e\u30ad\u30fc\u306b\u6307\u5b9a\u3055\u308c\u3066\u3044\u308b\u4e00\u9023\u306e\u8b58\u5225\u5b50\u304c\u3001\u30c9\u30c3\u30c8\u3067\u533a\u5207\u3089\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.accessor.method.in.record"_s),
			$of(u"\u30ec\u30b3\u30fc\u30c9{0}\u306b\u7121\u52b9\u306a\u30a2\u30af\u30bb\u30b5\u30fb\u30e1\u30bd\u30c3\u30c9\u304c\u3042\u308a\u307e\u3059\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.annotation.member.type"_s),
			$of(u"\u6ce8\u91c8\u578b\u8981\u7d20\u306e\u578b\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.binary.number"_s),
			$of(u"2\u9032\u6570\u5b57\u306f\u5c11\u306a\u304f\u3068\u30821\u6841\u306e2\u9032\u6570\u3092\u542b\u3080\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.canonical.constructor.in.record"_s),
			$of(u"\u30ec\u30b3\u30fc\u30c9{1}\u306b\u7121\u52b9\u306a{0}\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u304c\u3042\u308a\u307e\u3059\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.flag"_s),
			$of(u"{0}\u306f\u7121\u52b9\u306a\u30d5\u30e9\u30b0\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.hex.number"_s),
			$of(u"16\u9032\u6570\u5b57\u306f\u5c11\u306a\u304f\u3068\u30821\u6841\u306e16\u9032\u6570\u3092\u542b\u3080\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.lambda.parameter.declaration"_s),
			$of(u"\u7121\u52b9\u306a\u30e9\u30e0\u30c0\u30fb\u30d1\u30e9\u30e1\u30fc\u30bf\u5ba3\u8a00\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.meth.decl.ret.type.req"_s),
			$of(u"\u7121\u52b9\u306a\u30e1\u30bd\u30c3\u30c9\u5ba3\u8a00\u3067\u3059\u3002\u623b\u308a\u5024\u306e\u578b\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.module.directive"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30ec\u30af\u30c6\u30a3\u30d6\u30fb\u30ad\u30fc\u30ef\u30fc\u30c9\u307e\u305f\u306f\'\'}\'\'\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.module.specifier"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u6307\u5b9a\u5b50\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.mref"_s),
			$of(u"{0}\u53c2\u7167\u304c\u7121\u52b9\u3067\u3059\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.path"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u540d\u304c\u7121\u52b9\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.permits.clause"_s),
			$of(u"\u7121\u52b9\u306apermits\u53e5\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.profile"_s),
			$of(u"\u7121\u52b9\u306a\u30d7\u30ed\u30d5\u30a1\u30a4\u30eb: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation"_s),
			$of(u"\u6ce8\u91c8\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059: {0}\u306f\u7121\u52b9\u306a@Repeatable\u6ce8\u91c8\u3067\u6ce8\u91c8\u4ed8\u3051\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.elem.nondefault"_s),
			$of(u"\u5305\u542b\u3059\u308b\u6ce8\u91c8\u578b{0}\u306b\u306f\u8981\u7d20{1}\u306e\u30c7\u30d5\u30a9\u30eb\u30c8\u5024\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.incompatible.target"_s),
			$of(u"\u5305\u542b\u3059\u308b\u6ce8\u91c8\u578b({0})\u306f\u3001\u7e70\u8fd4\u3057\u53ef\u80fd\u306a\u6ce8\u91c8\u578b({1})\u3088\u308a\u591a\u304f\u306e\u30bf\u30fc\u30b2\u30c3\u30c8\u306b\u9069\u7528\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.invalid.value"_s),
			$of(u"{0}\u306f\u6709\u52b9\u306a@Repeatable\u3067\u306f\u3042\u308a\u307e\u305b\u3093: \u5024\u8981\u7d20\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.multiple.values"_s),
			$of(u"{0}\u306f\u6709\u52b9\u306a@Repeatable\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002{1}\u8981\u7d20\u30e1\u30bd\u30c3\u30c9\'\'value\'\'\u304c\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.no.value"_s),
			$of(u"{0}\u306f\u6709\u52b9\u306a@Repeatable\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002\u5024\u8981\u7d20\u30e1\u30bd\u30c3\u30c9\u304c\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.applicable"_s),
			$of(u"\u30b3\u30f3\u30c6\u30ca{0}\u306f\u8981\u7d20{1}\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.applicable.in.context"_s),
			$of(u"\u30b3\u30f3\u30c6\u30ca{0}\u306f\u3053\u306e\u578b\u306e\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.documented"_s),
			$of(u"\u7e70\u8fd4\u3057\u53ef\u80fd\u306a\u6ce8\u91c8\u578b({1})\u306f@Documented\u3067\u3059\u304c\u3001\u5305\u542b\u3059\u308b\u6ce8\u91c8\u578b({0})\u306f\u9055\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.inherited"_s),
			$of(u"\u7e70\u8fd4\u3057\u53ef\u80fd\u306a\u6ce8\u91c8\u578b({1})\u306f@Inherited\u3067\u3059\u304c\u3001\u5305\u542b\u3059\u308b\u6ce8\u91c8\u578b({0})\u306f\u9055\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.repeated.and.container.present"_s),
			$of(u"\u30b3\u30f3\u30c6\u30ca{0}\u306f\u542b\u307e\u308c\u3066\u3044\u308b\u8981\u7d20\u3068\u540c\u6642\u306b\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.retention"_s),
			$of(u"\u5305\u542b\u3059\u308b\u6ce8\u91c8\u578b({0})\u306e\u4fdd\u6709\u304c\u3001\u7e70\u8fd4\u3057\u53ef\u80fd\u306a\u6ce8\u91c8\u578b({2})\u306e\u4fdd\u6709\u3088\u308a\u77ed\u304f\u306a\u3063\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.value.return"_s),
			$of(u"\u5305\u542b\u3059\u308b\u6ce8\u91c8\u578b({0})\u306f\u578b{2}\u306e\u8981\u7d20\'\'value\'\'\u3092\u5ba3\u8a00\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.source"_s),
			$of(u"{0}\u306f\u7121\u52b9\u306a\u30bd\u30fc\u30b9\u30fb\u30ea\u30ea\u30fc\u30b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.supertype.record"_s),
			$of(u"\u30af\u30e9\u30b9\u306f\u76f4\u63a5{0}\u3092\u62e1\u5f35\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.target"_s),
			$of(u"{0}\u306f\u7121\u52b9\u306a\u30bf\u30fc\u30b2\u30c3\u30c8\u30fb\u30ea\u30ea\u30fc\u30b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.yield"_s),
			$of(u"\u5236\u9650\u3055\u308c\u305f\u8b58\u5225\u5b50\'\'yield\'\'\u306e\u4f7f\u7528\u306f\u7121\u52b9\u3067\u3059\n(yield\u3068\u3044\u3046\u30e1\u30bd\u30c3\u30c9\u3092\u547c\u3073\u51fa\u3059\u306b\u306f\u3001yield\u3092\u53d7\u53d6\u308a\u5074\u307e\u305f\u306f\u30bf\u30a4\u30d7\u540d\u3067\u4fee\u98fe\u3057\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.io.exception"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u8aad\u53d6\u308a\u30a8\u30e9\u30fc\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.is.preview"_s),
			$of(u"{0}\u306f\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u306e\u4e00\u90e8\u3067\u3042\u308bAPI\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.label.already.in.use"_s),
			$of(u"\u30e9\u30d9\u30eb{0}\u306f\u3059\u3067\u306b\u4f7f\u7528\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.lambda.body.neither.value.nor.void.compatible"_s),
			$of(u"\u30e9\u30e0\u30c0\u30fb\u30dc\u30c7\u30a3\u306f\u5024\u4e92\u63db\u3067\u3082void\u4e92\u63db\u3067\u3082\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.code"_s),
			$of(u"\u30b3\u30fc\u30c9\u304c\u5927\u304d\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.code.too.large.for.try.stmt"_s),
			$of(u"try\u6587\u306e\u30b3\u30fc\u30c9\u304c\u5927\u304d\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.dimensions"_s),
			$of(u"\u914d\u5217\u578b\u306e\u6b21\u5143\u304c\u591a\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.locals"_s),
			$of(u"\u30ed\u30fc\u30ab\u30eb\u5909\u6570\u304c\u591a\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.parameters"_s),
			$of(u"\u30d1\u30e9\u30e1\u30fc\u30bf\u304c\u591a\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.pool"_s),
			$of(u"\u5b9a\u6570\u304c\u591a\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.pool.in.class"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u5185\u306e\u5b9a\u6570\u304c\u591a\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.stack"_s),
			$of(u"\u30b3\u30fc\u30c9\u304c\u8981\u6c42\u3059\u308b\u30b9\u30bf\u30c3\u30af\u304c\u591a\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.string"_s),
			$of(u"\u5b9a\u6570\u6587\u5b57\u5217\u304c\u9577\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.string.overflow"_s),
			$of(u"\u6587\u5b57\u5217\"{0}...\"\u306eUTF8\u8868\u73fe\u304c\u3001\u5b9a\u6570\u30d7\u30fc\u30eb\u306b\u5bfe\u3057\u3066\u9577\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.classes.cant.extend.sealed"_s),
			$of(u"{0}\u30af\u30e9\u30b9\u306f\u30b7\u30fc\u30eb\u30fb\u30af\u30e9\u30b9\u3092\u62e1\u5f35\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.enum"_s),
			$of(u"\u5217\u6319\u578b\u306f\u30ed\u30fc\u30ab\u30eb\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.var.accessed.from.icls.needs.final"_s),
			$of(u"\u30ed\u30fc\u30ab\u30eb\u5909\u6570{0}\u306f\u5185\u90e8\u30af\u30e9\u30b9\u304b\u3089\u30a2\u30af\u30bb\u30b9\u3055\u308c\u307e\u3059\u3002final\u3067\u5ba3\u8a00\u3055\u308c\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.bad.module-info"_s),
			$of(u"{0}\u306emodule-info.class\u3092\u8aad\u53d6\u308a\u4e2d\u306b\u554f\u984c\u304c\u767a\u751f\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.get.module.name.for.jar"_s),
			$of(u"{0}\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u540d\u3092\u5224\u5225\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.read.directory"_s),
			$of(u"\u30c7\u30a3\u30ec\u30af\u30c8\u30ea{0}\u3092\u8aad\u307f\u53d6\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.read.file"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb{0}\u3092\u8aad\u307f\u53d6\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.invalid.arg.for.xpatch"_s),
			$of(u"--patch-module\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u5f15\u6570\u304c\u7121\u52b9\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.module-info.not.allowed.on.patch.path"_s),
			$of(u"module-info.class\u306f\u30d1\u30c3\u30c1\u30fb\u30d1\u30b9\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.malformed.fp.lit"_s),
			$of(u"\u6d6e\u52d5\u5c0f\u6570\u70b9\u30ea\u30c6\u30e9\u30eb\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.match.binding.exists"_s),
			$of(u"\u65e2\u5b58\u306e\u4e00\u81f4\u30d0\u30a4\u30f3\u30c7\u30a3\u30f3\u30b0\u3092\u518d\u5b9a\u7fa9\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.method.does.not.override.superclass"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u306f\u30b9\u30fc\u30d1\u30fc\u30bf\u30a4\u30d7\u306e\u30e1\u30bd\u30c3\u30c9\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u307e\u305f\u306f\u5b9f\u88c5\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.missing.meth.body.or.decl.abstract"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u672c\u4f53\u304c\u306a\u3044\u304b\u3001abstract\u3068\u3057\u3066\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.missing.ret.stmt"_s),
			$of(u"return\u6587\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.mod.not.allowed.here"_s),
			$of(u"\u4fee\u98fe\u5b50{0}\u3092\u3053\u3053\u3067\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.modifier.not.allowed.here"_s),
			$of(u"\u4fee\u98fe\u5b50{0}\u3092\u3053\u3053\u3067\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.decl.sb.in.module-info.java"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u5ba3\u8a00\u306fmodule-info.java\u3068\u3044\u3046\u540d\u524d\u306e\u30d5\u30a1\u30a4\u30eb\u306b\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.name.mismatch"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u540d{0}\u306f\u5fc5\u8981\u306a\u540d\u524d{1}\u3068\u4e00\u81f4\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.non.zero.opens"_s),
			$of(u"\u30aa\u30fc\u30d7\u30f3\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306f\u30bc\u30ed\u3067\u306a\u3044opens_count\u3092\u6301\u3061\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found.in.module.source.path"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9\u306b\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found.on.module.source.path"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9\u306b\u30e2\u30b8\u30e5\u30fc\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.modulesourcepath.must.be.specified.with.dash.m.option"_s),
			$of(u"-m\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u4f7f\u7528\u3059\u308b\u5834\u5408\u3001\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9\u3092\u6307\u5b9a\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multi-module.outdir.cannot.be.exploded.module"_s),
			$of(u"\u8907\u6570\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30e2\u30fc\u30c9\u3067\u3001\u51fa\u529b\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u5c55\u958b\u3057\u305f\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multicatch.parameter.may.not.be.assigned"_s),
			$of(u"\u8907\u6570catch\u30d1\u30e9\u30e1\u30fc\u30bf{0}\u306b\u5024\u3092\u4ee3\u5165\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multicatch.types.must.be.disjoint"_s),
			$of(u"\u8907\u6570catch\u6587\u306e\u4ee3\u66ff\u3092\u30b5\u30d6\u30af\u30e9\u30b9\u5316\u306b\u3088\u3063\u3066\u95a2\u9023\u4ed8\u3051\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\n\u4ee3\u66ff{0}\u306f\u4ee3\u66ff{1}\u306e\u30b5\u30d6\u30af\u30e9\u30b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multiple.values.for.module.source.path"_s),
			$of(u"\u30d1\u30bf\u30fc\u30f3\u5f15\u6570\u3067--module-source-path\u304c\u8907\u6570\u56de\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure"_s),
			$of(u"\u540d\u524d\u304c\u7af6\u5408\u3057\u3066\u3044\u307e\u3059\u3002{0}\u3068{1}\u306f\u524a\u9664\u5f8c\u306e\u540d\u524d\u304c\u540c\u3058\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.hide"_s),
			$of(u"\u540d\u524d\u304c\u7af6\u5408\u3057\u3066\u3044\u307e\u3059\u3002{1}\u306e{0}\u3068{3}\u306e{2}\u306f\u307e\u3060\u4ed6\u65b9\u3092\u975e\u8868\u793a\u306b\u3057\u3066\u3044\u307e\u305b\u3093\u304c\u3001\u524a\u9664\u5f8c\u306e\u540d\u524d\u304c\u540c\u3058\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.override"_s),
			$of(u"\u540d\u524d\u304c\u7af6\u5408\u3057\u3066\u3044\u307e\u3059\u3002{2}\u306e{0}({1})\u3068{5}\u306e{3}({4})\u306f\u307e\u3060\u4ed6\u65b9\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u307e\u305b\u3093\u304c\u3001\u524a\u9664\u5f8c\u306e\u540d\u524d\u304c\u540c\u3058\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.override.1"_s),
			$of(u"\u540d\u524d\u304c\u7af6\u5408\u3057\u3066\u3044\u307e\u3059\u3002{0} {1}\u306f\u307e\u3060\u4ed6\u65b9\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u307e\u305b\u3093\u304c\u3001\u524a\u9664\u5f8c\u306e\u540d\u524d\u304c\u540c\u30582\u3064\u306e\u30e1\u30bd\u30c3\u30c9\u304c\u3042\u308a\u307e\u3059\n\u6700\u521d\u306e\u30e1\u30bd\u30c3\u30c9:  {4}\u306e{2}({3})\n2\u756a\u76ee\u306e\u30e1\u30bd\u30c3\u30c9: {7}\u306e{5}({6})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.reserved.for.internal.use"_s),
			$of(u"{0}\u306f\u5185\u90e8\u3067\u306e\u4f7f\u7528\u306e\u305f\u3081\u4e88\u7d04\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.native.meth.cant.have.body"_s),
			$of(u"native\u30e1\u30bd\u30c3\u30c9\u304c\u672c\u4f53\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.new.not.allowed.in.annotation"_s),
			$of(u"\'\'new\'\'\u306f\u6ce8\u91c8\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.annotation.member"_s),
			$of(u"{1}\u306e\u6ce8\u91c8\u30e1\u30f3\u30d0\u30fc{0}\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.annotations.on.dot.class"_s),
			$of(u"\u6ce8\u91c8\u306f\u30af\u30e9\u30b9\u30fb\u30ea\u30c6\u30e9\u30eb\u306e\u30bf\u30a4\u30d7\u3067\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.encl.instance.of.type.in.scope"_s),
			$of(u"\u578b{0}\u306e\u5185\u90e8\u30af\u30e9\u30b9\u3092\u56f2\u3080\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u304c\u30b9\u30b3\u30fc\u30d7\u5185\u306b\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.intf.expected.here"_s),
			$of(u"\u3053\u3053\u306b\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u306f\u5fc5\u8981\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.match.entry"_s),
			$of(u"{0}\u306f{1}\u306e\u30a8\u30f3\u30c8\u30ea\u306b\u9069\u5408\u3057\u307e\u305b\u3093\u3002{2}\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.opens.unless.strong"_s),
			$of(u"\'\'opens\'\'\u306f\u5f37\u56fa\u306a\u30e2\u30b8\u30e5\u30fc\u30eb\u3067\u306e\u307f\u8a31\u53ef\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.output.dir"_s),
			$of(u"\u30af\u30e9\u30b9\u51fa\u529b\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.pkg.in.module-info.java"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8\u5ba3\u8a00\u306f\u30d5\u30a1\u30a4\u30ebmodule-info.java\u5185\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.source.files"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.source.files.classes"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306f\u30af\u30e9\u30b9\u540d\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.superclass"_s),
			$of(u"{0}\u306b\u306f\u30b9\u30fc\u30d1\u30fc\u30af\u30e9\u30b9\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.switch.expression"_s),
			$of(u"switch\u5f0f\u306e\u5916\u5074\u306eyield"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.switch.expression.qualify"_s),
			$of(u"switch\u5f0f\u306e\u5916\u5074\u306eyield\n(yield\u3068\u3044\u3046\u30e1\u30bd\u30c3\u30c9\u3092\u547c\u3073\u51fa\u3059\u306b\u306f\u3001yield\u3092\u53d7\u53d6\u308a\u5074\u307e\u305f\u306f\u30bf\u30a4\u30d7\u540d\u3067\u4fee\u98fe\u3057\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.value.for.option"_s),
			$of(u"{0}\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u5024\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.zipfs.for.archive"_s),
			$of(u"\u3053\u306e\u30d5\u30a1\u30a4\u30eb\u306e\u51e6\u7406\u306b\u4f7f\u7528\u3067\u304d\u308b\u30d5\u30a1\u30a4\u30eb\u30fb\u30b7\u30b9\u30c6\u30e0\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0\u304c\u3042\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non-static.cant.be.ref"_s),
			$of(u"static\u3067\u306a\u3044{0} {1}\u3092static\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u304b\u3089\u53c2\u7167\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.or.sealed.expected"_s),
			$of(u"sealed\u307e\u305f\u306fnon-sealed\u4fee\u98fe\u5b50\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.sealed.or.final.expected"_s),
			$of(u"sealed\u3001non-sealed\u307e\u305f\u306ffinal\u4fee\u98fe\u5b50\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.with.no.sealed.supertype"_s),
			$of(u"non-sealed\u4fee\u98fe\u5b50\u306f\u3053\u3053\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\n(\u30af\u30e9\u30b9{0}\u306b\u30b7\u30fc\u30eb\u30fb\u30b9\u30fc\u30d1\u30fc\u30bf\u30a4\u30d7\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u305b\u3093)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.annotation.type"_s),
			$of(u"{0}\u306f\u6ce8\u91c8\u578b\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.class.intf.cant.access"_s),
			$of(u"{1}.{0}\u306f\u30a2\u30af\u30bb\u30b9\u3067\u304d\u306a\u3044\u30af\u30e9\u30b9\u307e\u305f\u306f\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u306b\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.class.intf.cant.access.reason"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{2}\u306e{1}.{0}\u306b\u306f\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.package.cant.access"_s),
			$of(u"{0} \u306f\u8868\u793a\u4e0d\u53ef\u3067\u3059\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.public"_s),
			$of(u"{1}\u306e{0}\u306fpublic\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.public.cant.access"_s),
			$of(u"{1}\u306e{0}\u306fpublic\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002\u30d1\u30c3\u30b1\u30fc\u30b8\u5916\u304b\u3089\u306f\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.encl.class"_s),
			$of(u"{0}\u306f\u5185\u90e8\u30af\u30e9\u30b9\u3092\u56f2\u307f\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.exhaustive"_s),
			$of(u"switch\u5f0f\u304c\u3059\u3079\u3066\u306e\u53ef\u80fd\u306a\u5165\u529b\u5024\u3092\u30ab\u30d0\u30fc\u3057\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.in.module.on.module.source.path"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.in.profile"_s),
			$of(u"{0}\u306f\u30d7\u30ed\u30d5\u30a1\u30a4\u30eb\'\'{1}\'\'\u3067\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.loop.label"_s),
			$of(u"{0}\u306f\u30eb\u30fc\u30d7\u30fb\u30e9\u30d9\u30eb\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.stmt"_s),
			$of(u"\u6587\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.within.bounds"_s),
			$of(u"\u578b\u5f15\u6570{0}\u306f\u578b\u5909\u6570{1}\u306e\u5883\u754c\u5185\u306b\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.operator.cant.be.applied"_s),
			$of(u"\u5358\u9805\u6f14\u7b97\u5b50\'\'{0}\'\'\u306e\u30aa\u30da\u30e9\u30f3\u30c9\u578b{1}\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.operator.cant.be.applied.1"_s),
			$of(u"\u4e8c\u9805\u6f14\u7b97\u5b50\'\'{0}\'\'\u306e\u30aa\u30da\u30e9\u30f3\u30c9\u578b\u304c\u4e0d\u6b63\u3067\u3059\n\u6700\u521d\u306e\u578b: {1}\n2\u756a\u76ee\u306e\u578b: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.not.allowed.with.target"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306f\u30bf\u30fc\u30b2\u30c3\u30c8{1}\u3068\u3068\u3082\u306b\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.removed.source"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306f\u73fe\u5728\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002{1}\u4ee5\u964d\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.removed.target"_s),
			$of(u"\u30bf\u30fc\u30b2\u30c3\u30c8\u30fb\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306f\u73fe\u5728\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002{1}\u4ee5\u964d\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.too.many"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u3092\u6307\u5b9a\u3067\u304d\u308b\u306e\u306f1\u56de\u306e\u307f\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.orphaned"_s),
			$of(u"{0}\u306b\u306f\u89aa\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.output.dir.must.be.specified.with.dash.m.option"_s),
			$of(u"-m\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u4f7f\u7528\u3059\u308b\u5834\u5408\u3001\u30af\u30e9\u30b9\u51fa\u529b\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u3092\u6307\u5b9a\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.incompatible.ret"_s),
			$of(u"{0}\n\u623b\u308a\u5024\u306e\u578b{1}\u306f{2}\u3068\u4e92\u63db\u6027\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.meth"_s),
			$of(u"{0}\n\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3055\u308c\u305f\u30e1\u30bd\u30c3\u30c9\u306f{1}\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.meth.doesnt.throw"_s),
			$of(u"{0}\n\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3055\u308c\u305f\u30e1\u30bd\u30c3\u30c9\u306f{1}\u3092\u30b9\u30ed\u30fc\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.static"_s),
			$of(u"{0}\n\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3059\u308b\u30e1\u30bd\u30c3\u30c9\u304cstatic\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.weaker.access"_s),
			$of(u"{0}\n({1})\u3088\u308a\u5f31\u3044\u30a2\u30af\u30bb\u30b9\u6a29\u9650\u3092\u5272\u308a\u5f53\u3066\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.clash.from.requires"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306f{2}\u3068{3}\u306e\u4e21\u65b9\u304b\u3089\u30d1\u30c3\u30b1\u30fc\u30b8{1}\u3092\u8aad\u307f\u53d6\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.clash.from.requires.in.unnamed"_s),
			$of(u"\u540d\u524d\u306e\u306a\u3044\u30e2\u30b8\u30e5\uff0d\u30eb\u306f{1}\u3068{2}\u306e\u4e21\u65b9\u304b\u3089\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u3092\u8aad\u307f\u53d6\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.empty.or.not.found"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8\u306f\u7a7a\u3067\u3042\u308b\u304b\u3001\u307e\u305f\u306f\u5b58\u5728\u3057\u307e\u305b\u3093 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.in.other.module"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8\u304c\u5225\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u5b58\u5728\u3057\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.not.visible"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u8868\u793a\u4e0d\u53ef\u3067\u3059\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pkg.annotations.sb.in.package-info.java"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8\u306e\u6ce8\u91c8\u306f\u30d5\u30a1\u30a4\u30ebpackage-info.java\u5185\u306b\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pkg.clashes.with.class.of.same.name"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u540c\u540d\u306e\u30af\u30e9\u30b9\u3068\u7af6\u5408\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.plugin.not.found"_s),
			$of(u"\u30d7\u30e9\u30b0\u30a4\u30f3\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.premature.eof"_s),
			$of(u"\u69cb\u6587\u89e3\u6790\u4e2d\u306b\u30d5\u30a1\u30a4\u30eb\u306e\u7d42\u308f\u308a\u306b\u79fb\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled"_s),
			$of(u"{0}\u306f\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u3067\u3042\u308a\u3001\u30c7\u30d5\u30a9\u30eb\u30c8\u3067\u7121\u52b9\u306b\u306a\u3063\u3066\u3044\u307e\u3059\u3002\n({0}\u3092\u6709\u52b9\u306b\u3059\u308b\u306b\u306f--enable-preview\u3092\u4f7f\u7528\u3057\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled.classfile"_s),
			$of(u"{0}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306fJava SE {1}\u306e\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002\n(\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u3092\u542b\u3080\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u30ed\u30fc\u30c9\u3067\u304d\u308b\u3088\u3046\u306b\u3059\u308b\u306b\u306f\u3001--enable-preview\u3092\u4f7f\u7528\u3057\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled.plural"_s),
			$of(u"{0}\u306f\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u3067\u3042\u308a\u3001\u30c7\u30d5\u30a9\u30eb\u30c8\u3067\u7121\u52b9\u306b\u306a\u3063\u3066\u3044\u307e\u3059\u3002\n({0}\u3092\u6709\u52b9\u306b\u3059\u308b\u306b\u306f--enable-preview\u3092\u4f7f\u7528\u3057\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.not.latest"_s),
			$of(u"--enable-preview\u304c\u6307\u5b9a\u3055\u308c\u305f\u30bd\u30fc\u30b9\u30fb\u30ea\u30ea\u30fc\u30b9{0}\u306f\u7121\u52b9\u3067\u3059\n(\u30d7\u30ec\u30d3\u30e5\u30fc\u8a00\u8a9e\u6a5f\u80fd\u306f\u30ea\u30ea\u30fc\u30b9{1}\u3067\u306e\u307f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.without.source.or.release"_s),
			$of(u"--enable-preview\u306f-source\u307e\u305f\u306f--release\u3068\u3068\u3082\u306b\u4f7f\u7528\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.prob.found.req"_s),
			$of(u"\u4e0d\u9069\u5408\u306a\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.bad.config.file"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u69cb\u6210\u30d5\u30a1\u30a4\u30eb\u304c\u4e0d\u6b63\u3067\u3042\u308b\u304b\u3001\u30d7\u30ed\u30bb\u30c3\u30b5\u30fb\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306e\u69cb\u7bc9\u4e2d\u306b\u4f8b\u5916\u304c\u30b9\u30ed\u30fc\u3055\u308c\u307e\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.access"_s),
			$of(u"{0}\u306b\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093\n{1}\n\u8a73\u7d30\u306f\u6b21\u306e\u30b9\u30bf\u30c3\u30af\u30c8\u30ec\u30fc\u30b9\u3067\u8abf\u67fb\u3057\u3066\u304f\u3060\u3055\u3044\u3002\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.access.1"_s),
			$of(u"{0}\u306b\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.create.loader"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\u306e\u30af\u30e9\u30b9\u30fb\u30ed\u30fc\u30c0\u30fc\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.find.class"_s),
			$of(u"\'\'{0}\'\'\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.load.class"_s),
			$of(u"\'\'{0}\'\'\u304c\u539f\u56e0\u3067\u3001\u30d7\u30ed\u30bb\u30c3\u30b5\u30fb\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.no.explicit.annotation.processing.requested"_s),
			$of(u"\u30af\u30e9\u30b9\u540d\'\'{0}\'\'\u304c\u53d7\u3051\u5165\u308c\u3089\u308c\u308b\u306e\u306f\u3001\u6ce8\u91c8\u51e6\u7406\u304c\u660e\u793a\u7684\u306b\u30ea\u30af\u30a8\u30b9\u30c8\u3055\u308c\u305f\u5834\u5408\u306e\u307f\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.no.service"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u30fb\u30ed\u30fc\u30c0\u30fc\u304c\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u304c\u3001\u6ce8\u91c8\u51e6\u7406\u306b\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.bad.option.name"_s),
			$of(u"\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{1}\'\'\u306b\u3088\u3063\u3066\u6307\u5b9a\u3055\u308c\u305f\u30aa\u30d7\u30b7\u30e7\u30f3\u540d\'\'{0}\'\'\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.cant.instantiate"_s),
			$of(u"\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{0}\'\'\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u5316\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.not.found"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{0}\'\'\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.wrong.type"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{0}\'\'\u304cjavax.annotation.processing.Processor\u3092\u5b9f\u88c5\u3057\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.service.problem"_s),
			$of(u"\u30d7\u30ed\u30bb\u30c3\u30b5\u3092\u30ed\u30fc\u30c9\u3059\u308b\u305f\u3081\u306e\u30b5\u30fc\u30d3\u30b9\u30fb\u30ed\u30fc\u30c0\u30fc\u3092\u4f5c\u6210\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.processorpath.no.processormodulepath"_s),
			$of(u"-processorpath\u3068--processor-module-path\u306e\u7d44\u5408\u305b\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.profile.bootclasspath.conflict"_s),
			$of(u"profile\u3068bootclasspath\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u540c\u6642\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.qualified.new.of.static.class"_s),
			$of(u"static\u30af\u30e9\u30b9\u306enew\u304c\u4fee\u98fe\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.receiver.parameter.not.applicable.constructor.toplevel.class"_s),
			$of(u"\u53d7\u53d6\u308a\u5074\u30d1\u30e9\u30e1\u30fc\u30bf\u306f\u6700\u4e0a\u4f4d\u30ec\u30d9\u30eb\u30fb\u30af\u30e9\u30b9\u306e\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306b\u9069\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.cannot.declare.instance.fields"_s),
			$of(u"\u30d5\u30a3\u30fc\u30eb\u30c9\u5ba3\u8a00\u306f\u9759\u7684\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\n(\u30d5\u30a3\u30fc\u30eb\u30c9\u3092\u30ec\u30b3\u30fc\u30c9\u30fb\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8\u306b\u7f6e\u63db\u3059\u308b\u3053\u3068\u3092\u691c\u8a0e)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.cant.declare.field.modifiers"_s),
			$of(u"\u30ec\u30b3\u30fc\u30c9\u30fb\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8\u306b\u4fee\u98fe\u5b50\u3092\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.component.and.old.array.syntax"_s),
			$of(u"\u65e7\u5f0f\u306e\u914d\u5217\u8868\u8a18\u6cd5\u306f\u30ec\u30b3\u30fc\u30c9\u30fb\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8\u3067\u306f\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.header.expected"_s),
			$of(u"\u30ec\u30b3\u30fc\u30c9\u30fb\u30d8\u30c3\u30c0\u30fc\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.recursive.ctor.invocation"_s),
			$of(u"\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306e\u547c\u51fa\u3057\u304c\u518d\u5e30\u7684\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.ref.ambiguous"_s),
			$of(u"{0}\u306e\u53c2\u7167\u306f\u3042\u3044\u307e\u3044\u3067\u3059\n{3}\u306e{1} {2}\u3068{6}\u306e{4} {5}\u306e\u4e21\u65b9\u304c\u4e00\u81f4\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.release.bootclasspath.conflict"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306f--release\u3068\u4e00\u7dd2\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.annotation.target"_s),
			$of(u"\u6ce8\u91c8\u30bf\u30fc\u30b2\u30c3\u30c8\u304c\u7e70\u308a\u8fd4\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.interface"_s),
			$of(u"\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u304c\u7e70\u308a\u8fd4\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.modifier"_s),
			$of(u"\u4fee\u98fe\u5b50\u304c\u7e70\u308a\u8fd4\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.provides.for.service"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9{0}\u306b\u8907\u6570\u306e\'\'provides\'\'\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.value.for.module.source.path"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306b\u5bfe\u3057\u3066--module-source-path\u304c\u8907\u6570\u56de\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.value.for.patch.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306b\u5bfe\u3057\u3066--patch-module\u304c\u8907\u6570\u56de\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.report.access"_s),
			$of(u"{0}\u306f{2}\u3067{1}\u30a2\u30af\u30bb\u30b9\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.req.arg"_s),
			$of(u"{0}\u306b\u306f\u5f15\u6570\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed"_s),
			$of(u"\u3053\u3053\u3067\u306f\'\'{0}\'\'\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\n\u30ea\u30ea\u30fc\u30b9{1}\u304b\u3089\'\'{0}\'\'\u306f\u5236\u9650\u3055\u308c\u305f\u578b\u540d\u3067\u3042\u308a\u3001\u578b\u306e\u5ba3\u8a00\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.array"_s),
			$of(u"\'\'{0}\'\'\u306f\u914d\u5217\u306e\u8981\u7d20\u30bf\u30a4\u30d7\u3068\u3057\u3066\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.compound"_s),
			$of(u"\'\'{0}\'\'\u306f\u8907\u5408\u5ba3\u8a00\u3067\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.here"_s),
			$of(u"\'\'{0}\'\'\u306f\u3053\u3053\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.ret.outside.meth"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u306e\u5916\u306ereturn\u6587\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.return.outside.switch.expression"_s),
			$of(u"switch\u5f0f\u306e\u5916\u5074\u3067return\u3092\u5b9f\u884c\u3057\u3088\u3046\u3068\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.rule.completes.normally"_s),
			$of(u"switch\u30eb\u30fc\u30eb\u304c\u5024\u3092\u63d0\u4f9b\u305b\u305a\u306b\u5b8c\u4e86\u3057\u307e\u3057\u305f\n(switch\u5f0f\u306eswitch\u30eb\u30fc\u30eb\u306f\u5024\u307e\u305f\u306f\u30b9\u30ed\u30fc\u3092\u63d0\u4f9b\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.same.binary.name"_s),
			$of(u"\u30af\u30e9\u30b9: {0}\u3068{1}\u306e\u30d0\u30a4\u30ca\u30ea\u540d\u304c\u540c\u3058\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sealed.class.must.have.subclasses"_s),
			$of(u"\u30b7\u30fc\u30eb\u30fb\u30af\u30e9\u30b9\u306b\u306f\u30b5\u30d6\u30af\u30e9\u30b9\u3092\u542b\u3081\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sealed.or.non.sealed.local.classes.not.allowed"_s),
			$of(u"sealed\u307e\u305f\u306fnon-sealed\u306e\u30ed\u30fc\u30ab\u30eb\u30fb\u30af\u30e9\u30b9\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.definition.is.enum"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u5b9a\u7fa9\u304c\u5217\u6319\u578b\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.doesnt.have.a.no.args.constructor"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u5b9f\u88c5\u306e\u30c7\u30d5\u30a9\u30eb\u30c8\u30fb\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u304c\u3042\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.is.abstract"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u5b9f\u88c5\u304c\u62bd\u8c61\u30af\u30e9\u30b9\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.is.inner"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u5b9f\u88c5\u304c\u5185\u90e8\u30af\u30e9\u30b9\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.must.be.subtype.of.service.interface"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u5b9f\u88c5\u30bf\u30a4\u30d7\u306f\u3001\u30b5\u30fc\u30d3\u30b9\u30fb\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u30fb\u30bf\u30a4\u30d7\u306e\u30b5\u30d6\u30bf\u30a4\u30d7\u3067\u3042\u308b\u304b\u3001\u30b5\u30fc\u30d3\u30b9\u5b9f\u88c5\u3092\u623b\u3057\u3001\u5f15\u6570\u3092\u6301\u305f\u306a\u3044\u3001\"provider\"\u3068\u3044\u3046\u540d\u524d\u306epublic static\u30e1\u30bd\u30c3\u30c9\u3092\u6301\u3064\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.no.args.constructor.not.public"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u5b9f\u88c5\u306e\u5f15\u6570\u306a\u3057\u306e\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u304c\u30d1\u30d6\u30ea\u30c3\u30af\u3067\u306f\u3042\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.not.in.right.module"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u5b9f\u88c5\u3092provides\u30c7\u30a3\u30ec\u30af\u30c6\u30a3\u30d6\u3068\u3057\u3066\u540c\u3058\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u5b9a\u7fa9\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.provider.return.must.be.subtype.of.service.interface"_s),
			$of(u"\"provider\"\u30e1\u30bd\u30c3\u30c9\u306e\u623b\u308a\u30bf\u30a4\u30d7\u306f\u3001\u30b5\u30fc\u30d3\u30b9\u30fb\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u30fb\u30bf\u30a4\u30d7\u306e\u30b5\u30d6\u30bf\u30a4\u30d7\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.signature.doesnt.match.intf"_s),
			$of(u"\u30b7\u30b0\u30cb\u30c1\u30e3\u304c{0}\u306b\u9069\u5408\u3057\u307e\u305b\u3093\u3002\u4e92\u63db\u6027\u306e\u306a\u3044\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.signature.doesnt.match.supertype"_s),
			$of(u"\u30b7\u30b0\u30cb\u30c1\u30e3\u304c{0}\u306b\u9069\u5408\u3057\u307e\u305b\u3093\u3002\u4e92\u63db\u6027\u306e\u306a\u3044\u30b9\u30fc\u30d1\u30fc\u30bf\u30a4\u30d7\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.source.cant.overwrite.input.file"_s),
			$of(u"\u30bd\u30fc\u30b9\u306e\u66f8\u8fbc\u307f\u30a8\u30e9\u30fc\u3067\u3059\u3002\u5165\u529b\u30d5\u30a1\u30a4\u30eb{0}\u3092\u4e0a\u66f8\u304d\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sourcepath.modulesourcepath.conflict"_s),
			$of(u"--source-path\u3068--module-source-path\u306e\u4e21\u65b9\u3092\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.stack.sim.error"_s),
			$of(u"\u5185\u90e8\u30a8\u30e9\u30fc: {0}\u3067\u306e\u30b9\u30bf\u30c3\u30af\u30fb\u30b7\u30df\u30e5\u30ec\u30fc\u30b7\u30e7\u30f3\u30fb\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.declaration.not.allowed.in.inner.classes"_s),
			$of(u"\u9759\u7684\u5ba3\u8a00\u306f\u5185\u90e8\u30af\u30e9\u30b9\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.imp.only.classes.and.interfaces"_s),
			$of(u"static import\u306f\u30af\u30e9\u30b9\u3068\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u304b\u3089\u306e\u307f\u3068\u306a\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.methods.cannot.be.annotated.with.override"_s),
			$of(u"static\u30e1\u30bd\u30c3\u30c9\u306f@Override\u3067\u6ce8\u91c8\u4ed8\u3051\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.string.const.req"_s),
			$of(u"\u5b9a\u6570\u306e\u6587\u5b57\u5217\u5f0f\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.case.unexpected.statement"_s),
			$of(u"case\u306e\u4e88\u671f\u3057\u306a\u3044\u6587\u3067\u3059\u3002\u4e88\u671f\u3055\u308c\u308b\u306e\u306f\u3001\u5f0f\u3001\u30d6\u30ed\u30c3\u30af\u307e\u305f\u306fthrow\u6587\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.completes.normally"_s),
			$of(u"switch\u5f0f\u304c\u5024\u3092\u63d0\u4f9b\u305b\u305a\u306b\u5b8c\u4e86\u3057\u307e\u3057\u305f\n(switch\u5f0f\u306f\u3059\u3079\u3066\u306e\u53ef\u80fd\u306a\u5165\u529b\u5024\u306b\u3064\u3044\u3066\u5024\u307e\u305f\u306f\u30b9\u30ed\u30fc\u3092\u63d0\u4f9b\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.empty"_s),
			$of(u"switch\u5f0f\u306bcase\u53e5\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.no.result.expressions"_s),
			$of(u"switch\u5f0f\u306b\u7d50\u679c\u5f0f\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.mixing.case.types"_s),
			$of(u"switch\u3067case\u306e\u7570\u306a\u308b\u7a2e\u985e\u304c\u4f7f\u7528\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.null.not.allowed"_s),
			$of(u"case\u306enull\u30e9\u30d9\u30eb\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.this.as.identifier"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b98\u304b\u3089\'\'this\'\'\u306f\u53d7\u4fe1\u30bf\u30a4\u30d7\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u540d\u3068\u3057\u3066\u306e\u307f\u8a31\u53ef\u3055\u308c\u307e\u3059\n\u3053\u308c\u306f\u6700\u521d\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u306b\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u3001\u30e9\u30e0\u30c0\u30fb\u30d1\u30e9\u30e1\u30fc\u30bf\u306b\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.throws.not.allowed.in.intf.annotation"_s),
			$of(u"throws\u7bc0\u3092@interface\u30e1\u30f3\u30d0\u30fc\u3067\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.too.many.modules"_s),
			$of(u"\u691c\u51fa\u3055\u308c\u305f\u30e2\u30b8\u30e5\u30fc\u30eb\u5ba3\u8a00\u304c\u591a\u3059\u304e\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.too.many.patched.modules"_s),
			$of(u"\u30d1\u30c3\u30c1\u9069\u7528\u30e2\u30b8\u30e5\u30fc\u30eb\u304c\u591a\u3059\u304e\u307e\u3059({0})\u3002--module-source-path\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.resource.may.not.be.assigned"_s),
			$of(u"\u81ea\u52d5\u30af\u30ed\u30fc\u30ba\u53ef\u80fd\u306a\u30ea\u30bd\u30fc\u30b9{0}\u306b\u5024\u3092\u4ee3\u5165\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.with.resources.expr.effectively.final.var"_s),
			$of(u"try-with-resources\u30ea\u30bd\u30fc\u30b9\u3068\u3057\u3066\u4f7f\u7528\u3055\u308c\u308b\u5909\u6570{0}\u304c\u3001final\u3067\u3082\u4e8b\u5b9f\u4e0a\u306efinal\u3067\u3082\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.with.resources.expr.needs.var"_s),
			$of(u"try-with-resources\u30ea\u30bd\u30fc\u30b9\u306f\u3001final\u5909\u6570\u307e\u305f\u306f\u4e8b\u5b9f\u4e0a\u306efinal\u5909\u6570\u3078\u306e\u53c2\u7167\u3092\u793a\u3059\u5909\u6570\u5ba3\u8a00\u307e\u305f\u306f\u5f0f\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.without.catch.finally.or.resource.decls"_s),
			$of(u"\'\'try\'\'\u3078\u306e\'\'catch\'\'\u3001\'\'finally\'\'\u307e\u305f\u306f\u30ea\u30bd\u30fc\u30b9\u5ba3\u8a00\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.two.class.loaders.1"_s),
			$of(u"javac\u304c\u8907\u6570\u306e\u30af\u30e9\u30b9\u30fb\u30ed\u30fc\u30c0\u30fc\u9593\u3067\u5206\u5272\u3055\u308c\u3066\u3044\u307e\u3059: \u69cb\u6210\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.two.class.loaders.2"_s),
			$of(u"javac\u304c\u8907\u6570\u306e\u30af\u30e9\u30b9\u30fb\u30ed\u30fc\u30c0\u30fc\u9593\u3067\u5206\u5272\u3055\u308c\u3066\u3044\u307e\u3059:\n\u30af\u30e9\u30b9\u306e\u53d6\u5f97\u5143\u30d5\u30a1\u30a4\u30eb: {0}\njavac\u306e\u53d6\u5f97\u5143: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.doesnt.take.params"_s),
			$of(u"\u578b{0}\u306f\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u3068\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.found.req"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044\u578b\n\u671f\u5f85\u5024: {1}\n\u691c\u51fa\u5024:    {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.cant.be.deref"_s),
			$of(u"\u578b\u5909\u6570\u304b\u3089\u9078\u629e\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.may.not.be.followed.by.other.bounds"_s),
			$of(u"\u3053\u306e\u578b\u5909\u6570\u306e\u5f8c\u308d\u306b\u4ed6\u306e\u5883\u754c\u3092\u914d\u7f6e\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.more.than.once"_s),
			$of(u"\u578b\u5909\u6570{0}\u306f{1}\u306e\u623b\u308a\u5024\u306e\u578b\u30672\u56de\u4ee5\u4e0a\u51fa\u73fe\u3057\u307e\u3059\u3002\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u751f\u6210\u3055\u308c\u306a\u3044\u307e\u307e\u306b\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.more.than.once.in.result"_s),
			$of(u"\u578b\u5909\u6570{0}\u306f{1}\u306e\u578b\u30672\u56de\u4ee5\u4e0a\u51fa\u73fe\u3057\u307e\u3059\u3002\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u751f\u6210\u3055\u308c\u306a\u3044\u307e\u307e\u306b\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.types.incompatible"_s),
			$of(u"\u30bf\u30a4\u30d7{0}\u3068{1}\u306f\u4e92\u63db\u6027\u304c\u3042\u308a\u307e\u305b\u3093\u3002\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.char.lit"_s),
			$of(u"\u6587\u5b57\u30ea\u30c6\u30e9\u30eb\u304c\u9589\u3058\u3089\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.comment"_s),
			$of(u"\u30b3\u30e1\u30f3\u30c8\u304c\u9589\u3058\u3089\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.str.lit"_s),
			$of(u"\u6587\u5b57\u5217\u30ea\u30c6\u30e9\u30eb\u304c\u9589\u3058\u3089\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.text.block"_s),
			$of(u"\u9589\u3058\u3089\u308c\u3066\u3044\u306a\u3044\u30c6\u30ad\u30b9\u30c8\u30fb\u30d6\u30ed\u30c3\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.undef.label"_s),
			$of(u"\u30e9\u30d9\u30eb{0}\u306f\u672a\u5b9a\u7fa9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.underscore.as.identifier"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b99\u304b\u3089\'\'_\'\'\u306f\u30ad\u30fc\u30ef\u30fc\u30c9\u306a\u306e\u3067\u8b58\u5225\u5b50\u3068\u3057\u3066\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.underscore.as.identifier.in.lambda"_s),
			$of(u"\'\'_\'\'\u304c\u8b58\u5225\u5b50\u3068\u3057\u3066\u4f7f\u7528\u3055\u308c\u3066\u3044\u307e\u3059\n(\u30e9\u30e0\u30c0\u30fb\u30d1\u30e9\u30e1\u30fc\u30bf\u3067\u306f\'\'_\'\'\u3092\u8b58\u5225\u5b50\u3068\u3057\u3066\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u7981\u6b62\u3055\u308c\u3066\u3044\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.lambda"_s),
			$of(u"\u3053\u3053\u3067\u306f\u30e9\u30e0\u30c0\u5f0f\u306f\u4e88\u671f\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.mref"_s),
			$of(u"\u3053\u3053\u3067\u306f\u30e1\u30bd\u30c3\u30c9\u53c2\u7167\u306f\u4e88\u671f\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.type"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044\u578b\n\u671f\u5f85\u5024: {0}\n\u691c\u51fa\u5024:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unmatched.quote"_s),
			$of(u"\u74b0\u5883\u5909\u6570{0}\u306e\u5f15\u7528\u7b26\u304c\u4e00\u81f4\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unnamed.pkg.not.allowed.named.modules"_s),
			$of(u"\u540d\u524d\u306e\u306a\u3044\u30d1\u30c3\u30b1\u30fc\u30b8\u306f\u540d\u524d\u4ed8\u304d\u30e2\u30b8\u30e5\u30fc\u30eb\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreachable.stmt"_s),
			$of(u"\u3053\u306e\u6587\u306b\u5236\u5fa1\u304c\u79fb\u308b\u3053\u3068\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.default.constructor"_s),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u5185\u306b\u5831\u544a\u3055\u308c\u306a\u3044\u4f8b\u5916{0}\u304c\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.implicit.close"_s),
			$of(u"\u5831\u544a\u3055\u308c\u306a\u3044\u4f8b\u5916{0}\u306f\u3001\u30b9\u30ed\u30fc\u3059\u308b\u306b\u306f\u6355\u6349\u307e\u305f\u306f\u5ba3\u8a00\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\n\u30ea\u30bd\u30fc\u30b9\u5909\u6570\'\'{1}\'\'\u3067\u306eclose()\u306e\u6697\u9ed9\u7684\u306a\u30b3\u30fc\u30eb\u304b\u3089\u4f8b\u5916\u304c\u30b9\u30ed\u30fc\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.need.to.catch.or.throw"_s),
			$of(u"\u4f8b\u5916{0}\u306f\u5831\u544a\u3055\u308c\u307e\u305b\u3093\u3002\u30b9\u30ed\u30fc\u3059\u308b\u306b\u306f\u3001\u6355\u6349\u307e\u305f\u306f\u5ba3\u8a00\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unsupported.encoding"_s),
			$of(u"\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u306a\u3044\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unsupported.release.version"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b9\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3{0}\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.already.be.assigned"_s),
			$of(u"\u5909\u6570{0}\u306f\u3059\u3067\u306b\u4ee3\u5165\u3055\u308c\u3066\u3044\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.be.assigned.in.loop"_s),
			$of(u"\u5909\u6570{0}\u306f\u30eb\u30fc\u30d7\u5185\u3067\u4ee3\u5165\u3055\u308c\u3066\u3044\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.not.have.been.initialized"_s),
			$of(u"\u5909\u6570{0}\u306f\u521d\u671f\u5316\u3055\u308c\u3066\u3044\u306a\u3044\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.not.initialized.in.default.constructor"_s),
			$of(u"\u5909\u6570{0}\u306f\u3001\u30c7\u30d5\u30a9\u30eb\u30c8\u30fb\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u3067\u521d\u671f\u5316\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.and.old.array.syntax"_s),
			$of(u"\u65e7\u5f0f\u306e\u914d\u5217\u8868\u8a18\u6cd5\u306f\u53ef\u5909\u5f15\u6570\u30d1\u30e9\u30e1\u30fc\u30bf\u3067\u306f\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.and.receiver"_s),
			$of(u"varargs\u8868\u8a18\u306f\u53d7\u53d6\u308a\u5074\u30d1\u30e9\u30e1\u30fc\u30bf\u3067\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.invalid.trustme.anno"_s),
			$of(u"{0}\u6ce8\u91c8\u304c\u7121\u52b9\u3067\u3059\u3002{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.must.be.last"_s),
			$of(u"\u53ef\u5909\u5f15\u6570\u30d1\u30e9\u30e1\u30fc\u30bf\u306f\u6700\u5f8c\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u306b\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.variable.not.allowed"_s),
			$of(u"\u5909\u6570\u306e\u5ba3\u8a00\u3092\u3053\u3053\u3067\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.void.not.allowed.here"_s),
			$of(u"\u3053\u3053\u3067\'\'void\'\'\u578b\u3092\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.warnings.and.werror"_s),
			$of(u"\u8b66\u544a\u304c\u898b\u3064\u304b\u308a-Werror\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.wrong.number.type.args"_s),
			$of(u"\u578b\u5f15\u6570\u306e\u6570\u304c\u4e0d\u6b63\u3067\u3059\u3002{0}\u500b\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.wrong.receiver"_s),
			$of(u"\u53d7\u53d6\u308a\u5074\u30d1\u30e9\u30e1\u30fc\u30bf\u306e\u540d\u524d\u304c\u9593\u9055\u3063\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.cant.throw.exception"_s),
			$of(u"throws\u53e5\u3092\u30a2\u30af\u30bb\u30b5\u30fb\u30e1\u30bd\u30c3\u30c9\u3067\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.must.not.be.generic"_s),
			$of(u"\u30a2\u30af\u30bb\u30b5\u30fb\u30e1\u30bd\u30c3\u30c9\u306f\u6c4e\u7528\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.must.not.be.static"_s),
			$of(u"\u30a2\u30af\u30bb\u30b5\u30fb\u30e1\u30bd\u30c3\u30c9\u306f\u9759\u7684\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.return.type.doesnt.match"_s),
			$of(u"\u30a2\u30af\u30bb\u30b5\u30fb\u30e1\u30bd\u30c3\u30c9{0}\u306e\u623b\u308a\u578b\u306f\u30ec\u30b3\u30fc\u30c9\u30fb\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8{1}\u306e\u30bf\u30a4\u30d7\u3068\u4e00\u81f4\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anachronistic.module.info"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30f3{0}.{1}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306b\u30e2\u30b8\u30e5\u30fc\u30eb\u5ba3\u8a00\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anonymous"_s),
			$of(u"\u533f\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anonymous.class"_s),
			$of("<anonymous {0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found"_s),
			$of(u"#{0}\u500b\u306e\u4f7f\u7528\u53ef\u80fd\u30e1\u30bd\u30c3\u30c9\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found.1"_s),
			$of(u"#{0}\u500b\u306e\u4f7f\u7528\u53ef\u80fd\u30e1\u30bd\u30c3\u30c9\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f: {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.arg.length.mismatch"_s),
			$of(u"\u5b9f\u5f15\u6570\u30ea\u30b9\u30c8\u3068\u4eee\u5f15\u6570\u30ea\u30b9\u30c8\u306e\u9577\u3055\u304c\u7570\u306a\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.file"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.file.header"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb{0}\u306f\u4e0d\u6b63\u3067\u3059\n{1}\n\u524a\u9664\u3059\u308b\u304b\u3001\u30af\u30e9\u30b9\u30d1\u30b9\u306e\u6b63\u3057\u3044\u30b5\u30d6\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306b\u3042\u308b\u304b\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.signature"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u306e\u30b7\u30b0\u30cb\u30c1\u30e3\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.entry"_s),
			$of(u"{0}\u306e\u5b9a\u6570\u30d7\u30fc\u30eb\u30fb\u30a8\u30f3\u30c8\u30ea\u304c\u4e0d\u6b63\u3067\u3059\n\u7d22\u5f15{2}\u3067\u306f{1}\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.index"_s),
			$of(u"{0}\u306e\u5b9a\u6570\u30d7\u30fc\u30eb\u7d22\u5f15\u304c\u4e0d\u6b63\u3067\u3059\n\u7d22\u5f15{1}\u304c{2}\u306e\u30d7\u30fc\u30eb\u30fb\u30b5\u30a4\u30ba\u5185\u306b\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.tag"_s),
			$of(u"\u5b9a\u6570\u30d7\u30fc\u30eb\u30fb\u30bf\u30b0{0}\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.tag.at"_s),
			$of(u"\u5b9a\u6570\u30d7\u30fc\u30eb\u30fb\u30bf\u30b0{1}\u3067\u306e{0}\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.range"_s),
			$of(u"{1}\u306e\u5b9a\u6570\u5024\'\'{0}\'\'\u306f{2}\u306e\u60f3\u5b9a\u7bc4\u56f2\u5916\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.value"_s),
			$of(u"{1}\u306e\u5b9a\u6570\u5024\'\'{0}\'\'\u306f\u4e0d\u6b63\u3067\u3059\u3002{2}\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.value.type"_s),
			$of(u"\u30bf\u30a4\u30d7\'\'{0}\'\'\u306e\u5909\u6570\u306b\u5b9a\u6570\u5024\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093\u304c\u3001\u5b9a\u6570\u5024\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.enclosing.class"_s),
			$of(u"{0}\u306e\u5185\u90e8\u30af\u30e9\u30b9\u304c\u4e0d\u6b63\u3067\u3059: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.enclosing.method"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u306e\u56f2\u3093\u3067\u3044\u308b\u30e1\u30bd\u30c3\u30c9\u5c5e\u6027\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.instance.method.in.unbound.lookup"_s),
			$of(u"\u975e\u30d0\u30a4\u30f3\u30c9\u691c\u7d22\u3067\u4e88\u671f\u3057\u306a\u3044\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9{0} {1}\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.intersection.target.for.functional.expr"_s),
			$of(u"\u30e9\u30e0\u30c0\u307e\u305f\u306f\u30e1\u30bd\u30c3\u30c9\u53c2\u7167\u306e\u4ea4\u5dee\u30bf\u30a4\u30d7\u30fb\u30bf\u30fc\u30b2\u30c3\u30c8\u304c\u4e0d\u6b63\u3067\u3059\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.module-info.name"_s),
			$of(u"\u30af\u30e9\u30b9\u540d\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.requires.flag"_s),
			$of(u"\u4e0d\u6b63\u306a\u5fc5\u9808\u30d5\u30e9\u30b0: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.runtime.invisible.param.annotations"_s),
			$of(u"RuntimeInvisibleParameterAnnotations\u5c5e\u6027\u304c\u4e0d\u6b63\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.signature"_s),
			$of(u"\u30b7\u30b0\u30cb\u30c1\u30e3{0}\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.source.file.header"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb{0}\u306f\u4e0d\u6b63\u3067\u3059\n{1}\n\u524a\u9664\u3059\u308b\u304b\u3001\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9\u306e\u6b63\u3057\u3044\u30b5\u30d6\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306b\u3042\u308b\u304b\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.static.method.in.bound.lookup"_s),
			$of(u"\u30d0\u30a4\u30f3\u30c9\u691c\u7d22\u3067\u4e88\u671f\u3057\u306a\u3044\u9759\u7684\u306a{0} {1}\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.static.method.in.unbound.lookup"_s),
			$of(u"\u975e\u30d0\u30a4\u30f3\u30c9\u691c\u7d22\u3067\u4e88\u671f\u3057\u306a\u3044\u9759\u7684\u306a{0} {1}\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.type.annotation.value"_s),
			$of(u"\u6ce8\u91c8\u30bf\u30fc\u30b2\u30c3\u30c8\u578b\u306e\u5024\u306e\u578b\u304c\u4e0d\u6b63\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.base.membership"_s),
			$of(u"\u3059\u3079\u3066\u306e\u30d9\u30fc\u30b9\u30fb\u30af\u30e9\u30b9\u304c\u30e1\u30f3\u30d0\u30fc\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical"_s),
			$of(u"\u6a19\u6e96"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.cant.have.return.statement"_s),
			$of(u"\u30b3\u30f3\u30d1\u30af\u30c8\u30fb\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306bRETURN\u6587\u3092\u542b\u3081\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.contain.explicit.constructor.invocation"_s),
			$of(u"\u6a19\u6e96\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306b\u660e\u793a\u7684\u306a\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u547c\u51fa\u3057\u3092\u542b\u3081\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.declare.type.variables"_s),
			$of(u"\u6a19\u6e96\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306f\u578b\u5909\u6570\u3092\u5ba3\u8a00\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.have.stronger.access"_s),
			$of(u"({0})\u3088\u308a\u5f37\u3044\u30a2\u30af\u30bb\u30b9\u6a29\u9650\u3092\u5272\u308a\u5f53\u3066\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.with.name.mismatch"_s),
			$of(u"\u6a19\u6e96\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u540d\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.access.inner.cls.constr"_s),
			$of(u"\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf{0}({1})\u306b\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093\n\u5185\u90e8\u30af\u30e9\u30b9\u3092\u56f2\u3080\u578b{2}\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u304c\u30b9\u30b3\u30fc\u30d7\u5185\u306b\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.diamond.1"_s),
			$of(u"{0}\u306e\u578b\u5f15\u6570\u3092\u63a8\u8ad6\u3067\u304d\u307e\u305b\u3093\n\u7406\u7531: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.symbol"_s),
			$of(u"{4} {5}\u306e{0} {1}\u306f\u6307\u5b9a\u3055\u308c\u305f\u578b\u306b\u9069\u7528\u3067\u304d\u307e\u305b\u3093\n\u671f\u5f85\u5024: {2}\n\u691c\u51fa\u5024:    {3}\n\u7406\u7531: {6}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.symbols"_s),
			$of(u"{1}\u306b\u9069\u5207\u306a{0}\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.hide"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u96a0\u3059\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.implement"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u5b9f\u88c5\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.override"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.args"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb: {0} {1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.location.args"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb:   {0} {1}({3})\n\u5834\u6240: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.location.args.params"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb\u3092\u898b\u3064\u3051\u3089\u308c\u307e\u305b\u3093\n\u30b7\u30f3\u30dc\u30eb:   {0} <{2}>{1}({3})\n\u5834\u6240: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.modules"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.captured.type"_s),
			$of("CAP#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.clashes.with"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3068\u7af6\u5408\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.file.not.found"_s),
			$of(u"{0}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.file.wrong.class"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb{0}\u306b\u4e0d\u6b63\u306a\u30af\u30e9\u30b9\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.is.not.sealed"_s),
			$of(u"{0}\u306f\u30b7\u30fc\u30eb\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.compact"_s),
			$of(u"\u30b3\u30f3\u30d1\u30af\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.conditional.target.cant.be.void"_s),
			$of(u"\u6761\u4ef6\u5f0f\u306e\u30bf\u30fc\u30b2\u30c3\u30c8\u578b\u306fvoid\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error"_s),
			$of(u"\u30a8\u30e9\u30fc{0}\u500b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error.plural"_s),
			$of(u"\u30a8\u30e9\u30fc{0}\u500b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error.recompile"_s),
			$of(u"\u5408\u8a08{1}\u500b\u306e\u3046\u3061\u3001\u6700\u521d\u306e{0}\u500b\u306e\u30a8\u30e9\u30fc\u306e\u307f\u8868\u793a\u3057\u3066\u3044\u307e\u3059\u3002\u3055\u3089\u306b\u8868\u793a\u3059\u308b\u5834\u5408\u306f\u3001-Xmaxerrs\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn"_s),
			$of(u"\u8b66\u544a{0}\u500b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn.plural"_s),
			$of(u"\u8b66\u544a{0}\u500b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn.recompile"_s),
			$of(u"\u5408\u8a08{1}\u500b\u306e\u3046\u3061\u3001\u6700\u521d\u306e{0}\u500b\u306e\u8b66\u544a\u306e\u307f\u8868\u793a\u3057\u3066\u3044\u307e\u3059\u3002\u3055\u3089\u306b\u8868\u793a\u3059\u308b\u5834\u5408\u306f\u3001-Xmaxwarns\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.descriptor"_s),
			$of(u"\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf: {2} {0}({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.descriptor.throws"_s),
			$of(u"\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf: {2} {0}({1})\u3067{3}\u304c\u30b9\u30ed\u30fc\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond"_s),
			$of("{0}<>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.and.explicit.params"_s),
			$of(u"\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306e\u660e\u793a\u7684\u306a\u578b\u30d1\u30e9\u30e1\u30fc\u30bf\u3067\u306f\'\'<>\'\'\u3092\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.anonymous.methods.implicitly.override"_s),
			$of(u"(<>\u306e\u305f\u3081\u3001\u3053\u306e\u533f\u540d\u30af\u30e9\u30b9\u306b\u5ba3\u8a00\u3055\u308c\u305f\u3059\u3079\u3066\u306e\u975eprivate\u30e1\u30bd\u30c3\u30c9\u306f\u30b9\u30fc\u30d1\u30fc\u30bf\u30a4\u30d7\u306e\u30e1\u30bd\u30c3\u30c9\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u307e\u305f\u306f\u5b9f\u88c5\u3057\u307e\u305b\u3093)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.invalid.arg"_s),
			$of(u"{1}\u306b\u3064\u3044\u3066\u63a8\u5b9a\u3055\u308c\u305f\u578b\u5f15\u6570{0}\u306f\u3053\u306e\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\n\u63a8\u8ad6\u5f15\u6570\u306f\u7f72\u540d\u5c5e\u6027\u306b\u8868\u73fe\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.invalid.args"_s),
			$of(u"{1}\u306b\u3064\u3044\u3066\u63a8\u5b9a\u3055\u308c\u305f\u578b\u5f15\u6570{0}\u306f\u3053\u306e\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\n\u63a8\u8ad6\u5f15\u6570\u306f\u7f72\u540d\u5c5e\u6027\u306b\u8868\u73fe\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.non.generic"_s),
			$of(u"\u975e\u6c4e\u7528\u30af\u30e9\u30b9{0}\u3067\'\'<>\'\'\u3092\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.doesnt.extend.sealed"_s),
			$of(u"\u30b5\u30d6\u30af\u30e9\u30b9{0}\u306f\u30b7\u30fc\u30eb\u30fb\u30af\u30e9\u30b9\u3092\u62e1\u5f35\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.eq.bounds"_s),
			$of(u"\u7b49\u4fa1\u5236\u7d04: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.exception.message"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.explicit.param.do.not.conform.to.bounds"_s),
			$of(u"\u660e\u793a\u7684\u306a\u578b\u5f15\u6570{0}\u306f\u3001\u5ba3\u8a00\u3055\u308c\u305f\u5883\u754c{1}\u306b\u9069\u5408\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.close"_s),
			$of(u"\u81f4\u547d\u7684\u30a8\u30e9\u30fc: \u30b3\u30f3\u30d1\u30a4\u30e9\u30fb\u30ea\u30bd\u30fc\u30b9\u3092\u9589\u3058\u308b\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.ctor"_s),
			$of(u"\u81f4\u547d\u7684\u30a8\u30e9\u30fc: {0}\u306e\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u3092\u691c\u51fa\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.field"_s),
			$of(u"\u81f4\u547d\u7684\u30a8\u30e9\u30fc: \u30d5\u30a3\u30fc\u30eb\u30c9{0}\u3092\u691c\u51fa\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.meth"_s),
			$of(u"\u81f4\u547d\u7684\u30a8\u30e9\u30fc: \u30e1\u30bd\u30c3\u30c9{0}\u3092\u691c\u51fa\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.no.java.lang"_s),
			$of(u"\u81f4\u547d\u7684\u30a8\u30e9\u30fc: \u30af\u30e9\u30b9\u30d1\u30b9\u307e\u305f\u306f\u30d6\u30fc\u30c8\u30fb\u30af\u30e9\u30b9\u30d1\u30b9\u3067\u30d1\u30c3\u30b1\u30fc\u30b8java.lang\u3092\u691c\u51fa\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.annotations.after.type.params"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u30fb\u30bf\u30a4\u30d7\u30fb\u30d1\u30e9\u30e1\u30fc\u30bf\u306e\u5f8c\u306e\u6ce8\u91c8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.default.methods"_s),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u30fb\u30e1\u30bd\u30c3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.diamond"_s),
			$of(u"\u30c0\u30a4\u30e4\u30e2\u30f3\u30c9\u6f14\u7b97\u5b50"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.diamond.and.anon.class"_s),
			$of(u"\u533f\u540d\u5185\u90e8\u30af\u30e9\u30b9\u3067\u306e\'\'<>\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.intersection.types.in.cast"_s),
			$of(u"intersection\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.lambda"_s),
			$of(u"\u30e9\u30e0\u30c0\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.method.references"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u53c2\u7167"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.modules"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.multiple.case.labels"_s),
			$of(u"\u8907\u6570\u306ecase\u30e9\u30d9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.not.supported.in.source"_s),
			$of(u"{0}\u306f-source {1}\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\n({0}\u3092\u6709\u52b9\u306b\u3059\u308b\u306b\u306f-source {2}\u4ee5\u4e0a\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.not.supported.in.source.plural"_s),
			$of(u"{0}\u306f-source {1}\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\n({0}\u3092\u6709\u52b9\u306b\u3059\u308b\u306b\u306f-source {2}\u4ee5\u4e0a\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.pattern.matching.instanceof"_s),
			$of(u"instanceof\u3067\u306e\u30d1\u30bf\u30fc\u30f3\u306e\u4e00\u81f4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.private.intf.methods"_s),
			$of(u"private\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u30fb\u30e1\u30bd\u30c3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.records"_s),
			$of(u"\u30ec\u30b3\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.reifiable.types.instanceof"_s),
			$of(u"instanceof\u3067\u306ereifiable\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.repeatable.annotations"_s),
			$of(u"\u7e70\u8fd4\u3057\u6ce8\u91c8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.sealed.classes"_s),
			$of(u"\u30b7\u30fc\u30eb\u30fb\u30af\u30e9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.static.intf.method.invoke"_s),
			$of(u"static\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u30fb\u30e1\u30bd\u30c3\u30c9\u547c\u51fa\u3057"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.static.intf.methods"_s),
			$of(u"static\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u30fb\u30e1\u30bd\u30c3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.switch.expressions"_s),
			$of(u"switch\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.switch.rules"_s),
			$of(u"switch\u30eb\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.text.blocks"_s),
			$of(u"\u30c6\u30ad\u30b9\u30c8\u30fb\u30d6\u30ed\u30c3\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.type.annotations"_s),
			$of(u"\u30bf\u30a4\u30d7\u6ce8\u91c8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.var.in.try.with.resources"_s),
			$of(u"try-with-resources\u5185\u306e\u5909\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.var.syntax.in.implicit.lambda"_s),
			$of(u"\u6697\u9ed9\u30e9\u30e0\u30c0\u306evar\u69cb\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.does.not.contain.module"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306b\u30e2\u30b8\u30e5\u30fc\u30eb\u5ba3\u8a00\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.does.not.contain.package"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306b\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.doesnt.contain.class"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306b\u30af\u30e9\u30b9{0}\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.illegal.signature"_s),
			$of(u"\u578b{1}\u306e\u7f72\u540d\u5c5e\u6027\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.illegal.start.of.class.file"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u958b\u59cb\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.implicit.and.explicit.not.allowed"_s),
			$of(u"\u6697\u9ed9\u7684\u306b\u578b\u6307\u5b9a\u3055\u308c\u305f\u30d1\u30e9\u30e1\u30fc\u30bf\u3068\u660e\u793a\u7684\u306b\u578b\u6307\u5b9a\u3055\u308c\u305f\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u7d44\u307f\u5408\u305b\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inaccessible.varargs.type"_s),
			$of(u"\u4eee\u53ef\u5909\u5f15\u6570\u8981\u7d20\u578b{0}\u306f{1} {2}\u304b\u3089\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inapplicable.method"_s),
			$of(u"{0} {1}.{2}\u306f\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.abstract.default"_s),
			$of(u"{0} {1}\u306f\u578b{4}\u3068{5}\u304b\u3089{2}({3})\u306e\u62bd\u8c61\u3068\u30c7\u30d5\u30a9\u30eb\u30c8\u3092\u7d99\u627f\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.abstracts"_s),
			$of(u"{0} {1}\u3067\u8907\u6570\u306e\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u306a\u3044\u62bd\u8c61\u30e1\u30bd\u30c3\u30c9\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.arg.types.in.lambda"_s),
			$of(u"\u30e9\u30e0\u30c0\u5f0f\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u578b\u306f\u4e0d\u9069\u5408\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.arg.types.in.mref"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u53c2\u7167\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u578b\u306f\u4e0d\u9069\u5408\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.bounds"_s),
			$of(u"\u63a8\u8ad6\u5909\u6570{0}\u306b\u306f\u3001\u4e0d\u9069\u5408\u306a\u5883\u754c\u304c\u3042\u308a\u307e\u3059\n{1}\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.descs.in.functional.intf"_s),
			$of(u"{0} {1}\u3067\u4e0d\u9069\u5408\u306a\u6a5f\u80fd\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.diff.ret"_s),
			$of(u"\u4e21\u65b9\u3068\u3082{0}({1})\u3092\u5b9a\u7fa9\u3057\u3066\u3044\u307e\u3059\u304c\u3001\u623b\u308a\u5024\u306e\u578b\u304c\u7121\u95a2\u4fc2\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.eq.bounds"_s),
			$of(u"\u63a8\u8ad6\u5909\u6570{0}\u306b\u306f\u3001\u4e0d\u9069\u5408\u306a\u7b49\u4fa1\u5236\u7d04{1}\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.ret.type.in.lambda"_s),
			$of(u"\u30e9\u30e0\u30c0\u5f0f\u306e\u623b\u308a\u578b\u304c\u4e0d\u6b63\u3067\u3059\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.ret.type.in.mref"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u53c2\u7167\u306e\u623b\u308a\u578b\u304c\u4e0d\u6b63\u3067\u3059\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.type.in.conditional"_s),
			$of(u"\u6761\u4ef6\u5f0f\u306e\u578b\u304c\u4e0d\u6b63\u3067\u3059\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.type.in.switch.expression"_s),
			$of(u"switch\u5f0f\u306e\u578b\u304c\u4e0d\u6b63\u3067\u3059\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.unrelated.defaults"_s),
			$of(u"{0} {1}\u306f\u578b{4}\u3068{5}\u304b\u3089{2}({3})\u306e\u95a2\u9023\u3057\u306a\u3044\u30c7\u30d5\u30a9\u30eb\u30c8\u3092\u7d99\u627f\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.upper.bounds"_s),
			$of(u"\u63a8\u6e2c\u306e\u5909\u6570{0}\u306b\u306f\u3001\u9069\u5408\u3057\u306a\u3044\u4e0a\u9650{1}\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inconvertible.types"_s),
			$of(u"{0}\u3092{1}\u306b\u5909\u63db\u3067\u304d\u307e\u305b\u3093:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.arg.length.mismatch"_s),
			$of(u"\u578b\u5909\u6570{0}\u3092\u63a8\u8ad6\u3067\u304d\u307e\u305b\u3093\n(\u5b9f\u5f15\u6570\u30ea\u30b9\u30c8\u3068\u4eee\u5f15\u6570\u30ea\u30b9\u30c8\u306e\u9577\u3055\u304c\u7570\u306a\u308a\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.no.conforming.assignment.exists"_s),
			$of(u"\u578b\u5909\u6570{0}\u3092\u63a8\u8ad6\u3067\u304d\u307e\u305b\u3093\n(\u5f15\u6570\u306e\u4e0d\u4e00\u81f4: {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.no.conforming.instance.exists"_s),
			$of(u"\u578b\u5909\u6570{0}\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u304c\u5b58\u5728\u3057\u306a\u3044\u306e\u3067\u3001{1}\u306f{2}\u306b\u9069\u5408\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.varargs.argument.mismatch"_s),
			$of(u"\u578b\u5909\u6570{0}\u3092\u63a8\u8ad6\u3067\u304d\u307e\u305b\u3093\n(\u53ef\u5909\u5f15\u6570\u306e\u4e0d\u4e00\u81f4: {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.eq.bounds"_s),
			$of(u"\u63a8\u8ad6\u578b\u304c\u7b49\u4fa1\u5236\u7d04\u306b\u9069\u5408\u3057\u307e\u305b\u3093\n\u63a8\u8ad6: {0}\n\u7b49\u4fa1\u5236\u7d04: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.lower.bounds"_s),
			$of(u"\u63a8\u8ad6\u578b\u304c\u4e0b\u9650\u306b\u9069\u5408\u3057\u307e\u305b\u3093\n\u63a8\u8ad6: {0}\n\u4e0b\u9650: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.upper.bounds"_s),
			$of(u"\u63a8\u8ad6\u578b\u304c\u4e0a\u9650\u306b\u9069\u5408\u3057\u307e\u305b\u3093\n\u63a8\u8ad6: {0}\n\u4e0a\u9650: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inner.cls"_s),
			$of(u"\u5185\u90e8\u30af\u30e9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.intersection.type"_s),
			$of("INT#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.default.interface"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30f3{0}.{1}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306b\u30c7\u30d5\u30a9\u30eb\u30c8\u30fb\u30e1\u30bd\u30c3\u30c9\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.generic.lambda.target"_s),
			$of(u"\u30e9\u30e0\u30c0\u5f0f\u306e\u6a5f\u80fd\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u304c\u7121\u52b9\u3067\u3059\n{1} {2}\u306e\u30e1\u30bd\u30c3\u30c9{0}\u306f\u6c4e\u7528\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.mref"_s),
			$of(u"{0}\u53c2\u7167\u304c\u7121\u52b9\u3067\u3059\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.static.interface"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30f3{0}.{1}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306bstatic\u30e1\u30bd\u30c3\u30c9\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.is.a.type.variable"_s),
			$of(u"\u578b\u5909\u6570\u3092\u542b\u3081\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.is.duplicated"_s),
			$of(u"\u91cd\u8907\u3092\u542b\u3081\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.annotation"_s),
			$of("@interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.class"_s),
			$of(u"\u30af\u30e9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.constructor"_s),
			$of(u"\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.enum"_s),
			$of(u"\u5217\u6319"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.instance.init"_s),
			$of(u"\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u521d\u671f\u5316\u5b50"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.interface"_s),
			$of(u"\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.method"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.package"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.record"_s),
			$of(u"\u30ec\u30b3\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.record.component"_s),
			$of(u"\u30ec\u30b3\u30fc\u30c9\u30fb\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.static"_s),
			$of("static"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.static.init"_s),
			$of(u"static\u521d\u671f\u5316\u5b50"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.type.variable"_s),
			$of(u"\u578b\u5909\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.type.variable.bound"_s),
			$of(u"\u578b\u5909\u6570\u306e\u5883\u754c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.value"_s),
			$of(u"\u5024"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.variable"_s),
			$of(u"\u5909\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.lambda"_s),
			$of(u"\u30e9\u30e0\u30c0\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local"_s),
			$of(u"\u30ed\u30fc\u30ab\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.array.missing.target"_s),
			$of(u"\u914d\u5217\u521d\u671f\u5316\u5b50\u306b\u306f\u660e\u793a\u7684\u306a\u30bf\u30fc\u30b2\u30c3\u30c8\u578b\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.cant.infer.null"_s),
			$of(u"\u5909\u6570\u521d\u671f\u5316\u5b50\u306f\'\'null\'\'\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.cant.infer.void"_s),
			$of(u"\u5909\u6570\u521d\u671f\u5316\u5b50\u306f\'\'void\'\'\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.lambda.missing.target"_s),
			$of(u"\u30e9\u30e0\u30c0\u5f0f\u306b\u306f\u660e\u793a\u7684\u306a\u30bf\u30fc\u30b2\u30c3\u30c8\u578b\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.missing.init"_s),
			$of(u"\u521d\u671f\u5316\u5b50\u306a\u3057\u3067\u5909\u6570\u306b\'\'var\'\'\u3092\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.mref.missing.target"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u53c2\u7167\u306b\u306f\u660e\u793a\u7684\u306a\u30bf\u30fc\u30b2\u30c3\u30c8\u578b\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.self.ref"_s),
			$of(u"\u81ea\u5df1\u53c2\u7167\u5909\u6570\u306b\'\'var\'\'\u3092\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.location"_s),
			$of("{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.location.1"_s),
			$of(u"\u30bf\u30a4\u30d7{2}\u306e{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.module_path"_s),
			$of(u"\u30a2\u30d7\u30ea\u30b1\u30fc\u30b7\u30e7\u30f3\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30d1\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.module_source_path"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.system_modules"_s),
			$of(u"\u30b7\u30b9\u30c6\u30e0\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.upgrade_module_path"_s),
			$of(u"\u30a2\u30c3\u30d7\u30b0\u30ec\u30fc\u30c9\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30d1\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.lower.bounds"_s),
			$of(u"\u4e0b\u9650: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.malformed.vararg.method"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306b\u4e0d\u6b63\u306a\u53ef\u5909\u5f15\u6570\u30e1\u30bd\u30c3\u30c9\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.method.descriptor.invalid"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u304c{0}\u306b\u5bfe\u3057\u3066\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.method.must.be.public"_s),
			$of(u"\u30a2\u30af\u30bb\u30b5\u30fb\u30e1\u30bd\u30c3\u30c9\u306fpublic\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.missing.ret.val"_s),
			$of(u"\u623b\u308a\u5024\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.info.definition.expected"_s),
			$of(u"module-info\u5b9a\u7fa9\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.info.invalid.super.class"_s),
			$of(u"\u7121\u52b9\u306a\u30b9\u30fc\u30d1\u30fc\u30fb\u30af\u30e9\u30b9\u3092\u542b\u3080module-info"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.name.mismatch"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u540d{0}\u306f\u5fc5\u8981\u306a\u540d\u524d{1}\u3068\u4e00\u81f4\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.non.zero.opens"_s),
			$of(u"\u30aa\u30fc\u30d7\u30f3\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306f\u30bc\u30ed\u3067\u306a\u3044opens_count\u3092\u6301\u3061\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.mref.infer.and.explicit.params"_s),
			$of(u"\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306e\u660e\u793a\u7684\u306a\u578b\u30d1\u30e9\u30e1\u30fc\u30bf\u3067\u306fraw\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u53c2\u7167\u3092\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.must.not.be.same.class"_s),
			$of(u"permits\u53e5\u306e\u81ea\u5df1\u53c2\u7167\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.must.not.be.supertype"_s),
			$of(u"\u30b9\u30fc\u30d1\u30fc\u30bf\u30a4\u30d7{0}\u3078\u306e\u53c2\u7167\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.abstracts"_s),
			$of(u"{0} {1}\u3067\u62bd\u8c61\u30e1\u30bd\u30c3\u30c9\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.args"_s),
			$of(u"\u5f15\u6570\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.conforming.assignment.exists"_s),
			$of(u"\u5f15\u6570\u306e\u4e0d\u4e00\u81f4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.suitable.functional.intf.inst"_s),
			$of(u"{0}\u306e\u6a5f\u80fd\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u3092\u63a8\u8ad6\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.unique.maximal.instance.exists"_s),
			$of(u"\u578b\u5909\u6570{0}(\u4e0a\u9650{1})\u306e\u56fa\u6709\u306e\u6700\u5927\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u304c\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.unique.minimal.instance.exists"_s),
			$of(u"\u578b\u5909\u6570{0}(\u4e0b\u9650{1})\u306e\u56fa\u6709\u306e\u6700\u5c0f\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u304c\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.a.functional.intf"_s),
			$of(u"{0}\u306f\u6a5f\u80fd\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.a.functional.intf.1"_s),
			$of(u"{0}\u306f\u6a5f\u80fd\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.an.intf.component"_s),
			$of(u"\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8\u30fb\u30bf\u30a4\u30d7{0}\u306f\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.applicable.method.found"_s),
			$of(u"#{0}\u500b\u306e\u4f7f\u7528\u3067\u304d\u306a\u3044\u30e1\u30bd\u30c3\u30c9\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f: {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.class.intf.cant.access"_s),
			$of(u"{1}.{0}\u306f\u30a2\u30af\u30bb\u30b9\u3067\u304d\u306a\u3044\u30af\u30e9\u30b9\u307e\u305f\u306f\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u306b\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.class.intf.cant.access.reason"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{2}\u306e{1}.{0}\u306b\u306f\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{1}\u306f\u30e2\u30b8\u30e5\u30fc\u30eb{2}\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059\u304c\u3001\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306b\u8aad\u307f\u8fbc\u307e\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read.from.unnamed"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u30e2\u30b8\u30e5\u30fc\u30eb{1}\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059\u304c\u3001\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30b0\u30e9\u30d5\u306b\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read.unnamed"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u540d\u524d\u306e\u306a\u3044\u30e2\u30b8\u30e5\u30fc\u30eb\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059\u304c\u3001\u30e2\u30b8\u30e5\u30fc\u30eb{1}\u306b\u8aad\u307f\u8fbc\u307e\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u30e2\u30b8\u30e5\u30fc\u30eb{1}\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059\u304c\u3001\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.from.unnamed"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u30e2\u30b8\u30e5\u30fc\u30eb{1}\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059\u304c\u3001\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.to.module"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u30e2\u30b8\u30e5\u30fc\u30eb{1}\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059\u304c\u3001\u30e2\u30b8\u30e5\u30fc\u30eb{2}\u306b\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.to.module.from.unnamed"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u30e2\u30b8\u30e5\u30fc\u30eb{1}\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u3059\u304c\u3001\u540d\u524d\u306e\u306a\u3044\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.package.cant.access"_s),
			$of(u"{0} \u306f\u8868\u793a\u4e0d\u53ef\u3067\u3059\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.public.cant.access"_s),
			$of(u"{1}\u306e{0}\u306fpublic\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002\u30d1\u30c3\u30b1\u30fc\u30b8\u5916\u304b\u3089\u306f\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.overridden.default"_s),
			$of(u"{1}\u306e\u30e1\u30bd\u30c3\u30c9{0}\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.package.not.visible"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u8868\u793a\u4e0d\u53ef\u3067\u3059\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.partial.inst.sig"_s),
			$of(u"\u90e8\u5206\u7684\u306b\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u5316\u3055\u308c\u307e\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.possible.loss.of.precision"_s),
			$of(u"\u7cbe\u5ea6\u304c\u5931\u308f\u308c\u308b\u53ef\u80fd\u6027\u304c\u3042\u308b{0}\u304b\u3089{1}\u3078\u306e\u5909\u63db"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.prob.found.req"_s),
			$of(u"\u4e0d\u9069\u5408\u306a\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.redundant.supertype"_s),
			$of(u"\u5197\u9577\u306a\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9{0}\u306f{1}\u306b\u3088\u3063\u3066\u62e1\u5f35\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.ref.ambiguous"_s),
			$of(u"{0}\u306e\u53c2\u7167\u306f\u3042\u3044\u307e\u3044\u3067\u3059\n{3}\u306e{1} {2}\u3068{6}\u306e{4} {5}\u306e\u4e21\u65b9\u304c\u4e00\u81f4\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.report.access"_s),
			$of(u"{0}\u306f{2}\u3067{1}\u30a2\u30af\u30bb\u30b9\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.resume.abort"_s),
			$of(u"R)\u518d\u958b,A)\u4e2d\u6b62>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.source.unavailable"_s),
			$of(u"(\u30bd\u30fc\u30b9\u304c\u5229\u7528\u4e0d\u53ef)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.stat.expr.expected"_s),
			$of(u"\u30e9\u30e0\u30c0\u30fb\u30dc\u30c7\u30a3\u304cvoid\u6a5f\u80fd\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u3068\u4e92\u63db\u6027\u304c\u3042\u308a\u307e\u305b\u3093\n(\u30d6\u30ed\u30c3\u30af\u306e\u30e9\u30e0\u30c0\u30fb\u30dc\u30c7\u30a3\u306e\u4f7f\u7528\u3092\u691c\u8a0e\u3059\u308b\u304b\u3001\u304b\u308f\u308a\u306b\u6587\u306e\u5f0f\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.static.mref.with.targs"_s),
			$of(u"static\u30e1\u30bd\u30c3\u30c9\u53c2\u7167\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u5316\u3055\u308c\u305f\u4fee\u98fe\u5b50"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.switch.expression.target.cant.be.void"_s),
			$of(u"switch\u5f0f\u306e\u30bf\u30fc\u30b2\u30c3\u30c8\u578b\u306fvoid\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.synthetic.name.conflict"_s),
			$of(u"\u30b7\u30f3\u30dc\u30eb{0}\u304c\u3001{1}\u3067\u30b3\u30f3\u30d1\u30a4\u30e9\u304c\u5408\u6210\u3057\u305f\u30b7\u30f3\u30dc\u30eb\u3068\u7af6\u5408\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.throws.clause.not.allowed.for.canonical.constructor"_s),
			$of(u"throws\u53e5\u306f{0}\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.bad-symbol"_s),
			$of("<bad symbol>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.character"_s),
			$of("<character>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.double"_s),
			$of("<double>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.end-of-input"_s),
			$of("<end of input>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.float"_s),
			$of("<float>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.identifier"_s),
			$of("<identifier>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.integer"_s),
			$of("<integer>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.long-integer"_s),
			$of("<long integer>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.string"_s),
			$of("<string>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.try.not.applicable.to.type"_s),
			$of(u"try-with-resource\u306f\u5909\u6570\u578b\u306b\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.captureof"_s),
			$of(u"{1}\u306e\u30ad\u30e3\u30d7\u30c1\u30e3#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.captureof.1"_s),
			$of(u"\u30ad\u30e3\u30d7\u30c1\u30e3#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.must.be.identical.to.corresponding.record.component.type"_s),
			$of(u"\u578b\u3068\u5f15\u6570\u306e\u6570\u306f\u5bfe\u5fdc\u3059\u308b\u30ec\u30b3\u30fc\u30c9\u30fb\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8\u306e\u3082\u306e\u3068\u4e00\u81f4\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.none"_s),
			$of("<none>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.null"_s),
			$of("<null>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.parameter"_s),
			$of(u"\u578b\u30d1\u30e9\u30e1\u30fc\u30bf{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.array.or.iterable"_s),
			$of(u"\u914d\u5217\u307e\u305f\u306fjava.lang.Iterable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.class"_s),
			$of(u"\u30af\u30e9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.class.array"_s),
			$of(u"\u30af\u30e9\u30b9\u307e\u305f\u306f\u914d\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.exact"_s),
			$of(u"\u5883\u754c\u306e\u306a\u3044\u30af\u30e9\u30b9\u307e\u305f\u306f\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.ref"_s),
			$of(u"\u53c2\u7167"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.var"_s),
			$of("{0}#{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unable.to.access.file"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb{0}\u306b\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.assign"_s),
			$of(u"\u7121\u691c\u67fb\u5909\u63db"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.cast.to.type"_s),
			$of(u"\u7121\u691c\u67fb\u30ad\u30e3\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.clash.with"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.implement"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u5b9f\u88c5\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.override"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.undecl.type.var"_s),
			$of(u"\u578b\u5909\u6570{0}\u306f\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unexpected.const.pool.tag.at"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044\u5b9a\u6570\u30d7\u30fc\u30eb\u30fb\u30bf\u30b0: {0}\u304c{1}\u306b\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unexpected.ret.val"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044\u623b\u308a\u5024"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unicode.str.not.supported"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u5185\u306eUnicode\u6587\u5b57\u5217\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unnamed.module"_s),
			$of(u"\u540d\u524d\u306e\u306a\u3044\u30e2\u30b8\u30e5\u30fc\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unnamed.package"_s),
			$of(u"\u540d\u524d\u306e\u306a\u3044\u30d1\u30c3\u30b1\u30fc\u30b8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.upper.bounds"_s),
			$of(u"\u4e0b\u9650: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.user.selected.completion.failure"_s),
			$of(u"\u30af\u30e9\u30b9\u540d\u306b\u3088\u308b\u30e6\u30fc\u30b6\u30fc\u9078\u629e\u306e\u5b8c\u4e86\u306b\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.var.and.explicit.not.allowed"_s),
			$of(u"\'\'var\'\'\u3068\u660e\u793a\u7684\u306b\u578b\u6307\u5b9a\u3055\u308c\u305f\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u7d44\u307f\u5408\u305b\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.var.and.implicit.not.allowed"_s),
			$of(u"\'\'var\'\'\u3068\u6697\u9ed9\u7684\u306b\u578b\u6307\u5b9a\u3055\u308c\u305f\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u7d44\u307f\u5408\u305b\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.argument.mismatch"_s),
			$of(u"\u53ef\u5909\u5f15\u6570\u306e\u4e0d\u4e00\u81f4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.clash.with"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.implement"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u5b9f\u88c5\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.override"_s),
			$of(u"{1}\u306e{0}\u306f{3}\u306e{2}\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.non.varargs.accessor"_s),
			$of(u"\u30a2\u30af\u30bb\u30b5{0}\u306f\u53ef\u5909\u5f15\u6570\u30e1\u30bd\u30c3\u30c9\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.non.varargs.meth"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9{0}\u306f\u53ef\u5909\u5f15\u6570\u30e1\u30bd\u30c3\u30c9\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.reifiable.varargs"_s),
			$of(u"\u53ef\u5909\u5f15\u6570\u8981\u7d20\u578b{0}\u306freifiable\u578b\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.virtual.varargs"_s),
			$of(u"\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u30fb\u30e1\u30bd\u30c3\u30c9{0}\u306ffinal\u3067\u3082private\u3067\u3082\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.virtual.varargs.final.only"_s),
			$of(u"\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u30fb\u30e1\u30bd\u30c3\u30c9{0}\u306ffinal\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.checking.attribution"_s),
			$of(u"[{0}\u3092\u78ba\u8a8d\u4e2d]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.classpath"_s),
			$of(u"[\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u691c\u7d22\u30d1\u30b9: {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.loading"_s),
			$of(u"[{0}\u3092\u8aad\u8fbc\u307f\u4e2d]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.parsing.done"_s),
			$of(u"[{0}\u30df\u30ea\u79d2\u3067\u69cb\u6587\u89e3\u6790\u5b8c\u4e86]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.parsing.started"_s),
			$of(u"[{0}\u3092\u69cb\u6587\u89e3\u6790\u958b\u59cb]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.sourcepath"_s),
			$of(u"[\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u691c\u7d22\u30d1\u30b9: {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.total"_s),
			$of(u"[\u5408\u8a08{0}\u30df\u30ea\u79d2]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.wrote.file"_s),
			$of(u"[{0}\u3092\u66f8\u8fbc\u307f\u5b8c\u4e86]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.version.not.available"_s),
			$of(u"(\u30d0\u30fc\u30b8\u30e7\u30f3\u60c5\u5831\u304c\u3042\u308a\u307e\u305b\u3093)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.captured"_s),
			$of(u"{3}\u306e\u30ad\u30e3\u30d7\u30c1\u30e3\u304b\u3089\u306e{0} extends {1} super: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.captured.1"_s),
			$of(u"{3}\u306e\u30ad\u30e3\u30d7\u30c1\u30e3\u304b\u3089\u306e{0} extends {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.captured"_s),
			$of(u"{0}\u304c\u65b0\u3057\u3044\u578b\u5909\u6570\u306e\u5834\u5408:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.captured.1"_s),
			$of(u"{0}\u304c\u65b0\u3057\u3044\u578b\u5909\u6570\u306e\u5834\u5408:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.intersection"_s),
			$of(u"{0}\u304cintersection\u578b\u306e\u5834\u5408:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.intersection.1"_s),
			$of(u"{0}\u304cintersection\u578b\u306e\u5834\u5408:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.typevar"_s),
			$of(u"{0}\u304c\u578b\u5909\u6570\u306e\u5834\u5408:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.typevar.1"_s),
			$of(u"{0}\u304c\u578b\u5909\u6570\u306e\u5834\u5408:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.fresh.typevar"_s),
			$of(u"{0}\u306f{1}\u3092\u62e1\u5f35\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.intersection"_s),
			$of("{0} extends {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.typevar"_s),
			$of(u"{2} {3}\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u308b{0} extends {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.typevar.1"_s),
			$of(u"{2} {3}\u3067\u5ba3\u8a00\u3055\u308c\u305f{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.wrong.number.type.args"_s),
			$of(u"\u578b\u5f15\u6570\u306e\u6570\u304c\u4e0d\u6b63\u3067\u3059\u3002{0}\u500b\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.wrong.version"_s),
			$of(u"\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u30d0\u30fc\u30b8\u30e7\u30f3{0}.{1}\u306f\u4e0d\u6b63\u3067\u3059\u3002{2}.{3}\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.x.print.processor.info"_s),
			$of(u"\u30d7\u30ed\u30bb\u30c3\u30b5{0}\u306f{1}\u306b\u4e00\u81f4\u3057\u3001{2}\u3092\u8fd4\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.x.print.rounds"_s),
			$of(u"\u5f80\u5fa9{0}:\n\t\u5165\u529b\u30d5\u30a1\u30a4\u30eb: {1}\n\t\u6ce8\u91c8: {2}\n\t\u6700\u5f8c\u306e\u5f80\u5fa9: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.compressed.diags"_s),
			$of(u"\u4e00\u90e8\u306e\u30e1\u30c3\u30bb\u30fc\u30b8\u306f\u7c21\u7565\u5316\u3055\u308c\u3066\u3044\u307e\u3059\u3002-Xdiags:verbose\u3067\u518d\u30b3\u30f3\u30d1\u30a4\u30eb\u3057\u3066\u5b8c\u5168\u306a\u51fa\u529b\u3092\u53d6\u5f97\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deferred.method.inst"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9{0}\u306e\u9045\u5ef6\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u5316\n\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u5316\u3055\u308c\u305f\u30b7\u30b0\u30cd\u30c1\u30e3: {1}\n\u30bf\u30fc\u30b2\u30c3\u30c8\u578b: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.filename"_s),
			$of(u"{0}\u306f\u63a8\u5968\u3055\u308c\u306a\u3044API\u3092\u4f7f\u7528\u307e\u305f\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.filename.additional"_s),
			$of(u"{0}\u306b\u63a8\u5968\u3055\u308c\u306a\u3044API\u306e\u8ffd\u52a0\u4f7f\u7528\u307e\u305f\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.plural"_s),
			$of(u"\u4e00\u90e8\u306e\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306f\u63a8\u5968\u3055\u308c\u306a\u3044API\u3092\u4f7f\u7528\u307e\u305f\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.plural.additional"_s),
			$of(u"\u4e00\u90e8\u306e\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306f\u63a8\u5968\u3055\u308c\u306a\u3044API\u3092\u8ffd\u52a0\u4f7f\u7528\u307e\u305f\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.recompile"_s),
			$of(u"\u8a73\u7d30\u306f\u3001-Xlint:deprecation\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u6307\u5b9a\u3057\u3066\u518d\u30b3\u30f3\u30d1\u30a4\u30eb\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.lambda.stat"_s),
			$of(u"\u30e9\u30e0\u30c0\u5f0f\u3092\u5909\u63db\u3057\u3066\u3044\u307e\u3059\n\u4ee3\u66ffmetafactory = {0}\n\u5408\u6210\u30e1\u30bd\u30c3\u30c9 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.mref.stat"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u53c2\u7167\u3092\u5909\u63db\u3057\u3066\u3044\u307e\u3059\n\u4ee3\u66ffmetafactory = {0}\n"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.mref.stat.1"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u53c2\u7167\u3092\u5909\u63db\u3057\u3066\u3044\u307e\u3059\n\u4ee3\u66ffmetafactory = {0}\n\u30d6\u30ea\u30c3\u30b8\u30fb\u30e1\u30bd\u30c3\u30c9 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.multiple.elements"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\'\'{2}\'\'\u306b\'\'{1}\u3068\u3044\u3046\u540d\u524d\u306e\u8907\u6570\u306e\u8981\u7d20\u304cjavax.lang.model.util.Elements.{0}\u306b\u3088\u3063\u3066\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.note"_s),
			$of(u"\u30ce\u30fc\u30c8:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.filename"_s),
			$of(u"{0}\u306f\u30d7\u30ec\u30d3\u30e5\u30fc\u8a00\u8a9e\u6a5f\u80fd\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.filename.additional"_s),
			$of(u"{0}\u306f\u8ffd\u52a0\u3067\u30d7\u30ec\u30d3\u30e5\u30fc\u8a00\u8a9e\u6a5f\u80fd\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.plural"_s),
			$of(u"\u4e00\u90e8\u306e\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306f\u30d7\u30ec\u30d3\u30e5\u30fc\u8a00\u8a9e\u6a5f\u80fd\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.plural.additional"_s),
			$of(u"\u4e00\u90e8\u306e\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306f\u8ffd\u52a0\u3067\u30d7\u30ec\u30d3\u30e5\u30fc\u8a00\u8a9e\u6a5f\u80fd\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.recompile"_s),
			$of(u"\u8a73\u7d30\u306f\u3001-Xlint:preview\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u6307\u5b9a\u3057\u3066\u518d\u30b3\u30f3\u30d1\u30a4\u30eb\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.filename"_s),
			$of(u"{0}\u306f\u3001\u524a\u9664\u7528\u306b\u30de\u30fc\u30af\u3055\u308c\u305f\u63a8\u5968\u3055\u308c\u306a\u3044API\u3092\u4f7f\u7528\u307e\u305f\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.filename.additional"_s),
			$of(u"{0}\u306b\u3001\u524a\u9664\u7528\u306b\u30de\u30fc\u30af\u3055\u308c\u305f\u63a8\u5968\u3055\u308c\u306a\u3044API\u306e\u8ffd\u52a0\u4f7f\u7528\u307e\u305f\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.plural"_s),
			$of(u"\u4e00\u90e8\u306e\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306f\u3001\u524a\u9664\u7528\u306b\u30de\u30fc\u30af\u3055\u308c\u305f\u63a8\u5968\u3055\u308c\u306a\u3044API\u3092\u4f7f\u7528\u307e\u305f\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.plural.additional"_s),
			$of(u"\u4e00\u90e8\u306e\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306f\u3001\u524a\u9664\u7528\u306b\u30de\u30fc\u30af\u3055\u308c\u305f\u63a8\u5968\u3055\u308c\u306a\u3044API\u3092\u8ffd\u52a0\u4f7f\u7528\u307e\u305f\u306f\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.recompile"_s),
			$of(u"\u8a73\u7d30\u306f\u3001-Xlint:removal\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u6307\u5b9a\u3057\u3066\u518d\u30b3\u30f3\u30d1\u30a4\u30eb\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.filename"_s),
			$of(u"{0}\u306e\u64cd\u4f5c\u306f\u3001\u672a\u30c1\u30a7\u30c3\u30af\u307e\u305f\u306f\u5b89\u5168\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.filename.additional"_s),
			$of(u"{0}\u306b\u672a\u30c1\u30a7\u30c3\u30af\u307e\u305f\u306f\u5b89\u5168\u3067\u306f\u306a\u3044\u64cd\u4f5c\u304c\u3055\u3089\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.plural"_s),
			$of(u"\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306e\u64cd\u4f5c\u306e\u3046\u3061\u3001\u672a\u30c1\u30a7\u30c3\u30af\u307e\u305f\u306f\u5b89\u5168\u3067\u306f\u306a\u3044\u3082\u306e\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.plural.additional"_s),
			$of(u"\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306e\u64cd\u4f5c\u306e\u3046\u3061\u3001\u672a\u30c1\u30a7\u30c3\u30af\u307e\u305f\u306f\u5b89\u5168\u3067\u306f\u306a\u3044\u3082\u306e\u304c\u3055\u3089\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.recompile"_s),
			$of(u"\u8a73\u7d30\u306f\u3001-Xlint:unchecked\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u6307\u5b9a\u3057\u3066\u518d\u30b3\u30f3\u30d1\u30a4\u30eb\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.l2m.deduplicate"_s),
			$of(u"\u91cd\u8907\u9664\u5916\u30e9\u30e0\u30c0\u5b9f\u88c5\u30e1\u30bd\u30c3\u30c9{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.resolve.multi"_s),
			$of(u"\u578b{1}\u306e\u30e1\u30bd\u30c3\u30c9{0}\u3092\u5019\u88dc{2}\u306b\u89e3\u6c7a\u3057\u3066\u3044\u307e\u3059\n\u30d5\u30a7\u30fc\u30ba: {3}\n\u5b9f\u969b\u306e\u578b: {4}\n\u578b\u5f15\u6570: {5}\n\u5019\u88dc:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.resolve.multi.1"_s),
			$of(u"\u578b{1}\u306e\u30e1\u30bd\u30c3\u30c9{0}\u306e\u89e3\u6c7a\u306b\u30a8\u30e9\u30fc\u304c\u3042\u308a\u307e\u3059\n\u30d5\u30a7\u30fc\u30ba: {3}\n\u5b9f\u969b\u306e\u578b: {4}\n\u578b\u5f15\u6570: {5}\n\u5019\u88dc:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.access.to.member.from.serializable.element"_s),
			$of(u"\u76f4\u5217\u5316\u53ef\u80fd\u8981\u7d20\u304b\u3089\u30e1\u30f3\u30d0\u30fc{0}\u3078\u306e\u30a2\u30af\u30bb\u30b9\u306f\u3001\u4fe1\u983c\u3067\u304d\u306a\u3044\u30b3\u30fc\u30c9\u304b\u3089\u30d1\u30d6\u30ea\u30c3\u30af\u306b\u30a2\u30af\u30bb\u30b9\u53ef\u80fd\u3067\u3042\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.access.to.member.from.serializable.lambda"_s),
			$of(u"\u76f4\u5217\u5316\u53ef\u80fd\u30e9\u30e0\u30c0\u304b\u3089\u30e1\u30f3\u30d0\u30fc{0}\u3078\u306e\u30a2\u30af\u30bb\u30b9\u306f\u3001\u4fe1\u983c\u3067\u304d\u306a\u3044\u30b3\u30fc\u30c9\u304b\u3089\u30d1\u30d6\u30ea\u30c3\u30af\u306b\u30a2\u30af\u30bb\u30b9\u53ef\u80fd\u3067\u3042\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.addopens.ignored"_s),
			$of(u"--add-opens\u306f\u3001\u30b3\u30f3\u30d1\u30a4\u30eb\u6642\u306b\u306f\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.annotation.method.not.found"_s),
			$of(u"\u30bf\u30a4\u30d7\'\'{0}\'\'\u5185\u306b\u6ce8\u91c8\u30e1\u30bd\u30c3\u30c9\'\'{1}()\'\'\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.annotation.method.not.found.reason"_s),
			$of(u"\u30bf\u30a4\u30d7\'\'{0}\'\'\u5185\u306b\u6ce8\u91c8\u30e1\u30bd\u30c3\u30c9\'\'{1}()\'\'\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.attempt.to.synchronize.on.instance.of.value.based.class"_s),
			$of(u"\u5024\u30d9\u30fc\u30b9\u30fb\u30af\u30e9\u30b9\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3067\u540c\u671f\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.auxiliary.class.accessed.from.outside.of.its.source.file"_s),
			$of(u"{1}\u306e\u88dc\u52a9\u30af\u30e9\u30b9{0}\u306b\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u5916\u304b\u3089\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.bad.name.for.option"_s),
			$of(u"{0}\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u5024\u306b\u542b\u307e\u308c\u308b\u540d\u524d\u304c\u4e0d\u6b63\u3067\u3059: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.big.major.version"_s),
			$of(u"{0}: \u30e1\u30b8\u30e3\u30fc\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3{1}\u306f\u3001\u3053\u306e\u30b3\u30f3\u30d1\u30a4\u30e9\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u308b\u6700\u65b0\u306e\u30e1\u30b8\u30e3\u30fc\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3{2}\u3088\u308a\u65b0\u3057\u3044\u3067\u3059\u3002\n\u30b3\u30f3\u30d1\u30a4\u30e9\u306e\u30a2\u30c3\u30d7\u30b0\u30ec\u30fc\u30c9\u3092\u304a\u85a6\u3081\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.constant.SVUID"_s),
			$of(u"serialVersionUID\u306f\u30af\u30e9\u30b9{0}\u306e\u5b9a\u6570\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.deprecated.annotation.has.no.effect"_s),
			$of(u"@Deprecated\u6ce8\u91c8\u306f\u3001\u3053\u306e{0}\u5ba3\u8a00\u306b\u306f\u5f71\u97ff\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.diamond.redundant.args"_s),
			$of(u"\u65b0\u3057\u3044\u5f0f\u306e\u578b\u5f15\u6570\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059(\u304b\u308f\u308a\u306b\u30c0\u30a4\u30e4\u30e2\u30f3\u30c9\u6f14\u7b97\u5b50\u3092\u4f7f\u7528\u3057\u307e\u3059)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.dir.path.element.not.directory"_s),
			$of(u"\u4e0d\u6b63\u306a\u30d1\u30b9\u8981\u7d20\"{0}\": \u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.dir.path.element.not.found"_s),
			$of(u"\u4e0d\u6b63\u306a\u30d1\u30b9\u8981\u7d20\"{0}\": \u305d\u306e\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.div.zero"_s),
			$of(u"\u30bc\u30ed\u3067\u9664\u7b97"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.empty.if"_s),
			$of(u"if\u4ee5\u964d\u304c\u7a7a\u306e\u6587\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.file.from.future"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb{0}\u306e\u5909\u66f4\u65e5\u304c\u5c06\u6765\u306e\u65e5\u4ed8\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.finally.cannot.complete"_s),
			$of(u"finally\u7bc0\u304c\u6b63\u5e38\u306b\u5b8c\u4e86\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.forward.ref"_s),
			$of(u"\u521d\u671f\u5316\u3055\u308c\u308b\u524d\u306e\u5909\u6570\'\'{0}\'\'\u3092\u53c2\u7167\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.future.attr"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30f3{1}.{2}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3067\u5c0e\u5165\u3055\u308c\u305f{0}\u5c5e\u6027\u306f\u3001\u30d0\u30fc\u30b8\u30e7\u30f3{3}.{4}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3067\u306f\u7121\u8996\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated"_s),
			$of(u"{1}\u306e{0}\u306f\u63a8\u5968\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.for.removal"_s),
			$of(u"{1}\u306e{0}\u306f\u63a8\u5968\u3055\u308c\u3066\u304a\u3089\u305a\u3001\u524a\u9664\u7528\u306b\u30de\u30fc\u30af\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.for.removal.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306f\u63a8\u5968\u3055\u308c\u3066\u304a\u3089\u305a\u3001\u524a\u9664\u7528\u306b\u30de\u30fc\u30af\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.module"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u306f\u63a8\u5968\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.illegal.char.for.encoding"_s),
			$of(u"\u3053\u306e\u6587\u5b57\u306f\u3001\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0{0}\u306b\u30de\u30c3\u30d7\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.illegal.ref.to.restricted.type"_s),
			$of(u"\u5236\u9650\u3055\u308c\u305f\u578b\'\'{0}\'\'\u3078\u306e\u7121\u52b9\u306a\u53c2\u7167\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.improper.SVUID"_s),
			$of(u"serialVersionUID\u306f\u3001\u30af\u30e9\u30b9{0}\u306bstatic final\u3092\u5ba3\u8a00\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.inconsistent.white.space.indentation"_s),
			$of(u"\u7a7a\u767d\u306e\u30a4\u30f3\u30c7\u30f3\u30c8\u306b\u4e00\u8cab\u6027\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.incubating.modules"_s),
			$of(u"\u5b9f\u9a13\u7684\u306a\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\u4f7f\u7528\u3057\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.inexact.non-varargs.call"_s),
			$of(u"\u6700\u7d42\u30d1\u30e9\u30e1\u30fc\u30bf\u306e\u4e0d\u6b63\u78ba\u306a\u5f15\u6570\u578b\u3092\u6301\u3063\u305f\u53ef\u5909\u5f15\u6570\u30e1\u30bd\u30c3\u30c9\u306e\u975e\u53ef\u5909\u5f15\u6570\u547c\u51fa\u3057\u3002\n\u53ef\u5909\u5f15\u6570\u547c\u51fa\u3057\u306b\u95a2\u3057\u3066\u306f{0}\u306b\u30ad\u30e3\u30b9\u30c8\u3057\u307e\u3059\u3002\n\u975e\u53ef\u5909\u5f15\u6570\u547c\u51fa\u3057\u306b\u95a2\u3057\u3066\u306f{1}\u306b\u30ad\u30e3\u30b9\u30c8\u3057\u3066\u3053\u306e\u8b66\u544a\u3092\u51fa\u3055\u306a\u3044\u3088\u3046\u306b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.archive.file"_s),
			$of(u"\u30d1\u30b9\u4e0a\u306e\u4e88\u671f\u3057\u306a\u3044\u30d5\u30a1\u30a4\u30eb: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.path"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u540d\u304c\u7121\u52b9\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.yield"_s),
			$of(u"\'\'yield\'\'\u306f\u5c06\u6765\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u5236\u9650\u3055\u308c\u305f\u8b58\u5225\u5b50\u306b\u306a\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059\n(yield\u3068\u3044\u3046\u30e1\u30bd\u30c3\u30c9\u3092\u547c\u3073\u51fa\u3059\u306b\u306f\u3001yield\u3092\u53d7\u53d6\u308a\u5074\u307e\u305f\u306f\u30bf\u30a4\u30d7\u540d\u3067\u4fee\u98fe\u3057\u307e\u3059)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.is.preview"_s),
			$of(u"{0}\u306f\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u306e\u4e00\u90e8\u3067\u3042\u308bAPI\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{2}\u306e{0} {1}\u306f\u3001\u3053\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\u5fc5\u8981\u3068\u3059\u308b\u30af\u30e9\u30a4\u30a2\u30f3\u30c8\u304b\u3089\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.not.required.transitive"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{2}\u306e{0} {1}\u306f\u3001\'\'requires transitive\'\'\u3092\u4f7f\u7528\u3057\u3066\u9593\u63a5\u7684\u306b\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.unexported"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{2}\u306e{0} {1}\u306f\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.unexported.qualified"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{2}\u306e{0} {1}\u306f\u3001\u3053\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u3092\u5fc5\u8981\u3068\u3059\u308b\u3059\u3079\u3066\u306e\u30af\u30e9\u30a4\u30a2\u30f3\u30c8\u306b\u8868\u793a\u3055\u308c\u306a\u3044\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.lintOption"_s),
			$of("[{0}] "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.local.redundant.type"_s),
			$of(u"\u30ed\u30fc\u30ab\u30eb\u5909\u6570\u306e\u578b\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059(\u660e\u793a\u7684\u306a\u578b\u3092\'\'var\'\'\u306b\u7f6e\u304d\u63db\u3048\u307e\u3059)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.locn.unknown.file.on.module.path"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30d1\u30b9\u306e\u30d5\u30a1\u30a4\u30eb\u304c\u4e0d\u660e\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.long.SVUID"_s),
			$of(u"serialVersionUID\u306f\u3001\u30af\u30e9\u30b9{0}\u306elong\u578b\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.method.redundant.typeargs"_s),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u547c\u51fa\u3057\u306e\u578b\u5f15\u6570\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing-explicit-ctor"_s),
			$of(u"\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u3055\u308c\u305f\u30d1\u30c3\u30b1\u30fc\u30b8{1}\u306e\u30af\u30e9\u30b9{0}\u306f\u660e\u793a\u7684\u306a\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u3092\u5ba3\u8a00\u3057\u306a\u3044\u305f\u3081\u3001\u30c7\u30d5\u30a9\u30eb\u30c8\u30fb\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u3092\u30e2\u30b8\u30e5\u30fc\u30eb{2}\u306e\u30af\u30e9\u30a4\u30a2\u30f3\u30c8\u306b\u516c\u958b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing.SVUID"_s),
			$of(u"\u76f4\u5217\u5316\u53ef\u80fd\u306a\u30af\u30e9\u30b9{0}\u306b\u306f\u3001serialVersionUID\u304c\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing.deprecated.annotation"_s),
			$of(u"\u63a8\u5968\u3055\u308c\u306a\u3044\u9805\u76ee\u306f@Deprecated\u3067\u6ce8\u91c8\u304c\u4ed8\u3051\u3089\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.module.for.option.not.found"_s),
			$of(u"{0}\u30aa\u30d7\u30b7\u30e7\u30f3\u5185\u306b\u30e2\u30b8\u30e5\u30fc\u30eb\u540d\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.module.not.found"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.source"_s),
			$of(u"\u30bd\u30fc\u30b9\u5024{0}\u306f\u5ec3\u6b62\u3055\u308c\u3066\u3044\u3066\u3001\u4eca\u5f8c\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u4e88\u5b9a\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.suppression"_s),
			$of(u"\u5ec3\u6b62\u3055\u308c\u305f\u30aa\u30d7\u30b7\u30e7\u30f3\u306b\u3064\u3044\u3066\u306e\u8b66\u544a\u3092\u8868\u793a\u3057\u306a\u3044\u3088\u3046\u306b\u3059\u308b\u306b\u306f\u3001-Xlint:\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.target"_s),
			$of(u"\u30bf\u30fc\u30b2\u30c3\u30c8\u5024{0}\u306f\u5ec3\u6b62\u3055\u308c\u3066\u3044\u3066\u3001\u4eca\u5f8c\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u4e88\u5b9a\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.parameters.unsupported"_s),
			$of(u"-parameters\u306f\u3001\u30bf\u30fc\u30b2\u30c3\u30c8\u5024{0}\u3067\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002{1}\u4ee5\u964d\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.outdir.is.in.exploded.module"_s),
			$of(u"\u51fa\u529b\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u5c55\u958b\u3057\u305f\u30e2\u30b8\u30e5\u30fc\u30eb\u5185\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.bridge"_s),
			$of(u"{0}\u3002\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3055\u308c\u305f\u30e1\u30bd\u30c3\u30c9\u306f\u30d6\u30ea\u30c3\u30b8\u30fb\u30e1\u30bd\u30c3\u30c9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.equals.but.not.hashcode"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u306fequals\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u307e\u3059\u304c\u3001\u3053\u306e\u30af\u30e9\u30b9\u3082\u3001\u307e\u305f\u3001\u3044\u304b\u306a\u308b\u30b9\u30fc\u30d1\u30fc\u30af\u30e9\u30b9\u3082\u3001hashCode\u30e1\u30bd\u30c3\u30c9\u3092\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.unchecked.ret"_s),
			$of(u"{0}\n\u623b\u308a\u5024\u306e\u578b\u306f{1}\u304b\u3089{2}\u3078\u306e\u7121\u691c\u67fb\u5909\u63db\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.unchecked.thrown"_s),
			$of(u"{0}\n\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3055\u308c\u305f\u30e1\u30bd\u30c3\u30c9\u306f{1}\u3092\u30b9\u30ed\u30fc\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.varargs.extra"_s),
			$of(u"{0}\u3002\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3057\u3066\u3044\u308b\u30e1\u30bd\u30c3\u30c9\u306b\u306f\'\'...\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.varargs.missing"_s),
			$of(u"{0}\u3002\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3055\u308c\u305f\u30e1\u30bd\u30c3\u30c9\u306b\u306f\'\'...\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.package.empty.or.not.found"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8\u306f\u7a7a\u3067\u3042\u308b\u304b\u3001\u307e\u305f\u306f\u5b58\u5728\u3057\u307e\u305b\u3093 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.path.element.not.found"_s),
			$of(u"\u4e0d\u6b63\u306a\u30d1\u30b9\u8981\u7d20\"{0}\": \u305d\u306e\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.pkg-info.already.seen"_s),
			$of(u"package-info.java\u30d5\u30a1\u30a4\u30eb\u304c\u3059\u3067\u306b\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u7528\u306b\u8868\u793a\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.poor.choice.for.module.name"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u540d\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8{0}\u306e\u672b\u5c3e\u306f\u6570\u5b57\u306b\u3057\u306a\u3044\u3067\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.position.overflow"_s),
			$of(u"\u4f4d\u7f6e\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\u304c\u884c{0}\u3067\u30aa\u30fc\u30d0\u30fc\u30d5\u30ed\u30fc\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.possible.fall-through.into.case"_s),
			$of(u"case\u306bfall-through\u3059\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.potential.lambda.found"_s),
			$of(u"\u3053\u306e\u533f\u540d\u5185\u90e8\u30af\u30e9\u30b9\u3092\u30e9\u30e0\u30c0\u5f0f\u306b\u5909\u63db\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.potentially.ambiguous.overload"_s),
			$of(u"{1}\u5185\u306e{0}\u306f{3}\u5185\u306e{2}\u3068\u77db\u76fe\u3059\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use"_s),
			$of(u"{0}\u306f\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u3067\u3042\u308a\u3001\u4eca\u5f8c\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use.classfile"_s),
			$of(u"{0}\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306fJava SE {1}\u306e\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u3092\u4f7f\u7528\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use.plural"_s),
			$of(u"{0}\u306f\u30d7\u30ec\u30d3\u30e5\u30fc\u6a5f\u80fd\u3067\u3042\u308a\u3001\u4eca\u5f8c\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.prob.found.req"_s),
			$of(u"{0}\n\u671f\u5f85\u5024: {2}\n\u691c\u51fa\u5024:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.annotations.without.processors"_s),
			$of(u"\u3053\u308c\u3089\u306e\u6ce8\u91c8\u3092\u8981\u6c42\u3059\u308b\u30d7\u30ed\u30bb\u30c3\u30b5\u306f\u3042\u308a\u307e\u305b\u3093\u3067\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.duplicate.option.name"_s),
			$of(u"\u91cd\u8907\u3059\u308b\u30b5\u30dd\u30fc\u30c8\u5bfe\u8c61\u30aa\u30d7\u30b7\u30e7\u30f3\'\'{0}\'\'\u304c\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{1}\'\'\u306b\u3088\u3063\u3066\u8fd4\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.duplicate.supported.annotation"_s),
			$of(u"\u91cd\u8907\u3059\u308b\u30b5\u30dd\u30fc\u30c8\u5bfe\u8c61\u6ce8\u91c8\u578b\'\'{0}\'\'\u304c\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{1}\'\'\u306b\u3088\u3063\u3066\u8fd4\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.file.create.last.round"_s),
			$of(u"\u6700\u5f8c\u306b\u4f5c\u6210\u3055\u308c\u305f\u30bf\u30a4\u30d7\'\'{0}\'\'\u306e\u30d5\u30a1\u30a4\u30eb\u306f\u6ce8\u91c8\u51e6\u7406\u306b\u6e21\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.file.reopening"_s),
			$of(u"\'\'{0}\'\'\u7528\u306e\u30d5\u30a1\u30a4\u30eb\u3092\u8907\u6570\u56de\u4f5c\u6210\u3057\u3088\u3046\u3068\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.illegal.file.name"_s),
			$of(u"\u7121\u52b9\u306a\u540d\u524d\'\'{0}\'\'\u306e\u30d5\u30a1\u30a4\u30eb\u306f\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.malformed.supported.string"_s),
			$of(u"\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{1}\'\'\u304c\u8fd4\u3057\u305f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u308b\u6ce8\u91c8\u578b\u306e\u6587\u5b57\u5217\'\'{0}\'\'\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.package.does.not.exist"_s),
			$of(u"\u30d1\u30c3\u30b1\u30fc\u30b8{0}\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.proc-only.requested.no.procs"_s),
			$of(u"\u30b3\u30f3\u30d1\u30a4\u30eb\u306a\u3057\u306e\u6ce8\u91c8\u51e6\u7406\u304c\u30ea\u30af\u30a8\u30b9\u30c8\u3055\u308c\u307e\u3057\u305f\u304c\u3001\u30d7\u30ed\u30bb\u30c3\u30b5\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.processor.incompatible.source.version"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{1}\'\'\u304b\u3089-source \'\'{2}\'\'\u3088\u308a\u5c0f\u3055\u3044\u30bd\u30fc\u30b9\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3\'\'{0}\'\'\u304c\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.redundant.types.with.wildcard"_s),
			$of(u"\u6ce8\u91c8\u30d7\u30ed\u30bb\u30c3\u30b5\'\'{0}\'\'\u306f\'\'*\'\'\u3068\u4ed6\u306e\u6ce8\u91c8\u578b\u3092\u91cd\u8907\u3057\u3066\u30b5\u30dd\u30fc\u30c8\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.suspicious.class.name"_s),
			$of(u"\u540d\u524d\u304c{1}\u3067\u7d42\u308f\u308b\u578b\u306e\u30d5\u30a1\u30a4\u30eb\u3092\u4f5c\u6210\u3057\u3066\u3044\u307e\u3059: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.type.already.exists"_s),
			$of(u"\u30bf\u30a4\u30d7\'\'{0}\'\'\u306e\u30d5\u30a1\u30a4\u30eb\u306f\u3059\u3067\u306b\u30bd\u30fc\u30b9\u30fb\u30d1\u30b9\u307e\u305f\u306f\u30af\u30e9\u30b9\u30d1\u30b9\u306b\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.type.recreate"_s),
			$of(u"\u30bf\u30a4\u30d7\'\'{0}\'\'\u306e\u30d5\u30a1\u30a4\u30eb\u3092\u8907\u6570\u56de\u4f5c\u6210\u3057\u3088\u3046\u3068\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.unclosed.type.files"_s),
			$of(u"\u30bf\u30a4\u30d7\'\'{0}\'\'\u306e\u30d5\u30a1\u30a4\u30eb\u304c\u9589\u3058\u3089\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u3053\u308c\u3089\u306e\u30bf\u30a4\u30d7\u306f\u6ce8\u91c8\u51e6\u7406\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.unmatched.processor.options"_s),
			$of(u"\u6b21\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u3069\u306e\u30d7\u30ed\u30bb\u30c3\u30b5\u3067\u3082\u8a8d\u8b58\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.use.implicit"_s),
			$of(u"\u6697\u9ed9\u7684\u306b\u30b3\u30f3\u30d1\u30a4\u30eb\u3055\u308c\u305f\u30d5\u30a1\u30a4\u30eb\u306f\u6ce8\u91c8\u51e6\u7406\u306b\u6e21\u3055\u308c\u307e\u305b\u3093\u3002\n-implicit\u3092\u4f7f\u7528\u3057\u6697\u9ed9\u7684\u30b3\u30f3\u30d1\u30a4\u30eb\u306e\u30dd\u30ea\u30b7\u30fc\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.use.proc.or.implicit"_s),
			$of(u"\u6697\u9ed9\u7684\u306b\u30b3\u30f3\u30d1\u30a4\u30eb\u3055\u308c\u305f\u30d5\u30a1\u30a4\u30eb\u306f\u6ce8\u91c8\u51e6\u7406\u306b\u6e21\u3055\u308c\u307e\u305b\u3093\u3002\n-proc:none\u3092\u4f7f\u7528\u3057\u6ce8\u91c8\u51e6\u7406\u3092\u7121\u52b9\u306b\u3059\u308b\u304b -implicit\u3092\u4f7f\u7528\u3057\u6697\u9ed9\u7684\u30b3\u30f3\u30d1\u30a4\u30eb\u306e\u30dd\u30ea\u30b7\u30fc\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.profile.target.conflict"_s),
			$of(u"\u30d7\u30ed\u30d5\u30a1\u30a4\u30eb{0}\u306f\u30bf\u30fc\u30b2\u30c3\u30c8\u30fb\u30ea\u30ea\u30fc\u30b9{1}\u306b\u5bfe\u3057\u3066\u6709\u52b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.raw.class.use"_s),
			$of(u"raw\u578b\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f: {0}\n\u6c4e\u7528\u30af\u30e9\u30b9{1}\u306e\u578b\u5f15\u6570\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.redundant.cast"_s),
			$of(u"{0}\u3078\u306e\u5197\u9577\u306a\u30ad\u30e3\u30b9\u30c8\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.requires.automatic"_s),
			$of(u"\u81ea\u52d5\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u306f\u30c7\u30a3\u30ec\u30af\u30c6\u30a3\u30d6\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.requires.transitive.automatic"_s),
			$of(u"\u81ea\u52d5\u30e2\u30b8\u30e5\u30fc\u30eb\u306b\u306f\u63a8\u79fb\u7684\u30c7\u30a3\u30ec\u30af\u30c6\u30a3\u30d6\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.restricted.type.not.allowed"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b9{1}\u304b\u3089\u3001\'\'{0}\'\'\u306f\u5236\u9650\u3055\u308c\u305f\u578b\u540d\u3067\u3042\u308a\u3001\u578b\u306e\u5ba3\u8a00\u3067\u306e\u4f7f\u7528\u3001\u307e\u305f\u306f\u914d\u5217\u306e\u8981\u7d20\u30bf\u30a4\u30d7\u3068\u3057\u3066\u306e\u4f7f\u7528\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.restricted.type.not.allowed.preview"_s),
			$of(u"\'\'{0}\'\'\u306f\u5c06\u6765\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u5236\u9650\u3055\u308c\u305f\u578b\u540d\u306b\u306a\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u3001\u578b\u306e\u5ba3\u8a00\u3067\u306e\u4f7f\u7528\u3001\u307e\u305f\u306f\u914d\u5217\u306e\u8981\u7d20\u30bf\u30a4\u30d7\u3068\u3057\u3066\u306e\u4f7f\u7528\u306f\u3067\u304d\u306a\u304f\u306a\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.self.ref"_s),
			$of(u"\u521d\u671f\u5316\u5b50\u5185\u306e\u5909\u6570\'\'{0}\'\'\u306e\u81ea\u5df1\u53c2\u7167"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.service.provided.but.not.exported.or.used"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u30fb\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f\u304c\u3001\u30a8\u30af\u30b9\u30dd\u30fc\u30c8\u307e\u305f\u306f\u4f7f\u7528\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.no.bootclasspath"_s),
			$of(u"\u30d6\u30fc\u30c8\u30b9\u30c8\u30e9\u30c3\u30d7\u30fb\u30af\u30e9\u30b9\u30d1\u30b9\u304c-source {0}\u3068\u4e00\u7dd2\u306b\u8a2d\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.no.system.modules.path"_s),
			$of(u"\u30b7\u30b9\u30c6\u30e0\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30d1\u30b9\u304c-source {0}\u3068\u4e00\u7dd2\u306b\u8a2d\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.target.conflict"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30ea\u30ea\u30fc\u30b9{0}\u306b\u306f\u30bf\u30fc\u30b2\u30c3\u30c8\u30fb\u30ea\u30ea\u30fc\u30b9{1}\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.static.not.qualified.by.type"_s),
			$of(u"static {0}\u306f\u5f0f\u3067\u306f\u306a\u304f\u578b\u540d{1}\u3067\u4fee\u98fe\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.sun.proprietary"_s),
			$of(u"{0}\u306f\u5185\u90e8\u6240\u6709\u306eAPI\u3067\u3042\u308a\u3001\u4eca\u5f8c\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.target.default.source.conflict"_s),
			$of(u"\u30bf\u30fc\u30b2\u30c3\u30c8\u30fb\u30ea\u30ea\u30fc\u30b9{0}\u304c\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30bd\u30fc\u30b9\u30fb\u30ea\u30ea\u30fc\u30b9{1}\u3068\u7af6\u5408\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.trailing.white.space.will.be.removed"_s),
			$of(u"\u672b\u5c3e\u306e\u7a7a\u767d\u306f\u9664\u53bb\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.explicit.close.call"_s),
			$of(u"\u81ea\u52d5\u30af\u30ed\u30fc\u30ba\u53ef\u80fd\u306a\u30ea\u30bd\u30fc\u30b9\u306b\u304a\u3051\u308bclose()\u306e\u660e\u793a\u7684\u547c\u51fa\u3057"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.resource.not.referenced"_s),
			$of(u"\u81ea\u52d5\u30af\u30ed\u30fc\u30ba\u53ef\u80fd\u306a\u30ea\u30bd\u30fc\u30b9{0}\u306f\u5bfe\u5fdc\u3059\u308btry\u6587\u306e\u672c\u4f53\u3067\u306f\u53c2\u7167\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.resource.throws.interrupted.exc"_s),
			$of(u"\u81ea\u52d5\u30af\u30ed\u30fc\u30ba\u53ef\u80fd\u306a\u30ea\u30bd\u30fc\u30b9{0}\u306b\u3001InterruptedException\u3092\u30b9\u30ed\u30fc\u3059\u308b\u53ef\u80fd\u6027\u304c\u3042\u308b\u30e1\u30f3\u30d0\u30fc\u30fb\u30e1\u30bd\u30c3\u30c9close()\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.assign"_s),
			$of(u"{0}\u304b\u3089{1}\u3078\u306e\u7121\u691c\u67fb\u4ee3\u5165\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.assign.to.var"_s),
			$of(u"raw\u578b{1}\u306e\u30e1\u30f3\u30d0\u30fc\u3068\u3057\u3066\u5909\u6570{0}\u3078\u306e\u7121\u691c\u67fb\u4ee3\u5165\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.call.mbr.of.raw.type"_s),
			$of(u"raw\u578b{1}\u306e\u30e1\u30f3\u30d0\u30fc\u3068\u3057\u3066\u306e{0}\u3078\u306e\u7121\u691c\u67fb\u547c\u51fa\u3057\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.cast.to.type"_s),
			$of(u"\u578b{0}\u3078\u306e\u7121\u691c\u67fb\u30ad\u30e3\u30b9\u30c8\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.generic.array.creation"_s),
			$of(u"\u578b{0}\u306e\u53ef\u5909\u5f15\u6570\u30d1\u30e9\u30e1\u30fc\u30bf\u306b\u5bfe\u3059\u308b\u7dcf\u79f0\u578b\u914d\u5217\u306e\u7121\u691c\u67fb\u4f5c\u6210\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.meth.invocation.applied"_s),
			$of(u"\u7121\u691c\u67fb\u30e1\u30bd\u30c3\u30c9\u547c\u51fa\u3057: {4} {5}\u306e{0} {1}\u306f\u6307\u5b9a\u3055\u308c\u305f\u578b\u306b\u9069\u7528\u3055\u308c\u307e\u3059\n\u671f\u5f85\u5024: {2}\n\u691c\u51fa\u5024:    {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.varargs.non.reifiable.type"_s),
			$of(u"\u30d1\u30e9\u30e1\u30fc\u30bf\u5316\u3055\u308c\u305f\u53ef\u5909\u5f15\u6570\u578b{0}\u304b\u3089\u306e\u30d2\u30fc\u30d7\u6c5a\u67d3\u306e\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.underscore.as.identifier"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b99\u304b\u3089\'\'_\'\'\u306f\u30ad\u30fc\u30ef\u30fc\u30c9\u306a\u306e\u3067\u8b58\u5225\u5b50\u3068\u3057\u3066\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unexpected.archive.file"_s),
			$of(u"\u30a2\u30fc\u30ab\u30a4\u30d6\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u4e88\u671f\u3057\u306a\u3044\u62e1\u5f35\u5b50: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unknown.enum.constant"_s),
			$of(u"\u4e0d\u660e\u306a\u5217\u6319\u578b\u5b9a\u6570\u3067\u3059{1}.{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unknown.enum.constant.reason"_s),
			$of(u"\u4e0d\u660e\u306a\u5217\u6319\u578b\u5b9a\u6570\u3067\u3059{1}.{2}\n\u7406\u7531: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unreachable.catch"_s),
			$of(u"catch\u53e5\u306b\u79fb\u3059\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093\n\u30b9\u30ed\u30fc\u3055\u308c\u305f\u30bf\u30a4\u30d7{0}\u306f\u3059\u3067\u306b\u6355\u6349\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unreachable.catch.1"_s),
			$of(u"catch\u53e5\u306b\u79fb\u3059\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093\n\u30b9\u30ed\u30fc\u3055\u308c\u305f\u30bf\u30a4\u30d7{0}\u306f\u3059\u3067\u306b\u6355\u6349\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.varargs.redundant.trustme.anno"_s),
			$of(u"{0}\u6ce8\u91c8\u304c\u5197\u9577\u3067\u3059\u3002{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.varargs.unsafe.use.varargs.param"_s),
			$of(u"\u53ef\u5909\u5f15\u6570\u30e1\u30bd\u30c3\u30c9\u306f\u3001\u578b\u60c5\u5831\u4fdd\u6301\u53ef\u80fd\u3067\u306a\u3044\u53ef\u5909\u5f15\u6570\u30d1\u30e9\u30e1\u30fc\u30bf{0}\u304b\u3089\u306e\u30d2\u30fc\u30d7\u6c5a\u67d3\u306e\u539f\u56e0\u3068\u306a\u308b\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.warning"_s),
			$of(u"\u8b66\u544a:"_s)
		})
	});
}

compiler_ja::compiler_ja() {
}

$Class* compiler_ja::load$($String* name, bool initialize) {
	$loadClass(compiler_ja, name, initialize, &_compiler_ja_ClassInfo_, allocate$compiler_ja);
	return class$;
}

$Class* compiler_ja::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com