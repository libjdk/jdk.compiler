#include <com/sun/tools/javac/resources/compiler_zh_CN.h>

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

$MethodInfo _compiler_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(compiler_zh_CN::*)()>(&compiler_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _compiler_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.compiler_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_compiler_zh_CN_MethodInfo_
};

$Object* allocate$compiler_zh_CN($Class* clazz) {
	return $of($alloc(compiler_zh_CN));
}

void compiler_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* compiler_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("compiler.err.abstract.cant.be.accessed.directly"_s),
			$of(u"\u65e0\u6cd5\u76f4\u63a5\u8bbf\u95ee{2}\u4e2d\u7684\u62bd\u8c61{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.abstract.cant.be.instantiated"_s),
			$of(u"{0}\u662f\u62bd\u8c61\u7684; \u65e0\u6cd5\u5b9e\u4f8b\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.abstract.meth.cant.have.body"_s),
			$of(u"\u62bd\u8c61\u65b9\u6cd5\u4e0d\u80fd\u6709\u4e3b\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.add.exports.with.release"_s),
			$of(u"\u4e0d\u5141\u8bb8\u5728\u4f7f\u7528 --release \u65f6\u4ece\u7cfb\u7edf\u6a21\u5757 {0} \u5bfc\u51fa\u7a0b\u5e8f\u5305:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.add.reads.with.release"_s),
			$of(u"\u4e0d\u5141\u8bb8\u5728\u4f7f\u7528 --release \u65f6\u4e3a\u7cfb\u7edf\u6a21\u5757 {0} \u6dfb\u52a0\u8bfb\u53d6\u7ef4\u8fb9:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.addmods.all.module.path.invalid"_s),
			$of(u"--add-modules ALL-MODULE-PATH \u53ea\u80fd\u5728\u7f16\u8bd1\u672a\u547d\u540d\u6a21\u5757\u6216\u5728\u81ea\u52a8\u6a21\u5757\u7684\u4e0a\u4e0b\u6587\u4e2d\u7f16\u8bd1\u65f6\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.annotated"_s),
			$of(u"{0} {1}\u5df2\u8fdb\u884c\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined"_s),
			$of(u"\u5df2\u5728{2} {3}\u4e2d\u5b9a\u4e49\u4e86{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.in.clinit"_s),
			$of(u"\u5df2\u5728{3} {4}\u7684{2}\u4e2d\u5b9a\u4e49\u4e86{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.single.import"_s),
			$of(u"{0}\u7684 single-type-import \u5df2\u5b9a\u4e49\u5177\u6709\u76f8\u540c\u7b80\u540d\u7684\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.static.single.import"_s),
			$of(u"{0}\u7684\u9759\u6001 single-type-import \u5df2\u5b9a\u4e49\u5177\u6709\u76f8\u540c\u7b80\u540d\u7684\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.this.unit"_s),
			$of(u"\u5df2\u5728\u8be5\u7f16\u8bd1\u5355\u5143\u4e2d\u5b9a\u4e49{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.decl.not.allowed.here"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u6ce8\u91ca\u7c7b\u578b\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.missing.default.value"_s),
			$of(u"\u5bf9\u4e8e\u5143\u7d20 \'\'{1}\'\', \u6ce8\u91ca @{0} \u7f3a\u5c11\u9ed8\u8ba4\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.missing.default.value.1"_s),
			$of(u"\u5bf9\u4e8e\u5143\u7d20{1}, \u6ce8\u91ca @{0} \u7f3a\u5c11\u9ed8\u8ba4\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.not.valid.for.type"_s),
			$of(u"\u6ce8\u91ca\u5bf9\u4e8e\u7c7b\u578b{0}\u7684\u5143\u7d20\u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.type.not.applicable"_s),
			$of(u"\u6ce8\u91ca\u7c7b\u578b\u4e0d\u9002\u7528\u4e8e\u8be5\u7c7b\u578b\u7684\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.type.not.applicable.to.type"_s),
			$of(u"\u6ce8\u91ca @{0} \u5728\u6b64\u7c7b\u578b\u4e0a\u4e0b\u6587\u4e2d\u4e0d\u9002\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.annotation"_s),
			$of(u"\u6ce8\u91ca\u503c\u5fc5\u987b\u4e3a\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.class.literal"_s),
			$of(u"\u6ce8\u91ca\u503c\u5fc5\u987b\u4e3a\u7c7b\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.name.value"_s),
			$of(u"\u6ce8\u91ca\u503c\u5fc5\u987b\u91c7\u7528 \'\'name=value\'\' \u683c\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.not.allowable.type"_s),
			$of(u"\u6ce8\u91ca\u503c\u4e0d\u662f\u5141\u8bb8\u7684\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.args"_s),
			$of(u"\u533f\u540d\u7c7b\u5b9e\u73b0\u63a5\u53e3; \u4e0d\u80fd\u6709\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.qual.for.new"_s),
			$of(u"\u533f\u540d\u7c7b\u5b9e\u73b0\u63a5\u53e3; \u4e0d\u80fd\u6709\u9650\u5b9a\u7b26 - \u5bf9\u4e8e\u65b0"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.typeargs"_s),
			$of(u"\u533f\u540d\u7c7b\u5b9e\u73b0\u63a5\u53e3; \u4e0d\u80fd\u5177\u6709\u7c7b\u578b\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anonymous.diamond.method.does.not.override.superclass"_s),
			$of(u"\u65b9\u6cd5\u4e0d\u4f1a\u8986\u76d6\u6216\u5b9e\u73b0\u8d85\u7c7b\u578b\u4e2d\u7684\u65b9\u6cd5\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.and.receiver"_s),
			$of(u"\u63a5\u6536\u65b9\u53c2\u6570\u4e0d\u5141\u8bb8\u4f7f\u7528\u4f20\u7edf\u6570\u7ec4\u8bb0\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.and.varargs"_s),
			$of(u"\u65e0\u6cd5\u5728{2}\u4e2d\u540c\u65f6\u58f0\u660e{0}\u548c{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.dimension.missing"_s),
			$of(u"\u7f3a\u5c11\u6570\u7ec4\u7ef4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.req.but.found"_s),
			$of(u"\u9700\u8981\u6570\u7ec4, \u4f46\u627e\u5230{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.assert.as.identifier"_s),
			$of(u"\u4ece\u53d1\u884c\u7248 1.4 \u5f00\u59cb, \'\'assert\'\' \u4e3a\u5173\u952e\u5b57, \u4e0d\u80fd\u7528\u4f5c\u6807\u8bc6\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.attribute.value.must.be.constant"_s),
			$of(u"\u5143\u7d20\u503c\u5fc5\u987b\u4e3a\u5e38\u91cf\u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.functional.intf.anno"_s),
			$of(u"\u610f\u5916\u7684 @FunctionalInterface \u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.functional.intf.anno.1"_s),
			$of(u"\u610f\u5916\u7684 @FunctionalInterface \u6ce8\u91ca\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.initializer"_s),
			$of(u"{0}\u7684\u521d\u59cb\u5316\u7a0b\u5e8f\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.name.for.option"_s),
			$of(u"{0} \u9009\u9879\u7684\u503c\u4e2d\u6709\u9519\u8bef\u7684\u540d\u79f0: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.value.for.option"_s),
			$of(u"{0} \u9009\u9879\u7684\u503c\u9519\u8bef: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.break.outside.switch.expression"_s),
			$of(u"\u5c1d\u8bd5\u4ece switch \u8868\u8fbe\u5f0f\u4e2d\u65ad"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.break.outside.switch.loop"_s),
			$of(u"\u5728 switch \u6216 loop \u5916\u90e8\u4e2d\u65ad"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.call.must.be.first.stmt.in.ctor"_s),
			$of(u"\u5bf9{0}\u7684\u8c03\u7528\u5fc5\u987b\u662f\u6784\u9020\u5668\u4e2d\u7684\u7b2c\u4e00\u4e2a\u8bed\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.call.to.super.not.allowed.in.enum.ctor"_s),
			$of(u"\u5728\u679a\u4e3e\u6784\u9020\u5668\u4e2d\u4e0d\u5141\u8bb8\u8c03\u7528\u8d85\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.create.array.with.diamond"_s),
			$of(u"\u65e0\u6cd5\u521b\u5efa\u5177\u6709 \'\'<>\'\' \u7684\u6570\u7ec4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.create.array.with.type.arguments"_s),
			$of(u"\u65e0\u6cd5\u521b\u5efa\u5177\u6709\u7c7b\u578b\u53d8\u91cf\u7684\u6570\u7ec4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.generate.class"_s),
			$of(u"\u751f\u6210\u7c7b {0} \u65f6\u51fa\u9519\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.access"_s),
			$of(u"\u65e0\u6cd5\u8bbf\u95ee{0}\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.diamond"_s),
			$of(u"\u65e0\u6cd5\u63a8\u65ad{0}\u7684\u7c7b\u578b\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.diamond.1"_s),
			$of(u"\u65e0\u6cd5\u63a8\u65ad{0}\u7684\u7c7b\u578b\u53c2\u6570\n\u539f\u56e0: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.symbol"_s),
			$of(u"\u65e0\u6cd5\u5c06{4} {5}\u4e2d\u7684{0} {1}\u5e94\u7528\u5230\u7ed9\u5b9a\u7c7b\u578b;\n\u9700\u8981: {2}\n\u627e\u5230:    {3}\n\u539f\u56e0: {6}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.symbols"_s),
			$of(u"\u5bf9\u4e8e{1}({2}), \u627e\u4e0d\u5230\u5408\u9002\u7684{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.assign.val.to.final.var"_s),
			$of(u"\u65e0\u6cd5\u4e3a\u6700\u7ec8\u53d8\u91cf{0}\u5206\u914d\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.assign.val.to.this"_s),
			$of(u"\u65e0\u6cd5\u5206\u914d\u7ed9 \'\'this\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.deref"_s),
			$of(u"\u65e0\u6cd5\u53d6\u6d88\u5f15\u7528{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.extend.intf.annotation"_s),
			$of(u"\u5bf9\u4e8e @interfaces, \u4e0d\u5141\u8bb8 \'\'extends\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.infer.local.var.type"_s),
			$of(u"\u65e0\u6cd5\u63a8\u65ad\u672c\u5730\u53d8\u91cf {0} \u7684\u7c7b\u578b\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.diff.arg"_s),
			$of(u"\u65e0\u6cd5\u4f7f\u7528\u4ee5\u4e0b\u4e0d\u540c\u7684\u53c2\u6570\u7ee7\u627f{0}: <{1}> \u548c <{2}>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.anon"_s),
			$of(u"\u65e0\u6cd5\u4ece\u533f\u540d\u7c7b\u7ee7\u627f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.final"_s),
			$of(u"\u65e0\u6cd5\u4ece\u6700\u7ec8{0}\u8fdb\u884c\u7ee7\u627f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.sealed"_s),
			$of(u"\u7c7b\u4e0d\u5f97\u6269\u5c55\u5bc6\u5c01\u7c7b\uff1a{0}\uff08\u56e0\u4e3a\u5b83\u672a\u5217\u5728\u5176 \'\'permits\'\' \u5b50\u53e5\u4e2d\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.read.file"_s),
			$of(u"\u65e0\u6cd5\u8bfb\u53d6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.ref.before.ctor.called"_s),
			$of(u"\u65e0\u6cd5\u5728\u8c03\u7528\u8d85\u7c7b\u578b\u6784\u9020\u5668\u4e4b\u524d\u5f15\u7528{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.ref.non.effectively.final.var"_s),
			$of(u"\u4ece{1}\u5f15\u7528\u7684\u672c\u5730\u53d8\u91cf\u5fc5\u987b\u662f\u6700\u7ec8\u53d8\u91cf\u6216\u5b9e\u9645\u4e0a\u7684\u6700\u7ec8\u53d8\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7: {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.args"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7: {0} {1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.args.params"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7: {0} <{2}>{1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7:   {0} {1}\n\u4f4d\u7f6e: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location.args"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7:   {0} {1}({3})\n\u4f4d\u7f6e: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location.args.params"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7:   {0} <{2}>{1}({3})\n\u4f4d\u7f6e: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.select.static.class.from.param.type"_s),
			$of(u"\u65e0\u6cd5\u4ece\u53c2\u6570\u5316\u7684\u7c7b\u578b\u4e2d\u9009\u62e9\u9759\u6001\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.type.annotate.scoping"_s),
			$of(u"\u65e0\u6cd5\u4f7f\u7528 type-use \u6ce8\u91ca {0} \u6765\u6ce8\u91ca\u786e\u5b9a\u4f5c\u7528\u57df\u7ed3\u6784"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.type.annotate.scoping.1"_s),
			$of(u"\u65e0\u6cd5\u4f7f\u7528 type-use \u6ce8\u91ca {0} \u6765\u6ce8\u91ca\u786e\u5b9a\u4f5c\u7528\u57df\u7ed3\u6784"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.catch.without.try"_s),
			$of(u"\u6709 \'\'catch\'\', \u4f46\u662f\u6ca1\u6709 \'\'try\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.clash.with.pkg.of.same.name"_s),
			$of(u"{0} {1}\u4e0e\u5e26\u6709\u76f8\u540c\u540d\u79f0\u7684\u7a0b\u5e8f\u5305\u51b2\u7a81"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.cant.write"_s),
			$of(u"\u5199\u5165{0}\u65f6\u51fa\u9519: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.in.module.cant.extend.sealed.in.diff.module"_s),
			$of(u"\u6a21\u5757 {1} \u4e2d\u7684\u7c7b {0} \u65e0\u6cd5\u6269\u5c55\u5176\u4ed6\u6a21\u5757\u4e2d\u7684\u5bc6\u5c01\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.in.unnamed.module.cant.extend.sealed.in.diff.package"_s),
			$of(u"\u672a\u547d\u540d\u6a21\u5757\u4e2d\u7684\u7c7b {0} \u65e0\u6cd5\u6269\u5c55\u5176\u4ed6\u7a0b\u5e8f\u5305\u4e2d\u7684\u5bc6\u5c01\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.not.allowed"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528\u7c7b, \u63a5\u53e3\u6216\u679a\u4e3e\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.public.should.be.in.file"_s),
			$of(u"{0} {1} \u662f\u516c\u5171\u7684, \u5e94\u5728\u540d\u4e3a {1}.java \u7684\u6587\u4ef6\u4e2d\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.concrete.inheritance.conflict"_s),
			$of(u"{1}\u4e2d\u7684\u65b9\u6cd5{0}\u548c{3}\u4e2d\u7684\u65b9\u6cd5{2}\u662f\u4f7f\u7528\u76f8\u540c\u7684\u7b7e\u540d\u7ee7\u627f\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.exports"_s),
			$of(u"\u91cd\u590d\u6216\u51b2\u7a81\u7684\u5bfc\u51fa\u64cd\u4f5c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.exports.to.module"_s),
			$of(u"\u91cd\u590d\u6216\u51b2\u7a81\u7684\u5bfc\u51fa\u5230\u6a21\u5757\u64cd\u4f5c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.opens"_s),
			$of(u"\u91cd\u590d\u6216\u51b2\u7a81\u7684\u6253\u5f00\u64cd\u4f5c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.opens.to.module"_s),
			$of(u"\u91cd\u590d\u6216\u51b2\u7a81\u7684\u6253\u5f00\u5230\u6a21\u5757\u64cd\u4f5c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.const.expr.req"_s),
			$of(u"\u9700\u8981\u5e38\u91cf\u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cont.outside.loop"_s),
			$of(u"continue \u5728 loop \u5916\u90e8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.continue.outside.switch.expression"_s),
			$of(u"\u5c1d\u8bd5\u4ece switch \u8868\u8fbe\u5f0f\u7ee7\u7eed"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.annotation.element"_s),
			$of(u"\u5143\u7d20 {0} \u7684\u7c7b\u578b\u4e3a\u5faa\u73af"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.inheritance"_s),
			$of(u"\u6d89\u53ca{0}\u7684\u5faa\u73af\u7ee7\u627f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.requires"_s),
			$of(u"\u6d89\u53ca {0} \u7684\u5faa\u73af\u88ab\u4f9d\u8d56\u5bf9\u8c61"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.bad.entity"_s),
			$of(u"HTML \u5b9e\u4f53\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.bad.inline.tag"_s),
			$of(u"\u5185\u5d4c\u6807\u8bb0\u7684\u7528\u6cd5\u4e0d\u6b63\u786e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.gt.expected"_s),
			$of(u"\u9700\u8981 \'\'>\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.identifier.expected"_s),
			$of(u"\u9700\u8981\u6807\u8bc6\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.malformed.html"_s),
			$of(u"\u683c\u5f0f\u9519\u8bef\u7684 HTML"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.missing.semicolon"_s),
			$of(u"\u7f3a\u5c11\u5206\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.no.content"_s),
			$of(u"\u65e0\u5185\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.no.tag.name"_s),
			$of(u"\'@\' \u540e\u6ca1\u6709\u6807\u8bb0\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.bad.parens"_s),
			$of(u"\u5f15\u7528\u4e2d\u7f3a\u5c11 \'\')\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.syntax.error"_s),
			$of(u"\u5f15\u7528\u4e2d\u51fa\u73b0\u8bed\u6cd5\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.unexpected.input"_s),
			$of(u"\u610f\u5916\u7684\u6587\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unexpected.content"_s),
			$of(u"\u610f\u5916\u7684\u5185\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.inline.tag"_s),
			$of(u"\u672a\u7ec8\u6b62\u7684\u5185\u5d4c\u6807\u8bb0"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.signature"_s),
			$of(u"\u672a\u7ec8\u6b62\u7684\u7b7e\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.string"_s),
			$of(u"\u672a\u7ec8\u6b62\u7684\u5b57\u7b26\u4e32"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.default.allowed.in.intf.annotation.member"_s),
			$of(u"\u6ce8\u91ca\u7c7b\u578b\u58f0\u660e\u4e2d\u4ec5\u5141\u8bb8\u9ed8\u8ba4\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.default.overrides.object.member"_s),
			$of(u"{1} {2} \u4e2d\u7684\u9ed8\u8ba4\u65b9\u6cd5{0}\u8986\u76d6\u4e86 java.lang.Object \u7684\u6210\u5458"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.does.not.override.abstract"_s),
			$of(u"{0}\u4e0d\u662f\u62bd\u8c61\u7684, \u5e76\u4e14\u672a\u8986\u76d6{2}\u4e2d\u7684\u62bd\u8c61\u65b9\u6cd5{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.doesnt.exist"_s),
			$of(u"\u7a0b\u5e8f\u5305{0}\u4e0d\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dot.class.expected"_s),
			$of(u"\u9700\u8981 \'\'.class\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.invalid.repeated"_s),
			$of(u"\u6ce8\u91ca{0}\u4e0d\u662f\u6709\u6548\u7684\u53ef\u91cd\u590d\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.member.value"_s),
			$of(u"\u6ce8\u91ca@{1}\u4e2d\u7684\u5143\u7d20 \'\'{0}\'\' \u91cd\u590d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.missing.container"_s),
			$of(u"{0} \u4e0d\u662f\u53ef\u91cd\u590d\u7684\u6ce8\u91ca\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.case.label"_s),
			$of(u"case \u6807\u7b7e\u91cd\u590d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.class"_s),
			$of(u"\u7c7b\u91cd\u590d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.default.label"_s),
			$of(u"default \u6807\u7b7e\u91cd\u590d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.module"_s),
			$of(u"\u91cd\u590d\u7684\u6a21\u5757: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.module.on.path"_s),
			$of(u"{1} \u4e2d\u7684 {0} \u4e0a\u5b58\u5728\n\u91cd\u590d\u7684\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.provides"_s),
			$of(u"\u91cd\u590d\u7684 provides \u6307\u4ee4: \u670d\u52a1 {0}, \u5b9e\u73b0 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.requires"_s),
			$of(u"\u91cd\u590d\u7684 requires \u6307\u4ee4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.uses"_s),
			$of(u"\u91cd\u590d\u7684 uses \u6307\u4ee4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.else.without.if"_s),
			$of(u"\u6709 \'\'if\'\', \u4f46\u662f\u6ca1\u6709 \'\'else\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.empty.A.argument"_s),
			$of(u"-A \u9700\u8981\u4e00\u4e2a\u53c2\u6570; \u4f7f\u7528 \'\'-Akey\'\' \u6216 \'\'-Akey=value\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.empty.char.lit"_s),
			$of(u"\u7a7a\u5b57\u7b26\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.encl.class.required"_s),
			$of(u"\u9700\u8981\u5305\u542b{0}\u7684\u5c01\u95ed\u5b9e\u4f8b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.annotation.must.be.enum.constant"_s),
			$of(u"\u679a\u4e3e\u6ce8\u91ca\u503c\u5fc5\u987b\u662f\u679a\u4e3e\u5e38\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.as.identifier"_s),
			$of(u"\u4ece\u53d1\u884c\u7248 5 \u5f00\u59cb, \'\'enum\'\' \u4e3a\u5173\u952e\u5b57, \u4e0d\u80fd\u7528\u4f5c\u6807\u8bc6\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.cant.be.instantiated"_s),
			$of(u"\u65e0\u6cd5\u5b9e\u4f8b\u5316\u679a\u4e3e\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.constant.expected"_s),
			$of(u"\u6b64\u5904\u9700\u8981\u679a\u4e3e\u5e38\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.constant.not.expected"_s),
			$of(u"\u6b64\u5904\u4e0d\u9700\u8981\u679a\u4e3e\u5e38\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.label.must.be.unqualified.enum"_s),
			$of(u"\u679a\u4e3e switch case \u6807\u7b7e\u5fc5\u987b\u4e3a\u679a\u4e3e\u5e38\u91cf\u7684\u975e\u9650\u5b9a\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.no.finalize"_s),
			$of(u"\u679a\u4e3e\u4e0d\u80fd\u6709 finalize \u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.no.subclassing"_s),
			$of(u"\u7c7b\u65e0\u6cd5\u76f4\u63a5\u6269\u5c55 java.lang.Enum"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.types.not.extensible"_s),
			$of(u"\u679a\u4e3e\u7c7b\u578b\u4e0d\u53ef\u7ee7\u627f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error"_s),
			$of(u"\u9519\u8bef: "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error.reading.file"_s),
			$of(u"\u8bfb\u53d6{0}\u65f6\u51fa\u9519; {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error.writing.file"_s),
			$of(u"\u5199\u5165 {0} \u65f6\u51fa\u9519\uff1b{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.except.already.caught"_s),
			$of(u"\u5df2\u6355\u83b7\u5230\u5f02\u5e38\u9519\u8bef{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.except.never.thrown.in.try"_s),
			$of(u"\u5728\u76f8\u5e94\u7684 try \u8bed\u53e5\u4e3b\u4f53\u4e2d\u4e0d\u80fd\u629b\u51fa\u5f02\u5e38\u9519\u8bef{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected"_s),
			$of(u"\u9700\u8981{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.module"_s),
			$of(u"\u9884\u671f \'\'module\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.module.or.open"_s),
			$of(u"\u9700\u8981 \'\'module\'\' \u6216 \'\'open\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.str"_s),
			$of(u"\u9700\u8981 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected2"_s),
			$of(u"\u9700\u8981{0}\u6216{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected3"_s),
			$of(u"\u9700\u8981{0}, {1}\u6216{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected4"_s),
			$of(u"\u9700\u8981 {0}\u3001{1}\u3001{2} \u6216 {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expression.not.allowable.as.annotation.value"_s),
			$of(u"\u8868\u8fbe\u5f0f\u4e0d\u5141\u8bb8\u7528\u4f5c\u6ce8\u91ca\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.feature.not.supported.in.source"_s),
			$of(u"-source {1} \u4e2d\u4e0d\u652f\u6301 {0}\n(\u8bf7\u4f7f\u7528 -source {2} \u6216\u66f4\u9ad8\u7248\u672c\u4ee5\u542f\u7528 {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.feature.not.supported.in.source.plural"_s),
			$of(u"-source {1} \u4e2d\u4e0d\u652f\u6301 {0}\n(\u8bf7\u4f7f\u7528 -source {2} \u6216\u66f4\u9ad8\u7248\u672c\u4ee5\u542f\u7528 {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.directory"_s),
			$of(u"\u4e0d\u662f\u76ee\u5f55\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.file"_s),
			$of(u"\u4e0d\u662f\u6587\u4ef6\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.found"_s),
			$of(u"\u627e\u4e0d\u5230\u6587\u4ef6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.patched.and.msp"_s),
			$of(u"\u53ef\u4ece --patch-module \u548c --module-source-path \u8bbf\u95ee\u6587\u4ef6, \u4f46\u8be5\u6587\u4ef6\u5728\u6bcf\u4e2a\u8def\u5f84\u4e2d\u5c5e\u4e8e\u4e0d\u540c\u7684\u6a21\u5757: {0}, {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.sb.on.source.or.patch.path.for.module"_s),
			$of(u"\u6587\u4ef6\u5e94\u5728\u6e90\u8def\u5f84\u6216\u6a21\u5757\u7684\u8865\u4e01\u7a0b\u5e8f\u8def\u5f84\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.final.parameter.may.not.be.assigned"_s),
			$of(u"\u4e0d\u80fd\u5206\u914d\u6700\u7ec8\u53c2\u6570{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.finally.without.try"_s),
			$of(u"\u6709 \'\'finally\'\', \u4f46\u662f\u6ca1\u6709 \'\'try\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.first.statement.must.be.call.to.another.constructor"_s),
			$of(u"\u6784\u9020\u5668\u4e0d\u662f\u89c4\u8303\u7684\uff0c\u56e0\u6b64\u5b83\u7684\u7b2c\u4e00\u4e2a\u8bed\u53e5\u5fc5\u987b\u8c03\u7528\u7c7b {0} \u7684\u53e6\u4e00\u4e2a\u6784\u9020\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.foreach.not.applicable.to.type"_s),
			$of(u"for-each \u4e0d\u9002\u7528\u4e8e\u8868\u8fbe\u5f0f\u7c7b\u578b\n\u8981\u6c42: {1}\n\u627e\u5230:    {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.fp.number.too.large"_s),
			$of(u"\u6d6e\u70b9\u6570\u8fc7\u5927"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.fp.number.too.small"_s),
			$of(u"\u6d6e\u70b9\u6570\u8fc7\u5c0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.generic.array.creation"_s),
			$of(u"\u521b\u5efa\u6cdb\u578b\u6570\u7ec4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.generic.throwable"_s),
			$of(u"\u6cdb\u578b\u7c7b\u4e0d\u80fd\u6269\u5c55 java.lang.Throwable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.icls.cant.have.static.decl"_s),
			$of(u"\u5185\u90e8\u7c7b{0}\u4e2d\u7684\u9759\u6001\u58f0\u660e\u975e\u6cd5\n\u4fee\u9970\u7b26 \'\'static\'\' \u4ec5\u5141\u8bb8\u5728\u5e38\u91cf\u53d8\u91cf\u58f0\u660e\u4e2d\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.argument.for.option"_s),
			$of(u"{0} \u7684\u53c2\u6570\u975e\u6cd5: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.array.creation.both.dimension.and.initialization"_s),
			$of(u"\u540c\u65f6\u4f7f\u7528\u7ef4\u8868\u8fbe\u5f0f\u548c\u521d\u59cb\u5316\u521b\u5efa\u6570\u7ec4\u662f\u975e\u6cd5\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.char"_s),
			$of(u"\u975e\u6cd5\u5b57\u7b26: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.char.for.encoding"_s),
			$of(u"\u7f16\u7801 {1} \u7684\u4e0d\u53ef\u6620\u5c04\u5b57\u7b26 (0x{0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.combination.of.modifiers"_s),
			$of(u"\u975e\u6cd5\u7684\u4fee\u9970\u7b26\u7ec4\u5408: {0}\u548c{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.default.super.call"_s),
			$of(u"\u9ed8\u8ba4\u8d85\u7ea7\u8c03\u7528\u4e2d\u7684\u7c7b\u578b\u9650\u5b9a\u7b26{0}\u9519\u8bef\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.dot"_s),
			$of(u"\u975e\u6cd5 \'\'.\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.enum.static.ref"_s),
			$of(u"\u521d\u59cb\u5316\u7a0b\u5e8f\u4e2d\u5bf9\u9759\u6001\u5b57\u6bb5\u7684\u5f15\u7528\u4e0d\u5408\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.esc.char"_s),
			$of(u"\u975e\u6cd5\u8f6c\u4e49\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.forward.ref"_s),
			$of(u"\u975e\u6cd5\u524d\u5411\u5f15\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.initializer.for.type"_s),
			$of(u"{0}\u7684\u521d\u59cb\u5316\u7a0b\u5e8f\u4e0d\u5408\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.line.end.in.char.lit"_s),
			$of(u"\u5b57\u7b26\u6587\u5b57\u7684\u884c\u7ed3\u5c3e\u4e0d\u5408\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.nonascii.digit"_s),
			$of(u"\u975e\u6cd5\u7684\u975e ASCII \u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.parenthesized.expression"_s),
			$of(u"\u975e\u6cd5\u7684\u542b\u62ec\u53f7\u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.qual.not.icls"_s),
			$of(u"\u975e\u6cd5\u9650\u5b9a\u7b26; {0}\u4e0d\u662f\u5185\u90e8\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.record.component.name"_s),
			$of(u"\u8bb0\u5f55\u7ec4\u4ef6\u540d\u79f0 {0} \u975e\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.ref.to.restricted.type"_s),
			$of(u"\u5bf9\u53d7\u9650\u5236\u7c7b\u578b \'\'{0}\'\' \u7684\u5f15\u7528\u975e\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.self.ref"_s),
			$of(u"\u521d\u59cb\u5316\u7a0b\u5e8f\u4e2d\u5b58\u5728\u81ea\u5f15\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.expr"_s),
			$of(u"\u975e\u6cd5\u7684\u8868\u8fbe\u5f0f\u5f00\u59cb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.stmt"_s),
			$of(u"\u975e\u6cd5\u7684\u8bed\u53e5\u5f00\u59cb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.type"_s),
			$of(u"\u975e\u6cd5\u7684\u7c7b\u578b\u5f00\u59cb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.static.intf.meth.call"_s),
			$of(u"\u9759\u6001\u63a5\u53e3\u65b9\u6cd5\u8c03\u7528\u975e\u6cd5\n\u5e94\u5c06\u63a5\u6536\u65b9\u8868\u8fbe\u5f0f\u66ff\u6362\u4e3a\u7c7b\u578b\u9650\u5b9a\u7b26 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.text.block.open"_s),
			$of(u"\u6587\u672c\u5757\u8d77\u59cb\u5206\u9694\u7b26\u5e8f\u5217\u975e\u6cd5\uff0c\u7f3a\u5c11\u884c\u7ec8\u6b62\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.underscore"_s),
			$of(u"\u975e\u6cd5\u4e0b\u5212\u7ebf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.unicode.esc"_s),
			$of(u"\u975e\u6cd5\u7684 Unicode \u8f6c\u4e49"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.import.requires.canonical"_s),
			$of(u"\u5bfc\u5165\u9700\u8981{0}\u7684\u89c4\u8303\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.improperly.formed.type.inner.raw.param"_s),
			$of(u"\u7c7b\u578b\u7684\u683c\u5f0f\u4e0d\u6b63\u786e, \u7ed9\u51fa\u4e86\u539f\u59cb\u7c7b\u578b\u7684\u7c7b\u578b\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.improperly.formed.type.param.missing"_s),
			$of(u"\u7c7b\u578b\u7684\u683c\u5f0f\u4e0d\u6b63\u786e, \u7f3a\u5c11\u67d0\u4e9b\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incomparable.types"_s),
			$of(u"\u4e0d\u53ef\u6bd4\u8f83\u7684\u7c7b\u578b: {0}\u548c{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incompatible.thrown.types.in.mref"_s),
			$of(u"\u51fd\u6570\u8868\u8fbe\u5f0f\u4e2d\u629b\u51fa\u7684\u7c7b\u578b {0} \u4e0d\u517c\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.constructor.receiver.name"_s),
			$of(u"\u63a5\u6536\u65b9\u540d\u79f0\u4e0e\u5916\u90e8\u5c01\u95ed\u7c7b\u7c7b\u578b\u4e0d\u5339\u914d\n\u9700\u8981: {0}\n\u627e\u5230:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.constructor.receiver.type"_s),
			$of(u"\u63a5\u6536\u65b9\u7c7b\u578b\u4e0e\u5916\u90e8\u5c01\u95ed\u7c7b\u7c7b\u578b\u4e0d\u5339\u914d\n\u9700\u8981: {0}\n\u627e\u5230:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.receiver.name"_s),
			$of(u"\u63a5\u6536\u65b9\u540d\u79f0\u4e0e\u5c01\u95ed\u7c7b\u7c7b\u578b\u4e0d\u5339\u914d\n\u9700\u8981: {0}\n\u627e\u5230:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.receiver.type"_s),
			$of(u"\u63a5\u6536\u65b9\u7c7b\u578b\u4e0e\u5c01\u95ed\u7c7b\u7c7b\u578b\u4e0d\u5339\u914d\n\u9700\u8981: {0}\n\u627e\u5230:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.initializer.must.be.able.to.complete.normally"_s),
			$of(u"\u521d\u59cb\u5316\u7a0b\u5e8f\u5fc5\u987b\u80fd\u591f\u6b63\u5e38\u5b8c\u6210"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.initializer.not.allowed"_s),
			$of(u"\u63a5\u53e3\u4e2d\u4e0d\u5141\u8bb8\u6709\u521d\u59cb\u5316\u7a0b\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instance.initializer.not.allowed.in.records"_s),
			$of(u"\u8bb0\u5f55\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u5b9e\u4f8b\u521d\u59cb\u5316\u7a0b\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instanceof.pattern.no.subtype"_s),
			$of(u"\u6a21\u5f0f\u7c7b\u578b {0} \u662f\u8868\u8fbe\u5f0f\u7c7b\u578b {1} \u7684\u5b50\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instanceof.reifiable.not.safe"_s),
			$of(u"{0} \u65e0\u6cd5\u5b89\u5168\u5730\u8f6c\u6362\u4e3a {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.int.number.too.large"_s),
			$of(u"\u6574\u6570\u592a\u5927"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.cant.have.type.params"_s),
			$of(u"\u6ce8\u91ca\u7c7b\u578b {0} \u4e0d\u80fd\u4e3a\u6cdb\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.member.clash"_s),
			$of(u"\u6ce8\u91ca\u7c7b\u578b{1}\u58f0\u660e\u4e0e\u65b9\u6cd5 {0} \u540c\u540d\u7684\u5143\u7d20"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.members.cant.have.params"_s),
			$of(u"\u6ce8\u91ca\u7c7b\u578b\u58f0\u660e\u4e2d\u7684\u5143\u7d20\u65e0\u6cd5\u58f0\u660e\u5f62\u53c2"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.members.cant.have.type.params"_s),
			$of(u"\u6ce8\u91ca\u7c7b\u578b\u58f0\u660e\u4e2d\u7684\u5143\u7d20\u4e0d\u80fd\u4e3a\u6cdb\u578b\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.expected.here"_s),
			$of(u"\u6b64\u5904\u9700\u8981\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.meth.cant.have.body"_s),
			$of(u"\u63a5\u53e3\u62bd\u8c61\u65b9\u6cd5\u4e0d\u80fd\u5e26\u6709\u4e3b\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.not.allowed.here"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.A.key"_s),
			$of(u"\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f\u9009\u9879 \'\'{0}\'\' \u4e2d\u7684\u5173\u952e\u5b57\u4e0d\u662f\u4ee5\u70b9\u5206\u9694\u7684\u6807\u8bc6\u7b26\u5e8f\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.accessor.method.in.record"_s),
			$of(u"\u8bb0\u5f55 {0} \u4e2d\u7684\u5b58\u53d6\u65b9\u6cd5\u65e0\u6548\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.annotation.member.type"_s),
			$of(u"\u6ce8\u91ca\u7c7b\u578b\u5143\u7d20\u7684\u7c7b\u578b\u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.binary.number"_s),
			$of(u"\u4e8c\u8fdb\u5236\u6570\u5b57\u4e2d\u5fc5\u987b\u5305\u542b\u81f3\u5c11\u4e00\u4e2a\u4e8c\u8fdb\u5236\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.canonical.constructor.in.record"_s),
			$of(u"\u8bb0\u5f55 {1} \u4e2d\u7684 {0} \u6784\u9020\u5668\u65e0\u6548\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.flag"_s),
			$of(u"\u65e0\u6548\u7684\u6807\u8bb0: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.hex.number"_s),
			$of(u"\u5341\u516d\u8fdb\u5236\u6570\u5b57\u5fc5\u987b\u5305\u542b\u81f3\u5c11\u4e00\u4f4d\u5341\u516d\u8fdb\u5236\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.lambda.parameter.declaration"_s),
			$of(u"\u65e0\u6548\u7684 lambda \u53c2\u6570\u58f0\u660e\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.meth.decl.ret.type.req"_s),
			$of(u"\u65b9\u6cd5\u58f0\u660e\u65e0\u6548; \u9700\u8981\u8fd4\u56de\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.module.directive"_s),
			$of(u"\u9884\u671f\u4e3a\u6a21\u5757\u6307\u4ee4\u5173\u952e\u5b57\u6216 \'\'}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.module.specifier"_s),
			$of(u"\u4e0d\u5141\u8bb8\u6a21\u5757\u8bf4\u660e\u7b26: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.mref"_s),
			$of(u"{0}\u5f15\u7528\u65e0\u6548\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.path"_s),
			$of(u"\u65e0\u6548\u6587\u4ef6\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.permits.clause"_s),
			$of(u"\u65e0\u6548\u7684 permits \u5b50\u53e5\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.profile"_s),
			$of(u"\u65e0\u6548\u7684\u914d\u7f6e\u6587\u4ef6\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation"_s),
			$of(u"\u6ce8\u91ca\u91cd\u590d: \u4f7f\u7528\u65e0\u6548\u7684 @Repeatable \u6ce8\u91ca\u5bf9{0}\u8fdb\u884c\u4e86\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.elem.nondefault"_s),
			$of(u"\u5bf9\u4e8e\u5143\u7d20 {1}, \u5305\u542b\u6ce8\u91ca\u7c7b\u578b ({0}) \u6ca1\u6709\u9ed8\u8ba4\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.incompatible.target"_s),
			$of(u"\u5305\u542b\u6ce8\u91ca\u7c7b\u578b ({0}) \u9002\u7528\u7684\u76ee\u6807\u591a\u4e8e\u53ef\u91cd\u590d\u6ce8\u91ca\u7c7b\u578b ({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.invalid.value"_s),
			$of(u"{0}\u4e0d\u662f\u6709\u6548\u7684 @Repeatable: \u503c\u5143\u7d20\u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.multiple.values"_s),
			$of(u"{0}\u4e0d\u662f\u6709\u6548\u7684 @Repeatable, \u5df2\u58f0\u660e {1} \u4e2a\u540d\u4e3a \'\'value\'\' \u7684\u5143\u7d20\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.no.value"_s),
			$of(u"{0}\u4e0d\u662f\u6709\u6548\u7684 @Repeatable, \u672a\u58f0\u660e\u4efb\u4f55\u503c\u5143\u7d20\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.applicable"_s),
			$of(u"\u5bb9\u5668{0}\u4e0d\u9002\u7528\u4e8e\u5143\u7d20 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.applicable.in.context"_s),
			$of(u"\u5bb9\u5668{0}\u5728\u6b64\u7c7b\u578b\u4e0a\u4e0b\u6587\u4e2d\u4e0d\u9002\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.documented"_s),
			$of(u"\u53ef\u91cd\u590d\u6ce8\u91ca\u7c7b\u578b ({1}) \u662f @Documented, \u800c\u5305\u542b\u6ce8\u91ca\u7c7b\u578b ({0}) \u5219\u4e0d\u662f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.inherited"_s),
			$of(u"\u53ef\u91cd\u590d\u6ce8\u91ca\u7c7b\u578b ({1}) \u662f @Inherited, \u800c\u5305\u542b\u6ce8\u91ca\u7c7b\u578b ({0}) \u5219\u4e0d\u662f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.repeated.and.container.present"_s),
			$of(u"\u5bb9\u5668 {0} \u4e0d\u5f97\u4e0e\u5176\u5305\u542b\u7684\u5143\u7d20\u540c\u65f6\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.retention"_s),
			$of(u"\u5305\u542b\u6ce8\u91ca\u7c7b\u578b ({0}) \u7684\u4fdd\u7559\u671f\u77ed\u4e8e\u53ef\u91cd\u590d\u6ce8\u91ca\u7c7b\u578b ({2}) \u7684\u4fdd\u7559\u671f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.value.return"_s),
			$of(u"\u5305\u542b\u6ce8\u91ca\u7c7b\u578b ({0}) \u5fc5\u987b\u58f0\u660e\u7c7b\u578b{2}\u7684\u540d\u4e3a \'\'value\'\' \u7684\u5143\u7d20"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.source"_s),
			$of(u"\u65e0\u6548\u7684\u6e90\u53d1\u884c\u7248\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.supertype.record"_s),
			$of(u"\u7c7b\u65e0\u6cd5\u76f4\u63a5\u6269\u5c55 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.target"_s),
			$of(u"\u65e0\u6548\u7684\u76ee\u6807\u53d1\u884c\u7248\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.yield"_s),
			$of(u"\u53d7\u9650\u6807\u8bc6\u7b26 \'\'yield\'\' \u7684\u7528\u6cd5\u65e0\u6548\n\uff08\u8981\u8c03\u7528\u79f0\u4e3a yield \u7684\u65b9\u6cd5\uff0c\u8bf7\u901a\u8fc7\u63a5\u6536\u65b9\u6216\u7c7b\u578b\u540d\u79f0\u9650\u5b9a yield\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.io.exception"_s),
			$of(u"\u8bfb\u53d6\u6e90\u6587\u4ef6\u65f6\u51fa\u9519: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.is.preview"_s),
			$of(u"{0} \u662f\u67d0\u9884\u89c8\u529f\u80fd\u4e2d\u7684\u4e00\u4e2a API"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.label.already.in.use"_s),
			$of(u"\u6807\u7b7e{0}\u5df2\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.lambda.body.neither.value.nor.void.compatible"_s),
			$of(u"lambda \u4e3b\u4f53\u4e0d\u662f\u503c, \u4e5f\u4e0d\u4e0e void \u517c\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.code"_s),
			$of(u"\u4ee3\u7801\u8fc7\u957f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.code.too.large.for.try.stmt"_s),
			$of(u"try \u8bed\u53e5\u7684\u4ee3\u7801\u8fc7\u957f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.dimensions"_s),
			$of(u"\u6570\u7ec4\u7c7b\u578b\u7ef4\u8fc7\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.locals"_s),
			$of(u"\u672c\u5730\u53d8\u91cf\u8fc7\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.parameters"_s),
			$of(u"\u53c2\u6570\u8fc7\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.pool"_s),
			$of(u"\u5e38\u91cf\u8fc7\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.pool.in.class"_s),
			$of(u"\u7c7b{0}\u4e2d\u7684\u5e38\u91cf\u8fc7\u591a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.stack"_s),
			$of(u"\u4ee3\u7801\u9700\u8981\u8fc7\u591a\u5806\u6808"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.string"_s),
			$of(u"\u5e38\u91cf\u5b57\u7b26\u4e32\u8fc7\u957f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.string.overflow"_s),
			$of(u"\u5bf9\u4e8e\u5e38\u91cf\u6c60\u6765\u8bf4, \u5b57\u7b26\u4e32 \"{0}...\" \u7684 UTF8 \u8868\u793a\u8fc7\u957f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.classes.cant.extend.sealed"_s),
			$of(u"{0} \u7c7b\u4e0d\u5f97\u6269\u5c55\u5bc6\u5c01\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.enum"_s),
			$of(u"\u679a\u4e3e\u7c7b\u578b\u4e0d\u80fd\u4e3a\u672c\u5730\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.var.accessed.from.icls.needs.final"_s),
			$of(u"\u4ece\u5185\u90e8\u7c7b\u4e2d\u8bbf\u95ee\u672c\u5730\u53d8\u91cf{0}; \u9700\u8981\u88ab\u58f0\u660e\u4e3a\u6700\u7ec8\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.bad.module-info"_s),
			$of(u"\u8bfb\u53d6 {0} \u4e2d\u7684 module-info.class \u65f6\u51fa\u73b0\u95ee\u9898"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.get.module.name.for.jar"_s),
			$of(u"\u65e0\u6cd5\u786e\u5b9a {0} \u7684\u6a21\u5757\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.read.directory"_s),
			$of(u"\u65e0\u6cd5\u8bfb\u53d6\u76ee\u5f55 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.read.file"_s),
			$of(u"\u65e0\u6cd5\u8bfb\u53d6\u6587\u4ef6 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.invalid.arg.for.xpatch"_s),
			$of(u"--patch-module \u9009\u9879\u7684\u53c2\u6570\u65e0\u6548: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.module-info.not.allowed.on.patch.path"_s),
			$of(u"\u5728\u8865\u4e01\u7a0b\u5e8f\u8def\u5f84\u4e2d\u4e0d\u5141\u8bb8 module-info.class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.malformed.fp.lit"_s),
			$of(u"\u6d6e\u70b9\u6587\u5b57\u7684\u683c\u5f0f\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.match.binding.exists"_s),
			$of(u"\u5c1d\u8bd5\u91cd\u65b0\u5b9a\u4e49\u73b0\u6709\u7684\u5339\u914d\u7ed1\u5b9a\uff0c\u8fd9\u662f\u975e\u6cd5\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.method.does.not.override.superclass"_s),
			$of(u"\u65b9\u6cd5\u4e0d\u4f1a\u8986\u76d6\u6216\u5b9e\u73b0\u8d85\u7c7b\u578b\u7684\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.missing.meth.body.or.decl.abstract"_s),
			$of(u"\u7f3a\u5c11\u65b9\u6cd5\u4e3b\u4f53, \u6216\u58f0\u660e\u62bd\u8c61"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.missing.ret.stmt"_s),
			$of(u"\u7f3a\u5c11\u8fd4\u56de\u8bed\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.mod.not.allowed.here"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528\u4fee\u9970\u7b26{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.modifier.not.allowed.here"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528\u4fee\u9970\u7b26{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.decl.sb.in.module-info.java"_s),
			$of(u"\u6a21\u5757\u58f0\u660e\u5e94\u8be5\u5728\u540d\u4e3a module-info.java \u7684\u6587\u4ef6\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.name.mismatch"_s),
			$of(u"\u6a21\u5757\u540d\u79f0 {0} \u4e0e\u9884\u671f\u540d\u79f0 {1} \u4e0d\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.non.zero.opens"_s),
			$of(u"\u6253\u5f00\u7684\u6a21\u5757 {0} \u5177\u6709\u975e\u96f6 opens_count"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found"_s),
			$of(u"\u627e\u4e0d\u5230\u6a21\u5757: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found.in.module.source.path"_s),
			$of(u"\u5728\u6a21\u5757\u6e90\u8def\u5f84\u4e2d\u627e\u4e0d\u5230\u6a21\u5757 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found.on.module.source.path"_s),
			$of(u"\u5728\u6a21\u5757\u6e90\u8def\u5f84\u4e2d\u627e\u4e0d\u5230\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.modulesourcepath.must.be.specified.with.dash.m.option"_s),
			$of(u"\u5982\u679c\u4f7f\u7528 -m \u9009\u9879, \u5219\u5fc5\u987b\u6307\u5b9a\u6a21\u5757\u6e90\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multi-module.outdir.cannot.be.exploded.module"_s),
			$of(u"\u5728\u591a\u6a21\u5757\u6a21\u5f0f\u4e0b, \u8f93\u51fa\u76ee\u5f55\u4e0d\u80fd\u662f\u5c55\u5f00\u7684\u6a21\u5757: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multicatch.parameter.may.not.be.assigned"_s),
			$of(u"\u53ef\u80fd\u672a\u5206\u914d multi-catch \u53c2\u6570{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multicatch.types.must.be.disjoint"_s),
			$of(u"multi-catch \u8bed\u53e5\u4e2d\u7684\u66ff\u4ee3\u65e0\u6cd5\u901a\u8fc7\u5b50\u7c7b\u5316\u5173\u8054\n\u66ff\u4ee3{0}\u662f\u66ff\u4ee3{1}\u7684\u5b50\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multiple.values.for.module.source.path"_s),
			$of(u"\u4f7f\u7528\u6a21\u5f0f\u53c2\u6570\u591a\u6b21\u6307\u5b9a\u4e86 --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure"_s),
			$of(u"\u540d\u79f0\u51b2\u7a81: {0}\u548c{1}\u5177\u6709\u76f8\u540c\u7591\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.hide"_s),
			$of(u"\u540d\u79f0\u51b2\u7a81: {1} \u4e2d\u7684 {0} \u548c {3} \u4e2d\u7684 {2} \u5177\u6709\u76f8\u540c\u7591\u7b26, \u4f46\u4e24\u8005\u5747\u4e0d\u9690\u85cf\u5bf9\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.override"_s),
			$of(u"\u540d\u79f0\u51b2\u7a81: {2} \u4e2d\u7684 {0}({1}) \u548c {5} \u4e2d\u7684 {3}({4}) \u5177\u6709\u76f8\u540c\u7591\u7b26, \u4f46\u4e24\u8005\u5747\u4e0d\u8986\u76d6\u5bf9\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.override.1"_s),
			$of(u"\u540d\u79f0\u51b2\u7a81: {0} {1} \u7684\u4e24\u79cd\u65b9\u6cd5\u5177\u6709\u76f8\u540c\u7684\u7591\u7b26, \u4f46\u4e24\u8005\u5747\u4e0d\u8986\u76d6\u5bf9\u65b9\n\u7b2c\u4e00\u79cd\u65b9\u6cd5: {4} \u4e2d\u7684 {2}({3})\n\u7b2c\u4e8c\u79cd\u65b9\u6cd5: {7} \u4e2d\u7684 {5}({6})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.reserved.for.internal.use"_s),
			$of(u"{0}\u4e3a\u5185\u90e8\u4f7f\u7528\u4fdd\u7559"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.native.meth.cant.have.body"_s),
			$of(u"\u672c\u673a\u65b9\u6cd5\u4e0d\u80fd\u5e26\u6709\u4e3b\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.new.not.allowed.in.annotation"_s),
			$of(u"\u6ce8\u91ca\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528 \'\'new\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.annotation.member"_s),
			$of(u"{1}\u4e2d\u6ca1\u6709\u6ce8\u91ca\u6210\u5458{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.annotations.on.dot.class"_s),
			$of(u"\u7c7b\u6587\u5b57\u7c7b\u578b\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u4efb\u4f55\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.encl.instance.of.type.in.scope"_s),
			$of(u"\u4f5c\u7528\u57df\u4e2d\u6ca1\u6709\u7c7b\u578b\u4e3a{0}\u7684\u5c01\u95ed\u5b9e\u4f8b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.intf.expected.here"_s),
			$of(u"\u6b64\u5904\u4e0d\u9700\u8981\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.match.entry"_s),
			$of(u"{0}\u5728{1}\u7684\u6761\u76ee\u4e2d\u6ca1\u6709\u5339\u914d\u9879; \u9700\u8981{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.opens.unless.strong"_s),
			$of(u"\u53ea\u5141\u8bb8\u5728\u5f3a\u6a21\u5757\u4e2d\u4f7f\u7528 \'\'opens\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.output.dir"_s),
			$of(u"\u672a\u6307\u5b9a\u7c7b\u8f93\u51fa\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.pkg.in.module-info.java"_s),
			$of(u"\u6587\u4ef6 module-info.java \u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u7a0b\u5e8f\u5305\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.source.files"_s),
			$of(u"\u65e0\u6e90\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.source.files.classes"_s),
			$of(u"\u65e0\u6e90\u6587\u4ef6\u6216\u7c7b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.superclass"_s),
			$of(u"{0}\u4e0d\u5177\u6709\u8d85\u7c7b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.switch.expression"_s),
			$of(u"yield \u5728 switch \u8868\u8fbe\u5f0f\u5916\u90e8"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.switch.expression.qualify"_s),
			$of(u"yield \u5728 switch \u8868\u8fbe\u5f0f\u5916\u90e8\n\uff08\u8981\u8c03\u7528\u79f0\u4e3a yield \u7684\u65b9\u6cd5\uff0c\u8bf7\u901a\u8fc7\u63a5\u6536\u65b9\u6216\u7c7b\u578b\u540d\u79f0\u9650\u5b9a yield\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.value.for.option"_s),
			$of(u"{0} \u9009\u9879\u6ca1\u6709\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.zipfs.for.archive"_s),
			$of(u"\u6ca1\u6709\u4efb\u4f55\u6587\u4ef6\u7cfb\u7edf\u63d0\u4f9b\u65b9\u53ef\u5904\u7406\u6b64\u6587\u4ef6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non-static.cant.be.ref"_s),
			$of(u"\u65e0\u6cd5\u4ece\u9759\u6001\u4e0a\u4e0b\u6587\u4e2d\u5f15\u7528\u975e\u9759\u6001 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.or.sealed.expected"_s),
			$of(u"\u9700\u8981\u5bc6\u5c01\u6216\u975e\u5bc6\u5c01\u4fee\u9970\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.sealed.or.final.expected"_s),
			$of(u"\u9700\u8981\u5bc6\u5c01\u3001\u975e\u5bc6\u5c01\u6216\u6700\u7ec8\u4fee\u9970\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.with.no.sealed.supertype"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528\u975e\u5bc6\u5c01\u4fee\u9970\u7b26\n\uff08\u7c7b {0} \u4e0d\u5177\u6709\u4efb\u4f55\u5bc6\u5c01\u7684\u8d85\u7c7b\u578b\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.annotation.type"_s),
			$of(u"{0}\u4e0d\u662f\u6ce8\u91ca\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.class.intf.cant.access"_s),
			$of(u"{1}.{0} \u662f\u5728\u4e0d\u53ef\u8bbf\u95ee\u7684\u7c7b\u6216\u63a5\u53e3\u4e2d\u5b9a\u4e49\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.class.intf.cant.access.reason"_s),
			$of(u"\u7a0b\u5e8f\u5305 {2} \u4e2d\u7684 {1}.{0} \u4e0d\u53ef\u8bbf\u95ee\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.package.cant.access"_s),
			$of(u"{0} \u4e0d\u53ef\u89c1\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.public"_s),
			$of(u"{0} \u5728 {1} \u4e2d\u4e0d\u662f\u516c\u5171\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.public.cant.access"_s),
			$of(u"{0}\u5728{1}\u4e2d\u4e0d\u662f\u516c\u5171\u7684; \u65e0\u6cd5\u4ece\u5916\u90e8\u7a0b\u5e8f\u5305\u4e2d\u5bf9\u5176\u8fdb\u884c\u8bbf\u95ee"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.encl.class"_s),
			$of(u"\u4e0d\u662f\u5c01\u95ed\u7c7b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.exhaustive"_s),
			$of(u"switch \u8868\u8fbe\u5f0f\u4e0d\u5305\u542b\u6240\u6709\u53ef\u80fd\u7684\u8f93\u5165\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.in.module.on.module.source.path"_s),
			$of(u"\u4e0d\u5728\u6a21\u5757\u6e90\u8def\u5f84\u4e0a\u7684\u6a21\u5757\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.in.profile"_s),
			$of(u"{0}\u5728\u914d\u7f6e\u6587\u4ef6 \'\'{1}\'\' \u4e2d\u4e0d\u53ef\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.loop.label"_s),
			$of(u"\u4e0d\u662f loop \u6807\u7b7e: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.stmt"_s),
			$of(u"\u4e0d\u662f\u8bed\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.within.bounds"_s),
			$of(u"\u7c7b\u578b\u53c2\u6570{0}\u4e0d\u5728\u7c7b\u578b\u53d8\u91cf{1}\u7684\u8303\u56f4\u5185"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.operator.cant.be.applied"_s),
			$of(u"\u4e00\u5143\u8fd0\u7b97\u7b26 \'\'{0}\'\' \u7684\u64cd\u4f5c\u6570\u7c7b\u578b{1}\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.operator.cant.be.applied.1"_s),
			$of(u"\u4e8c\u5143\u8fd0\u7b97\u7b26 \'\'{0}\'\' \u7684\u64cd\u4f5c\u6570\u7c7b\u578b\u9519\u8bef\n\u7b2c\u4e00\u4e2a\u7c7b\u578b:  {1}\n\u7b2c\u4e8c\u4e2a\u7c7b\u578b: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.not.allowed.with.target"_s),
			$of(u"\u76ee\u6807 {1} \u4e0d\u5141\u8bb8\u9009\u9879 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.removed.source"_s),
			$of(u"\u4e0d\u518d\u652f\u6301\u6e90\u9009\u9879 {0}\u3002\u8bf7\u4f7f\u7528 {1} \u6216\u66f4\u9ad8\u7248\u672c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.removed.target"_s),
			$of(u"\u4e0d\u518d\u652f\u6301\u76ee\u6807\u9009\u9879 {0}\u3002\u8bf7\u4f7f\u7528 {1} \u6216\u66f4\u9ad8\u7248\u672c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.too.many"_s),
			$of(u"\u9009\u9879 {0} \u53ea\u80fd\u6307\u5b9a\u4e00\u6b21"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.orphaned"_s),
			$of(u"\u5b64\u7acb\u7684{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.output.dir.must.be.specified.with.dash.m.option"_s),
			$of(u"\u5982\u679c\u4f7f\u7528 -m \u9009\u9879, \u5219\u5fc5\u987b\u6307\u5b9a\u7c7b\u8f93\u51fa\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.incompatible.ret"_s),
			$of(u"{0}\n\u8fd4\u56de\u7c7b\u578b{1}\u4e0e{2}\u4e0d\u517c\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.meth"_s),
			$of(u"{0}\n\u88ab\u8986\u76d6\u7684\u65b9\u6cd5\u4e3a{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.meth.doesnt.throw"_s),
			$of(u"{0}\n\u88ab\u8986\u76d6\u7684\u65b9\u6cd5\u672a\u629b\u51fa{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.static"_s),
			$of(u"{0}\n\u8986\u76d6\u7684\u65b9\u6cd5\u4e3a static"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.weaker.access"_s),
			$of(u"{0}\n\u6b63\u5728\u5c1d\u8bd5\u5206\u914d\u66f4\u4f4e\u7684\u8bbf\u95ee\u6743\u9650; \u4ee5\u524d\u4e3a{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.clash.from.requires"_s),
			$of(u"\u6a21\u5757 {0} \u540c\u65f6\u4ece {2} \u548c {3} \u8bfb\u53d6\u7a0b\u5e8f\u5305 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.clash.from.requires.in.unnamed"_s),
			$of(u"\u672a\u547d\u540d\u7684\u6a21\u5757\u540c\u65f6\u4ece {1} \u548c {2} \u8bfb\u53d6\u7a0b\u5e8f\u5305 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.empty.or.not.found"_s),
			$of(u"\u7a0b\u5e8f\u5305\u4e3a\u7a7a\u6216\u4e0d\u5b58\u5728: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.in.other.module"_s),
			$of(u"\u7a0b\u5e8f\u5305\u5df2\u5b58\u5728\u4e8e\u53e6\u4e00\u4e2a\u6a21\u5757\u4e2d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.not.visible"_s),
			$of(u"\u7a0b\u5e8f\u5305 {0} \u4e0d\u53ef\u89c1\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pkg.annotations.sb.in.package-info.java"_s),
			$of(u"\u7a0b\u5e8f\u5305\u6ce8\u91ca\u5e94\u5728\u6587\u4ef6 package-info.java \u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pkg.clashes.with.class.of.same.name"_s),
			$of(u"\u7a0b\u5e8f\u5305{0}\u4e0e\u5e26\u6709\u76f8\u540c\u540d\u79f0\u7684\u7c7b\u51b2\u7a81"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.plugin.not.found"_s),
			$of(u"\u627e\u4e0d\u5230\u63d2\u4ef6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.premature.eof"_s),
			$of(u"\u8fdb\u884c\u8bed\u6cd5\u5206\u6790\u65f6\u5df2\u5230\u8fbe\u6587\u4ef6\u7ed3\u5c3e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled"_s),
			$of(u"{0} \u662f\u9884\u89c8\u529f\u80fd\uff0c\u9ed8\u8ba4\u60c5\u51b5\u4e0b\u7981\u7528\u3002\n\uff08\u8bf7\u4f7f\u7528 --enable-preview \u4ee5\u542f\u7528 {0}\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled.classfile"_s),
			$of(u"{0} \u7684\u7c7b\u6587\u4ef6\u4f7f\u7528 Java SE {1} \u7684\u9884\u89c8\u529f\u80fd\u3002\n\uff08\u8bf7\u4f7f\u7528 --enable-preview \u4ee5\u5141\u8bb8\u52a0\u8f7d\u5305\u542b\u9884\u89c8\u529f\u80fd\u7684\u7c7b\u6587\u4ef6\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled.plural"_s),
			$of(u"{0} \u662f\u9884\u89c8\u529f\u80fd\uff0c\u9ed8\u8ba4\u60c5\u51b5\u4e0b\u7981\u7528\u3002\n\uff08\u8bf7\u4f7f\u7528 --enable-preview \u4ee5\u542f\u7528 {0}\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.not.latest"_s),
			$of(u"\u6e90\u53d1\u884c\u7248 {0} \u4e0e --enable-preview \u4e00\u8d77\u4f7f\u7528\u65f6\u65e0\u6548\n\uff08\u4ec5\u53d1\u884c\u7248 {1} \u652f\u6301\u9884\u89c8\u8bed\u8a00\u529f\u80fd\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.without.source.or.release"_s),
			$of(u"--enable-preview \u5fc5\u987b\u4e0e -source \u6216 --release \u4e00\u8d77\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.prob.found.req"_s),
			$of(u"\u4e0d\u517c\u5bb9\u7684\u7c7b\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.bad.config.file"_s),
			$of(u"\u670d\u52a1\u914d\u7f6e\u6587\u4ef6\u4e0d\u6b63\u786e, \u6216\u6784\u9020\u5904\u7406\u7a0b\u5e8f\u5bf9\u8c61{0}\u65f6\u629b\u51fa\u5f02\u5e38\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.access"_s),
			$of(u"\u65e0\u6cd5\u8bbf\u95ee{0}\n{1}\n\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u53c2\u9605\u4ee5\u4e0b\u5806\u6808\u8ddf\u8e2a\u3002\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.access.1"_s),
			$of(u"\u65e0\u6cd5\u8bbf\u95ee{0}\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.create.loader"_s),
			$of(u"\u65e0\u6cd5\u4e3a\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f{0}\u521b\u5efa\u7c7b\u52a0\u8f7d\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.find.class"_s),
			$of(u"\u627e\u4e0d\u5230 \'\'{0}\'\' \u7684\u7c7b\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.load.class"_s),
			$of(u"\u7531\u4e8e \'\'{0}\'\'\uff0c\u65e0\u6cd5\u52a0\u8f7d\u5904\u7406\u5668\u7c7b\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.no.explicit.annotation.processing.requested"_s),
			$of(u"\u4ec5\u5f53\u663e\u5f0f\u8bf7\u6c42\u6ce8\u91ca\u5904\u7406\u65f6\u624d\u63a5\u53d7\u7c7b\u540d\u79f0 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.no.service"_s),
			$of(u"ServiceLoader \u4e0d\u53ef\u7528, \u4f46\u5b83\u662f\u6ce8\u91ca\u5904\u7406\u6240\u5fc5\u9700\u7684\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.bad.option.name"_s),
			$of(u"\u5904\u7406\u7a0b\u5e8f \'\'{1}\'\' \u63d0\u4f9b\u7684\u9009\u9879\u540d\u79f0 \'\'{0}\'\' \u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.cant.instantiate"_s),
			$of(u"\u65e0\u6cd5\u5b9e\u4f8b\u5316\u5904\u7406\u7a0b\u5e8f \'\'{0}\'\' \u7684\u5b9e\u4f8b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.not.found"_s),
			$of(u"\u627e\u4e0d\u5230\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.wrong.type"_s),
			$of(u"\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f \'\'{0}\'\' \u672a\u5b9e\u73b0 javax.annotation.processing.Processor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.service.problem"_s),
			$of(u"\u521b\u5efa\u670d\u52a1\u52a0\u8f7d\u5668\u4ee5\u52a0\u8f7d\u5904\u7406\u7a0b\u5e8f\u65f6\u51fa\u9519\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.processorpath.no.processormodulepath"_s),
			$of(u"-processorpath \u4e0e --processor-module-path \u7684\u7ec4\u5408\u975e\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.profile.bootclasspath.conflict"_s),
			$of(u"\u6982\u8981\u4fe1\u606f\u548c\u5f15\u5bfc\u7c7b\u8def\u5f84\u9009\u9879\u4e0d\u80fd\u540c\u65f6\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.qualified.new.of.static.class"_s),
			$of(u"\u9650\u5b9a\u7684\u65b0\u9759\u6001\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.receiver.parameter.not.applicable.constructor.toplevel.class"_s),
			$of(u"\u63a5\u6536\u65b9\u53c2\u6570\u4e0d\u9002\u7528\u4e8e\u9876\u5c42\u7c7b\u7684\u6784\u9020\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.cannot.declare.instance.fields"_s),
			$of(u"\u5b57\u6bb5\u58f0\u660e\u5fc5\u987b\u4e3a\u9759\u6001\n\uff08\u8003\u8651\u5c06\u5b57\u6bb5\u66ff\u6362\u4e3a\u8bb0\u5f55\u7ec4\u4ef6\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.cant.declare.field.modifiers"_s),
			$of(u"\u8bb0\u5f55\u7ec4\u4ef6\u4e0d\u80fd\u5177\u6709\u9650\u5b9a\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.component.and.old.array.syntax"_s),
			$of(u"\u8bb0\u5f55\u7ec4\u4ef6\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u4f20\u7edf\u6570\u7ec4\u8bb0\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.header.expected"_s),
			$of(u"\u9700\u8981\u8bb0\u5f55\u6807\u5934"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.recursive.ctor.invocation"_s),
			$of(u"\u9012\u5f52\u6784\u9020\u5668\u8c03\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.ref.ambiguous"_s),
			$of(u"\u5bf9{0}\u7684\u5f15\u7528\u4e0d\u660e\u786e\n{3} \u4e2d\u7684{1} {2} \u548c {6} \u4e2d\u7684{4} {5} \u90fd\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.release.bootclasspath.conflict"_s),
			$of(u"\u9009\u9879 {0} \u4e0d\u80fd\u4e0e --release \u4e00\u8d77\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.annotation.target"_s),
			$of(u"\u6ce8\u91ca\u76ee\u6807\u91cd\u590d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.interface"_s),
			$of(u"\u63a5\u53e3\u91cd\u590d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.modifier"_s),
			$of(u"\u4fee\u9970\u7b26\u91cd\u590d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.provides.for.service"_s),
			$of(u"\u670d\u52a1 {0} \u6709\u591a\u4e2a \'\'provides\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.value.for.module.source.path"_s),
			$of(u"\u4e3a\u6a21\u5757 {0} \u591a\u6b21\u6307\u5b9a\u4e86 --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.value.for.patch.module"_s),
			$of(u"\u4e3a\u6a21\u5757 {0} \u591a\u6b21\u6307\u5b9a\u4e86 --patch-module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.report.access"_s),
			$of(u"{0} \u5728 {2} \u4e2d\u662f {1} \u8bbf\u95ee\u63a7\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.req.arg"_s),
			$of(u"{0} \u9700\u8981\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528 \'\'{0}\'\'\n\u4ece\u53d1\u884c\u7248 {1} \u5f00\u59cb\uff0c\'\'{0}\'\' \u662f\u53d7\u9650\u7c7b\u578b\u540d\u79f0\uff0c\u4e0d\u80fd\u7528\u4e8e\u7c7b\u578b\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.array"_s),
			$of(u"\'\'{0}\'\' \u4e0d\u5141\u8bb8\u7528\u4f5c\u6570\u7ec4\u7684\u5143\u7d20\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.compound"_s),
			$of(u"\'\'{0}\'\' \u4e0d\u5141\u8bb8\u5728\u590d\u5408\u58f0\u660e\u4e2d\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.here"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.ret.outside.meth"_s),
			$of(u"\u8fd4\u56de\u5916\u90e8\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.return.outside.switch.expression"_s),
			$of(u"\u5c1d\u8bd5\u4ece switch \u8868\u8fbe\u5f0f\u8fd4\u56de"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.rule.completes.normally"_s),
			$of(u"switch \u89c4\u5219\u5b8c\u7ed3\u4f46\u6ca1\u6709\u63d0\u4f9b\u503c\n\uff08switch \u8868\u8fbe\u5f0f\u4e2d\u7684 switch \u89c4\u5219\u5fc5\u987b\u63d0\u4f9b\u503c\u6216\u629b\u51fa\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.same.binary.name"_s),
			$of(u"\u7c7b\uff1a{0} \u548c {1} \u5177\u6709\u76f8\u540c\u7684\u4e8c\u8fdb\u5236\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sealed.class.must.have.subclasses"_s),
			$of(u"\u5bc6\u5c01\u7c7b\u5fc5\u987b\u5177\u6709\u5b50\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sealed.or.non.sealed.local.classes.not.allowed"_s),
			$of(u"\u4e0d\u5141\u8bb8\u4f7f\u7528\u5bc6\u5c01\u6216\u975e\u5bc6\u5c01\u672c\u5730\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.definition.is.enum"_s),
			$of(u"\u670d\u52a1\u5b9a\u4e49\u662f\u679a\u4e3e: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.doesnt.have.a.no.args.constructor"_s),
			$of(u"\u670d\u52a1\u5b9e\u73b0\u6ca1\u6709\u9ed8\u8ba4\u7684\u6784\u9020\u5668: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.is.abstract"_s),
			$of(u"\u670d\u52a1\u5b9e\u73b0\u662f\u62bd\u8c61\u7c7b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.is.inner"_s),
			$of(u"\u670d\u52a1\u5b9e\u73b0\u662f\u5185\u90e8\u7c7b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.must.be.subtype.of.service.interface"_s),
			$of(u"\u670d\u52a1\u5b9e\u73b0\u7c7b\u578b\u5fc5\u987b\u662f\u670d\u52a1\u63a5\u53e3\u7c7b\u578b\u7684\u5b50\u7c7b\u578b, \u6216\u8005\u5177\u6709\u540d\u4e3a \"provider\" \u7684, \u8fd4\u56de\u670d\u52a1\u5b9e\u73b0\u7684\u516c\u5171\u9759\u6001\u65e0\u53c2\u6570\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.no.args.constructor.not.public"_s),
			$of(u"\u670d\u52a1\u5b9e\u73b0\u7684\u65e0\u53c2\u6570\u6784\u9020\u5668\u4e0d\u662f\u516c\u5171\u6784\u9020\u5668: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.not.in.right.module"_s),
			$of(u"\u5fc5\u987b\u5728\u4e0e provides \u6307\u4ee4\u76f8\u540c\u7684\u6a21\u5757\u4e2d\u5b9a\u4e49\u670d\u52a1\u5b9e\u73b0"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.provider.return.must.be.subtype.of.service.interface"_s),
			$of(u"\"provider\" \u65b9\u6cd5\u8fd4\u56de\u7c7b\u578b\u5fc5\u987b\u662f\u670d\u52a1\u63a5\u53e3\u7c7b\u578b\u7684\u5b50\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.signature.doesnt.match.intf"_s),
			$of(u"\u7b7e\u540d\u4e0e{0}\u4e0d\u5339\u914d; \u4e0d\u517c\u5bb9\u7684\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.signature.doesnt.match.supertype"_s),
			$of(u"\u7b7e\u540d\u4e0e{0}\u4e0d\u5339\u914d; \u4e0d\u517c\u5bb9\u7684\u8d85\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.source.cant.overwrite.input.file"_s),
			$of(u"\u5199\u5165\u6e90\u65f6\u51fa\u9519; \u65e0\u6cd5\u8986\u76d6\u8f93\u5165\u6587\u4ef6{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sourcepath.modulesourcepath.conflict"_s),
			$of(u"\u65e0\u6cd5\u540c\u65f6\u6307\u5b9a --source-path \u4e0e --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.stack.sim.error"_s),
			$of(u"\u5185\u90e8\u9519\u8bef: {0}\u4e2d\u7684\u5806\u6808 sim \u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.declaration.not.allowed.in.inner.classes"_s),
			$of(u"\u5185\u90e8\u7c7b\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u9759\u6001\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.imp.only.classes.and.interfaces"_s),
			$of(u"\u4ec5\u4ece\u7c7b\u548c\u63a5\u53e3\u9759\u6001\u5bfc\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.methods.cannot.be.annotated.with.override"_s),
			$of(u"\u4e0d\u80fd\u4f7f\u7528 @Override \u6ce8\u91ca\u9759\u6001\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.string.const.req"_s),
			$of(u"\u9700\u8981\u5e38\u91cf\u5b57\u7b26\u4e32\u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.case.unexpected.statement"_s),
			$of(u"case \u4e2d\u5b58\u5728\u610f\u5916\u8bed\u53e5\uff0c\u5e94\u4e3a\u8868\u8fbe\u5f0f\u3001\u5757\u6216\u629b\u51fa\u8bed\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.completes.normally"_s),
			$of(u"switch \u8868\u8fbe\u5f0f\u5b8c\u7ed3\u4f46\u6ca1\u6709\u63d0\u4f9b\u503c\n\uff08switch \u8868\u8fbe\u5f0f\u5fc5\u987b\u4e3a\u6240\u6709\u53ef\u80fd\u7684\u8f93\u5165\u503c\u63d0\u4f9b\u503c\u6216\u629b\u51fa\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.empty"_s),
			$of(u"switch \u8868\u8fbe\u5f0f\u4e2d\u6ca1\u6709\u4efb\u4f55 case \u5b50\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.no.result.expressions"_s),
			$of(u"switch \u8868\u8fbe\u5f0f\u6ca1\u6709\u4efb\u4f55\u7ed3\u679c\u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.mixing.case.types"_s),
			$of(u"\u5728 switch \u4e2d\u4f7f\u7528\u4e86\u4e0d\u540c case \u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.null.not.allowed"_s),
			$of(u"case \u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u7a7a\u6807\u7b7e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.this.as.identifier"_s),
			$of(u"\u4ece\u53d1\u884c\u7248 8 \u5f00\u59cb\uff0c\'\'this\'\' \u53ea\u80fd\u4f5c\u4e3a\u63a5\u6536\u65b9\u7c7b\u578b\u7684\u53c2\u6570\u540d\uff0c\n\u8be5\u53c2\u6570\u5fc5\u987b\u4e3a\u7b2c\u4e00\u4e2a\u53c2\u6570\uff0c\u5e76\u4e14\u4e0d\u80fd\u662f lambda \u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.throws.not.allowed.in.intf.annotation"_s),
			$of(u"@interface \u6210\u5458\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528 throws \u5b50\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.too.many.modules"_s),
			$of(u"\u627e\u5230\u592a\u591a\u7684\u6a21\u5757\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.too.many.patched.modules"_s),
			$of(u"\u592a\u591a\u6253\u8865\u4e01\u7684\u6a21\u5757 ({0}), \u8bf7\u4f7f\u7528 --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.resource.may.not.be.assigned"_s),
			$of(u"\u53ef\u80fd\u672a\u5206\u914d\u53ef\u81ea\u52a8\u5173\u95ed\u7684\u8d44\u6e90{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.with.resources.expr.effectively.final.var"_s),
			$of(u"\u7528\u4f5c try-with-resources \u8d44\u6e90\u7684\u53d8\u91cf {0} \u65e2\u4e0d\u662f\u6700\u7ec8\u53d8\u91cf, \u4e5f\u4e0d\u662f\u5b9e\u9645\u4e0a\u7684\u6700\u7ec8\u53d8\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.with.resources.expr.needs.var"_s),
			$of(u"try-with-resources \u8d44\u6e90\u5fc5\u987b\u662f\u53d8\u91cf\u58f0\u660e, \u6216\u8005\u662f\u6307\u793a\u5bf9\u6700\u7ec8\u53d8\u91cf\u6216\u5b9e\u9645\u4e0a\u7684\u6700\u7ec8\u53d8\u91cf\u7684\u5f15\u7528\u7684\u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.without.catch.finally.or.resource.decls"_s),
			$of(u"\'\'try\'\' \u4e0d\u5e26\u6709 \'\'catch\'\', \'\'finally\'\' \u6216\u8d44\u6e90\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.two.class.loaders.1"_s),
			$of(u"javac \u5728\u591a\u4e2a\u7c7b\u52a0\u8f7d\u5668\u4e4b\u95f4\u62c6\u5206: \u8bf7\u68c0\u67e5\u914d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.two.class.loaders.2"_s),
			$of(u"javac \u5728\u591a\u4e2a\u7c7b\u52a0\u8f7d\u5668\u4e4b\u95f4\u62c6\u5206:\n\u4e00\u4e2a\u7c7b\u6765\u81ea\u6587\u4ef6: {0}\n\u800c javac \u6765\u81ea {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.doesnt.take.params"_s),
			$of(u"\u7c7b\u578b{0}\u4e0d\u5e26\u6709\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.found.req"_s),
			$of(u"\u610f\u5916\u7684\u7c7b\u578b\n\u9700\u8981: {1}\n\u627e\u5230:    {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.cant.be.deref"_s),
			$of(u"\u65e0\u6cd5\u4ece\u7c7b\u578b\u53d8\u91cf\u4e2d\u8fdb\u884c\u9009\u62e9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.may.not.be.followed.by.other.bounds"_s),
			$of(u"\u7c7b\u578b\u53d8\u91cf\u540e\u9762\u4e0d\u80fd\u5e26\u6709\u5176\u4ed6\u9650\u5236\u8303\u56f4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.more.than.once"_s),
			$of(u"\u7c7b\u578b\u53d8\u91cf{0}\u5728{1}\u7684\u7ed3\u679c\u7c7b\u578b\u4e2d\u591a\u6b21\u51fa\u73b0; \u5fc5\u987b\u5bf9\u5176\u8fdb\u884c\u5b9e\u4f8b\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.more.than.once.in.result"_s),
			$of(u"\u7c7b\u578b\u53d8\u91cf{0}\u5728{1}\u7684\u7c7b\u578b\u4e2d\u591a\u6b21\u51fa\u73b0; \u5fc5\u987b\u5bf9\u5176\u8fdb\u884c\u5b9e\u4f8b\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.types.incompatible"_s),
			$of(u"\u7c7b\u578b {0} \u548c {1} \u4e0d\u517c\u5bb9\uff1b\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.char.lit"_s),
			$of(u"\u672a\u7ed3\u675f\u7684\u5b57\u7b26\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.comment"_s),
			$of(u"\u672a\u7ed3\u675f\u7684\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.str.lit"_s),
			$of(u"\u672a\u7ed3\u675f\u7684\u5b57\u7b26\u4e32\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.text.block"_s),
			$of(u"\u6587\u672c\u5757\u672a\u95ed\u5408"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.undef.label"_s),
			$of(u"\u672a\u5b9a\u4e49\u7684\u6807\u7b7e: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.underscore.as.identifier"_s),
			$of(u"\u4ece\u53d1\u884c\u7248 9 \u5f00\u59cb, \'\'_\'\' \u4e3a\u5173\u952e\u5b57, \u4e0d\u80fd\u7528\u4f5c\u6807\u8bc6\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.underscore.as.identifier.in.lambda"_s),
			$of(u"\'\'_\'\' \u7528\u4f5c\u6807\u8bc6\u7b26\n(\u5bf9\u4e8e lambda \u53c2\u6570, \u7981\u6b62\u5c06 \'\'_\'\' \u7528\u4f5c\u6807\u8bc6\u7b26)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.lambda"_s),
			$of(u"\u6b64\u5904\u4e0d\u5e94\u4e3a lambda \u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.mref"_s),
			$of(u"\u6b64\u5904\u4e0d\u5e94\u4e3a\u65b9\u6cd5\u5f15\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.type"_s),
			$of(u"\u610f\u5916\u7684\u7c7b\u578b\n\u9700\u8981: {0}\n\u627e\u5230:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unmatched.quote"_s),
			$of(u"\u73af\u5883\u53d8\u91cf {0} \u4e2d\u7684\u5f15\u53f7\u4e0d\u6210\u5bf9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unnamed.pkg.not.allowed.named.modules"_s),
			$of(u"\u547d\u540d\u6a21\u5757\u4e2d\u4e0d\u5141\u8bb8\u672a\u547d\u540d\u7a0b\u5e8f\u5305"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreachable.stmt"_s),
			$of(u"\u65e0\u6cd5\u8bbf\u95ee\u7684\u8bed\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.default.constructor"_s),
			$of(u"\u9ed8\u8ba4\u6784\u9020\u5668\u4e2d\u672a\u62a5\u544a\u7684\u5f02\u5e38\u9519\u8bef{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.implicit.close"_s),
			$of(u"\u672a\u62a5\u544a\u7684\u5f02\u5e38\u9519\u8bef{0}; \u5fc5\u987b\u5bf9\u5176\u8fdb\u884c\u6355\u83b7\u6216\u58f0\u660e\u4ee5\u4fbf\u629b\u51fa\n\u5bf9\u8d44\u6e90\u53d8\u91cf \'\'{1}\'\' \u9690\u5f0f\u8c03\u7528 close() \u65f6\u629b\u51fa\u4e86\u5f02\u5e38\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.need.to.catch.or.throw"_s),
			$of(u"\u672a\u62a5\u544a\u7684\u5f02\u5e38\u9519\u8bef{0}; \u5fc5\u987b\u5bf9\u5176\u8fdb\u884c\u6355\u83b7\u6216\u58f0\u660e\u4ee5\u4fbf\u629b\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unsupported.encoding"_s),
			$of(u"\u4e0d\u652f\u6301\u7684\u7f16\u7801: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unsupported.release.version"_s),
			$of(u"\u4e0d\u652f\u6301\u53d1\u884c\u7248\u672c {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.already.be.assigned"_s),
			$of(u"\u53ef\u80fd\u5df2\u5206\u914d\u53d8\u91cf{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.be.assigned.in.loop"_s),
			$of(u"\u53ef\u80fd\u5728 loop \u4e2d\u5206\u914d\u4e86\u53d8\u91cf{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.not.have.been.initialized"_s),
			$of(u"\u53ef\u80fd\u5c1a\u672a\u521d\u59cb\u5316\u53d8\u91cf{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.not.initialized.in.default.constructor"_s),
			$of(u"\u53d8\u91cf {0} \u672a\u5728\u9ed8\u8ba4\u6784\u9020\u5668\u4e2d\u521d\u59cb\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.and.old.array.syntax"_s),
			$of(u"variable-arity \u53c2\u6570\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u4f20\u7edf\u6570\u7ec4\u8bb0\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.and.receiver"_s),
			$of(u"\u63a5\u6536\u65b9\u53c2\u6570\u4e0d\u5141\u8bb8\u4f7f\u7528 varargs \u8bb0\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.invalid.trustme.anno"_s),
			$of(u"{0} \u6ce8\u91ca\u65e0\u6548\u3002{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.must.be.last"_s),
			$of(u"varargs \u53c2\u6570\u5fc5\u987b\u662f\u6700\u540e\u4e00\u4e2a\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.variable.not.allowed"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528\u53d8\u91cf\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.void.not.allowed.here"_s),
			$of(u"\u6b64\u5904\u4e0d\u5141\u8bb8\u4f7f\u7528 \'\'\u7a7a\'\' \u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.warnings.and.werror"_s),
			$of(u"\u53d1\u73b0\u8b66\u544a, \u4f46\u6307\u5b9a\u4e86 -Werror"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.wrong.number.type.args"_s),
			$of(u"\u7c7b\u578b\u53d8\u91cf\u6570\u76ee\u9519\u8bef; \u9700\u8981{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.wrong.receiver"_s),
			$of(u"\u9519\u8bef\u7684\u63a5\u6536\u65b9\u53c2\u6570\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.cant.throw.exception"_s),
			$of(u"\u5bf9\u4e8e\u5b58\u53d6\u65b9\u6cd5\u4e0d\u5141\u8bb8\u4f7f\u7528 throws \u5b50\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.must.not.be.generic"_s),
			$of(u"\u5b58\u53d6\u65b9\u6cd5\u4e0d\u80fd\u4e3a\u6cdb\u578b\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.must.not.be.static"_s),
			$of(u"\u5b58\u53d6\u65b9\u6cd5\u4e0d\u80fd\u4e3a\u9759\u6001\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.return.type.doesnt.match"_s),
			$of(u"\u5b58\u53d6\u65b9\u6cd5 {0} \u7684\u8fd4\u56de\u7c7b\u578b\u5fc5\u987b\u4e0e\u8bb0\u5f55\u7ec4\u4ef6 {1} \u7684\u7c7b\u578b\u76f8\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anachronistic.module.info"_s),
			$of(u"\u5728 {0}.{1} \u7248\u7c7b\u6587\u4ef6\u4e2d\u627e\u5230\u6a21\u5757\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anonymous"_s),
			$of(u"\u533f\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anonymous.class"_s),
			$of(u"<\u533f\u540d{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found"_s),
			$of(u"\u627e\u5230\u7b2c {0} \u4e2a\u9002\u7528\u65b9\u6cd5: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found.1"_s),
			$of(u"\u627e\u5230\u7b2c {0} \u4e2a\u9002\u7528\u65b9\u6cd5: {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.arg.length.mismatch"_s),
			$of(u"\u5b9e\u9645\u53c2\u6570\u5217\u8868\u548c\u5f62\u5f0f\u53c2\u6570\u5217\u8868\u957f\u5ea6\u4e0d\u540c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.file"_s),
			$of(u"\u7c7b\u6587\u4ef6\u5bf9\u4e8e\u7c7b {0} \u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.file.header"_s),
			$of(u"\u9519\u8bef\u7684\u7c7b\u6587\u4ef6: {0}\n{1}\n\u8bf7\u5220\u9664\u8be5\u6587\u4ef6\u6216\u786e\u4fdd\u8be5\u6587\u4ef6\u4f4d\u4e8e\u6b63\u786e\u7684\u7c7b\u8def\u5f84\u5b50\u76ee\u5f55\u4e2d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.signature"_s),
			$of(u"\u9519\u8bef\u7684\u7c7b\u7b7e\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.entry"_s),
			$of(u"{0} \u4e2d\u9519\u8bef\u7684\u5e38\u91cf\u6c60\u6761\u76ee\n\u9884\u671f\u4e3a\u7d22\u5f15 {2} \u5904\u7684 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.index"_s),
			$of(u"{0} \u4e2d\u7684\u5e38\u91cf\u6c60\u7d22\u5f15\u9519\u8bef\n\u7d22\u5f15 {1} \u4e0d\u5728\u6c60\u5927\u5c0f {2} \u5185\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.tag"_s),
			$of(u"\u9519\u8bef\u7684\u5e38\u91cf\u6c60\u6807\u8bb0: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.tag.at"_s),
			$of(u"\u9519\u8bef\u7684\u5e38\u91cf\u6c60\u6807\u8bb0: {0}, \u4f4d\u4e8e{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.range"_s),
			$of(u"{1} \u7684\u5e38\u91cf\u503c \'\'{0}\'\' \u8d85\u51fa\u4e86 {2} \u7684\u9884\u671f\u8303\u56f4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.value"_s),
			$of(u"{1} \u7684\u5e38\u91cf\u503c \'\'{0}\'\' \u9519\u8bef, \u9884\u671f\u4e3a {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.value.type"_s),
			$of(u"\'\'{0}\'\' \u7c7b\u578b\u7684\u53d8\u91cf\u4e0d\u80fd\u5177\u6709\u5e38\u91cf\u503c\uff0c\u4f46\u662f\u4e3a\u5176\u6307\u5b9a\u4e86\u4e00\u4e2a\u5e38\u91cf\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.enclosing.class"_s),
			$of(u"{0}\u7684\u5c01\u95ed\u7c7b\u9519\u8bef: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.enclosing.method"_s),
			$of(u"\u7c7b {0} \u7684\u5c01\u95ed\u65b9\u6cd5\u5c5e\u6027\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.instance.method.in.unbound.lookup"_s),
			$of(u"\u5728\u672a\u7ed1\u5b9a\u67e5\u627e\u4e2d\u627e\u5230\u610f\u5916\u7684\u5b9e\u4f8b {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.intersection.target.for.functional.expr"_s),
			$of(u"lambda \u6216\u65b9\u6cd5\u5f15\u7528\u7684\u4ea4\u53c9\u7c7b\u578b\u76ee\u6807\u9519\u8bef\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.module-info.name"_s),
			$of(u"\u9519\u8bef\u7684\u7c7b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.requires.flag"_s),
			$of(u"\u9519\u8bef\u7684\u8bf7\u6c42\u6807\u8bb0\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.runtime.invisible.param.annotations"_s),
			$of(u"\u9519\u8bef\u7684 RuntimeInvisibleParameterAnnotations \u5c5e\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.signature"_s),
			$of(u"\u9519\u8bef\u7684\u7b7e\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.source.file.header"_s),
			$of(u"\u9519\u8bef\u7684\u6e90\u6587\u4ef6: {0}\n{1}\n\u8bf7\u5220\u9664\u8be5\u6587\u4ef6\u6216\u786e\u4fdd\u8be5\u6587\u4ef6\u4f4d\u4e8e\u6b63\u786e\u7684\u6e90\u8def\u5f84\u5b50\u76ee\u5f55\u4e2d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.static.method.in.bound.lookup"_s),
			$of(u"\u5728\u7ed1\u5b9a\u67e5\u627e\u4e2d\u627e\u5230\u610f\u5916\u7684\u9759\u6001 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.static.method.in.unbound.lookup"_s),
			$of(u"\u5728\u672a\u7ed1\u5b9a\u67e5\u627e\u4e2d\u627e\u5230\u610f\u5916\u7684\u9759\u6001 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.type.annotation.value"_s),
			$of(u"\u9519\u8bef\u7684\u7c7b\u578b\u6ce8\u91ca\u76ee\u6807\u7c7b\u578b\u503c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.base.membership"_s),
			$of(u"\u60a8\u7684\u6240\u6709\u57fa\u7c7b\u90fd\u5c5e\u4e8e\u6211\u4eec"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical"_s),
			$of(u"\u89c4\u8303"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.cant.have.return.statement"_s),
			$of(u"\u7cbe\u7b80\u6784\u9020\u5668\u4e0d\u5f97\u5305\u542b\u8fd4\u56de\u8bed\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.contain.explicit.constructor.invocation"_s),
			$of(u"\u89c4\u8303\u6784\u9020\u5668\u4e0d\u5f97\u5305\u542b\u663e\u5f0f\u6784\u9020\u5668\u8c03\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.declare.type.variables"_s),
			$of(u"\u89c4\u8303\u6784\u9020\u5668\u4e0d\u5f97\u58f0\u660e\u7c7b\u578b\u53d8\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.have.stronger.access"_s),
			$of(u"\u6b63\u5728\u5c1d\u8bd5\u5206\u914d\u66f4\u5f3a\u7684\u8bbf\u95ee\u6743\u9650\uff1b\u4ee5\u524d\u4e3a {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.with.name.mismatch"_s),
			$of(u"\u89c4\u8303\u6784\u9020\u5668\u4e2d\u7684\u53c2\u6570\u540d\u79f0\u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.access.inner.cls.constr"_s),
			$of(u"\u65e0\u6cd5\u8bbf\u95ee\u6784\u9020\u5668 {0}({1})\n\u4f5c\u7528\u57df\u4e2d\u6ca1\u6709\u7c7b\u578b\u4e3a{2}\u7684\u5c01\u95ed\u5b9e\u4f8b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.diamond.1"_s),
			$of(u"\u65e0\u6cd5\u63a8\u65ad{0}\u7684\u7c7b\u578b\u53c2\u6570\n\u539f\u56e0: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.symbol"_s),
			$of(u"\u65e0\u6cd5\u5c06 {4} {5}\u4e2d\u7684 {0} {1}\u5e94\u7528\u5230\u7ed9\u5b9a\u7c7b\u578b\n\u9700\u8981: {2}\n\u627e\u5230:    {3}\n\u539f\u56e0: {6}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.symbols"_s),
			$of(u"\u5bf9\u4e8e{1}({2}), \u627e\u4e0d\u5230\u5408\u9002\u7684{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.hide"_s),
			$of(u"{1} \u4e2d\u7684 {0} \u65e0\u6cd5\u9690\u85cf {3} \u4e2d\u7684 {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.implement"_s),
			$of(u"{1}\u4e2d\u7684{0}\u65e0\u6cd5\u5b9e\u73b0{3}\u4e2d\u7684{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.override"_s),
			$of(u"{1}\u4e2d\u7684{0}\u65e0\u6cd5\u8986\u76d6{3}\u4e2d\u7684{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.args"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7: {0} {1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.location.args"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7:   {0} {1}({3})\n\u4f4d\u7f6e: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.location.args.params"_s),
			$of(u"\u627e\u4e0d\u5230\u7b26\u53f7\n\u7b26\u53f7:   {0} <{2}>{1}({3})\n\u4f4d\u7f6e: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.modules"_s),
			$of(u"\u65e0\u6cd5\u89e3\u6790\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.captured.type"_s),
			$of("CAP#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.clashes.with"_s),
			$of(u"{1}\u4e2d\u7684{0}\u4e0e{3}\u4e2d\u7684{2}\u51b2\u7a81"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.file.not.found"_s),
			$of(u"\u627e\u4e0d\u5230{0}\u7684\u7c7b\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.file.wrong.class"_s),
			$of(u"\u7c7b\u6587\u4ef6\u5305\u542b\u9519\u8bef\u7684\u7c7b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.is.not.sealed"_s),
			$of(u"\u5fc5\u987b\u5bc6\u5c01 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.compact"_s),
			$of(u"\u7cbe\u7b80"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.conditional.target.cant.be.void"_s),
			$of(u"\u6761\u4ef6\u8868\u8fbe\u5f0f\u7684\u76ee\u6807\u7c7b\u578b\u4e0d\u80fd\u4e3a\u7a7a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error"_s),
			$of(u"{0} \u4e2a\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error.plural"_s),
			$of(u"{0} \u4e2a\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error.recompile"_s),
			$of(u"\u4ec5\u663e\u793a\u524d {0} \u4e2a\u9519\u8bef\uff08\u5171 {1} \u4e2a\uff09\uff1b\u82e5\u8981\u67e5\u770b\u66f4\u591a\u9519\u8bef\uff0c\u8bf7\u4f7f\u7528 -Xmaxerrs"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn"_s),
			$of(u"{0} \u4e2a\u8b66\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn.plural"_s),
			$of(u"{0} \u4e2a\u8b66\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn.recompile"_s),
			$of(u"\u4ec5\u663e\u793a\u524d {0} \u4e2a\u8b66\u544a\uff08\u5171 {1} \u4e2a\uff09\uff1b\u82e5\u8981\u67e5\u770b\u66f4\u591a\u9519\u8bef\uff0c\u8bf7\u4f7f\u7528 -Xmaxwarns"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.descriptor"_s),
			$of(u"\u63cf\u8ff0\u7b26: {2} {0}({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.descriptor.throws"_s),
			$of(u"\u63cf\u8ff0\u7b26: {2} {0}({1}) \u629b\u51fa{3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond"_s),
			$of("{0}<>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.and.explicit.params"_s),
			$of(u"\u4e0d\u80fd\u5c06 \'\'<>\'\' \u4e0e\u6784\u9020\u5668\u7684\u663e\u5f0f\u7c7b\u578b\u53c2\u6570\u4e00\u8d77\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.anonymous.methods.implicitly.override"_s),
			$of(u"(\u7531\u4e8e <>, \u533f\u540d\u7c7b\u4e2d\u58f0\u660e\u7684\u6bcf\u4e2a\u975e\u79c1\u6709\u65b9\u6cd5\u5fc5\u987b\u8986\u76d6\u6216\u5b9e\u73b0\u8d85\u7c7b\u578b\u4e2d\u7684\u65b9\u6cd5)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.invalid.arg"_s),
			$of(u"\u6b64\u4e0a\u4e0b\u6587\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u4e3a{1}\u63a8\u65ad\u7684\u7c7b\u578b\u53c2\u6570{0}\n\u63a8\u65ad\u53c2\u6570\u5728\u7b7e\u540d\u5c5e\u6027\u4e2d\u65e0\u6cd5\u8868\u8fbe"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.invalid.args"_s),
			$of(u"\u6b64\u4e0a\u4e0b\u6587\u4e2d\u4e0d\u5141\u8bb8\u4f7f\u7528\u4e3a{1}\u63a8\u65ad\u7684\u7c7b\u578b\u53c2\u6570{0}\n\u63a8\u65ad\u53c2\u6570\u5728\u7b7e\u540d\u5c5e\u6027\u4e2d\u65e0\u6cd5\u8868\u8fbe"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.non.generic"_s),
			$of(u"\u65e0\u6cd5\u5c06 \'\'<>\'\' \u4e0e\u975e\u6cdb\u578b\u7c7b{0}\u4e00\u8d77\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.doesnt.extend.sealed"_s),
			$of(u"\u5b50\u7c7b {0} \u5fc5\u987b\u6269\u5c55\u5bc6\u5c01\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.eq.bounds"_s),
			$of(u"\u7b49\u5f0f\u7ea6\u675f\u6761\u4ef6\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.exception.message"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.explicit.param.do.not.conform.to.bounds"_s),
			$of(u"\u663e\u5f0f\u7c7b\u578b\u53c2\u6570{0}\u4e0d\u7b26\u5408\u58f0\u660e\u7684\u8303\u56f4{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.close"_s),
			$of(u"\u81f4\u547d\u9519\u8bef: \u65e0\u6cd5\u5173\u95ed\u7f16\u8bd1\u5668\u8d44\u6e90"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.ctor"_s),
			$of(u"\u81f4\u547d\u9519\u8bef: \u627e\u4e0d\u5230{0}\u7684\u6784\u9020\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.field"_s),
			$of(u"\u81f4\u547d\u9519\u8bef: \u627e\u4e0d\u5230\u5b57\u6bb5{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.meth"_s),
			$of(u"\u81f4\u547d\u9519\u8bef: \u627e\u4e0d\u5230\u65b9\u6cd5{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.no.java.lang"_s),
			$of(u"\u81f4\u547d\u9519\u8bef: \u5728\u7c7b\u8def\u5f84\u6216\u5f15\u5bfc\u7c7b\u8def\u5f84\u4e2d\u627e\u4e0d\u5230\u7a0b\u5e8f\u5305 java.lang"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.annotations.after.type.params"_s),
			$of(u"\u5728\u65b9\u6cd5\u7c7b\u578b\u53c2\u6570\u4e4b\u540e\u7684\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.default.methods"_s),
			$of(u"\u9ed8\u8ba4\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.diamond"_s),
			$of(u"diamond \u8fd0\u7b97\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.diamond.and.anon.class"_s),
			$of(u"\'\'<>\'\' \u5177\u6709\u533f\u540d\u7684\u5185\u90e8\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.intersection.types.in.cast"_s),
			$of(u"\u4ea4\u53c9\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.lambda"_s),
			$of(u"lambda \u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.method.references"_s),
			$of(u"\u65b9\u6cd5\u5f15\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.modules"_s),
			$of(u"\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.multiple.case.labels"_s),
			$of(u"\u591a\u4e2a case \u6807\u7b7e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.not.supported.in.source"_s),
			$of(u"-source {1} \u4e2d\u4e0d\u652f\u6301 {0}\n(\u8bf7\u4f7f\u7528 -source {2} \u6216\u66f4\u9ad8\u7248\u672c\u4ee5\u542f\u7528 {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.not.supported.in.source.plural"_s),
			$of(u"-source {1} \u4e2d\u4e0d\u652f\u6301 {0}\n(\u8bf7\u4f7f\u7528 -source {2} \u6216\u66f4\u9ad8\u7248\u672c\u4ee5\u542f\u7528 {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.pattern.matching.instanceof"_s),
			$of(u"instanceof \u4e2d\u7684\u6a21\u5f0f\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.private.intf.methods"_s),
			$of(u"\u79c1\u6709\u63a5\u53e3\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.records"_s),
			$of(u"\u8bb0\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.reifiable.types.instanceof"_s),
			$of(u"instanceof \u4e2d\u7684\u53ef\u5177\u4f53\u5316\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.repeatable.annotations"_s),
			$of(u"\u91cd\u590d\u7684\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.sealed.classes"_s),
			$of(u"\u5bc6\u5c01\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.static.intf.method.invoke"_s),
			$of(u"\u9759\u6001\u63a5\u53e3\u65b9\u6cd5\u8c03\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.static.intf.methods"_s),
			$of(u"\u9759\u6001\u63a5\u53e3\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.switch.expressions"_s),
			$of(u"switch \u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.switch.rules"_s),
			$of(u"switch \u89c4\u5219"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.text.blocks"_s),
			$of(u"\u6587\u672c\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.type.annotations"_s),
			$of(u"\u7c7b\u578b\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.var.in.try.with.resources"_s),
			$of(u"try-with-resources \u4e2d\u7684\u53d8\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.var.syntax.in.implicit.lambda"_s),
			$of(u"\u9690\u5f0f lambda \u4e2d\u7684 var \u8bed\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.does.not.contain.module"_s),
			$of(u"\u6587\u4ef6\u4e0d\u5305\u542b\u6a21\u5757\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.does.not.contain.package"_s),
			$of(u"\u6587\u4ef6\u4e0d\u5305\u542b\u7a0b\u5e8f\u5305{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.doesnt.contain.class"_s),
			$of(u"\u6587\u4ef6\u4e0d\u5305\u542b\u7c7b{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.illegal.signature"_s),
			$of(u"\u7c7b\u578b {1} \u7684\u7b7e\u540d\u5c5e\u6027\u975e\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.illegal.start.of.class.file"_s),
			$of(u"\u975e\u6cd5\u7684\u7c7b\u6587\u4ef6\u5f00\u59cb"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.implicit.and.explicit.not.allowed"_s),
			$of(u"\u4e0d\u80fd\u5c06\u9690\u5f0f\u7c7b\u578b\u548c\u663e\u5f0f\u7c7b\u578b\u7684\u53c2\u6570\u6df7\u5408\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inaccessible.varargs.type"_s),
			$of(u"\u5f62\u5f0f varargs \u5143\u7d20\u7c7b\u578b{0}\u65e0\u6cd5\u4ece {1} {2} \u8fdb\u884c\u8bbf\u95ee"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inapplicable.method"_s),
			$of(u"{0} {1}.{2}\u4e0d\u9002\u7528\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.abstract.default"_s),
			$of(u"{0} {1}\u4ece\u7c7b\u578b {4} \u548c {5} \u4e2d\u7ee7\u627f\u4e86{2}({3}) \u7684\u62bd\u8c61\u548c\u9ed8\u8ba4\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.abstracts"_s),
			$of(u"\u5728 {0} {1} \u4e2d\u627e\u5230\u591a\u4e2a\u975e\u8986\u76d6\u62bd\u8c61\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.arg.types.in.lambda"_s),
			$of(u"lambda \u8868\u8fbe\u5f0f\u4e2d\u7684\u53c2\u6570\u7c7b\u578b\u4e0d\u517c\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.arg.types.in.mref"_s),
			$of(u"\u65b9\u6cd5\u5f15\u7528\u4e2d\u7684\u53c2\u6570\u7c7b\u578b\u4e0d\u517c\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.bounds"_s),
			$of(u"\u63a8\u8bba\u53d8\u91cf {0} \u5177\u6709\u4e0d\u517c\u5bb9\u7684\u4e0a\u9650\n{1}\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.descs.in.functional.intf"_s),
			$of(u"\u5728 {0} {1} \u4e2d\u627e\u5230\u4e0d\u517c\u5bb9\u7684\u51fd\u6570\u63cf\u8ff0\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.diff.ret"_s),
			$of(u"\u4e24\u8005\u90fd\u5b9a\u4e49\u4e86 {0}({1})\uff0c\u4f46\u5374\u5e26\u6709\u4e0d\u76f8\u5173\u7684\u8fd4\u56de\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.eq.bounds"_s),
			$of(u"\u63a8\u8bba\u53d8\u91cf{0}\u5177\u6709\u4e0d\u517c\u5bb9\u7684\u7b49\u5f0f\u7ea6\u675f\u6761\u4ef6{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.ret.type.in.lambda"_s),
			$of(u"lambda \u8868\u8fbe\u5f0f\u4e2d\u7684\u8fd4\u56de\u7c7b\u578b\u9519\u8bef\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.ret.type.in.mref"_s),
			$of(u"\u65b9\u6cd5\u5f15\u7528\u4e2d\u7684\u8fd4\u56de\u7c7b\u578b\u9519\u8bef\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.type.in.conditional"_s),
			$of(u"\u6761\u4ef6\u8868\u8fbe\u5f0f\u4e2d\u7684\u7c7b\u578b\u9519\u8bef\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.type.in.switch.expression"_s),
			$of(u"switch \u8868\u8fbe\u5f0f\u4e2d\u7684\u7c7b\u578b\u9519\u8bef\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.unrelated.defaults"_s),
			$of(u"{0} {1}\u4ece\u7c7b\u578b {4} \u548c {5} \u4e2d\u7ee7\u627f\u4e86{2}({3}) \u7684\u4e0d\u76f8\u5173\u9ed8\u8ba4\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.upper.bounds"_s),
			$of(u"\u63a8\u8bba\u53d8\u91cf {0} \u5177\u6709\u4e0d\u517c\u5bb9\u7684\u4e0a\u9650 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inconvertible.types"_s),
			$of(u"{0}\u65e0\u6cd5\u8f6c\u6362\u4e3a{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.arg.length.mismatch"_s),
			$of(u"\u65e0\u6cd5\u63a8\u65ad\u7c7b\u578b\u53d8\u91cf {0}\n(\u5b9e\u9645\u53c2\u6570\u5217\u8868\u548c\u5f62\u5f0f\u53c2\u6570\u5217\u8868\u957f\u5ea6\u4e0d\u540c)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.no.conforming.assignment.exists"_s),
			$of(u"\u65e0\u6cd5\u63a8\u65ad\u7c7b\u578b\u53d8\u91cf {0}\n(\u53c2\u6570\u4e0d\u5339\u914d; {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.no.conforming.instance.exists"_s),
			$of(u"\u4e0d\u5b58\u5728\u7c7b\u578b\u53d8\u91cf{0}\u7684\u5b9e\u4f8b, \u4ee5\u4f7f{1}\u4e0e{2}\u4e00\u81f4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.varargs.argument.mismatch"_s),
			$of(u"\u65e0\u6cd5\u63a8\u65ad\u7c7b\u578b\u53d8\u91cf {0}\n(varargs \u4e0d\u5339\u914d; {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.eq.bounds"_s),
			$of(u"\u63a8\u65ad\u7c7b\u578b\u4e0d\u7b26\u5408\u7b49\u5f0f\u7ea6\u675f\u6761\u4ef6\n\u63a8\u65ad: {0}\n\u7b49\u5f0f\u7ea6\u675f\u6761\u4ef6: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.lower.bounds"_s),
			$of(u"\u63a8\u65ad\u7c7b\u578b\u4e0d\u7b26\u5408\u4e0b\u9650\n\u63a8\u65ad: {0}\n\u4e0b\u9650: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.upper.bounds"_s),
			$of(u"\u63a8\u65ad\u7c7b\u578b\u4e0d\u7b26\u5408\u4e0a\u9650\n\u63a8\u65ad: {0}\n\u4e0a\u9650: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inner.cls"_s),
			$of(u"\u5185\u90e8\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.intersection.type"_s),
			$of("INT#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.default.interface"_s),
			$of(u"\u5728 {0}.{1} \u7248\u7c7b\u6587\u4ef6\u4e2d\u627e\u5230\u9ed8\u8ba4\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.generic.lambda.target"_s),
			$of(u"lambda \u8868\u8fbe\u5f0f\u7684\u51fd\u6570\u63cf\u8ff0\u7b26\u65e0\u6548\n{1} {2} \u4e2d\u7684\u65b9\u6cd5 {0} \u4e3a\u6cdb\u578b\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.mref"_s),
			$of(u"{0}\u5f15\u7528\u65e0\u6548\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.static.interface"_s),
			$of(u"\u5728 {0}.{1} \u7248\u7c7b\u6587\u4ef6\u4e2d\u627e\u5230\u9759\u6001\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.is.a.type.variable"_s),
			$of(u"\u4e0d\u5f97\u5305\u542b\u7c7b\u578b\u53d8\u91cf\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.is.duplicated"_s),
			$of(u"\u4e0d\u5f97\u5305\u542b\u91cd\u590d\u9879\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.annotation"_s),
			$of("@interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.class"_s),
			$of(u"\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.constructor"_s),
			$of(u"\u6784\u9020\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.enum"_s),
			$of(u"\u679a\u4e3e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.instance.init"_s),
			$of(u"\u5b9e\u4f8b\u521d\u59cb\u5316\u7a0b\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.interface"_s),
			$of(u"\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.method"_s),
			$of(u"\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.module"_s),
			$of(u"\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.package"_s),
			$of(u"\u7a0b\u5e8f\u5305"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.record"_s),
			$of(u"\u8bb0\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.record.component"_s),
			$of(u"\u8bb0\u5f55\u7ec4\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.static"_s),
			$of(u"\u9759\u6001"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.static.init"_s),
			$of(u"\u9759\u6001\u521d\u59cb\u5316\u7a0b\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.type.variable"_s),
			$of(u"\u7c7b\u578b\u53d8\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.type.variable.bound"_s),
			$of(u"\u7c7b\u578b\u53d8\u91cf\u7684\u9650\u5236\u8303\u56f4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.value"_s),
			$of(u"\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.variable"_s),
			$of(u"\u53d8\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.lambda"_s),
			$of(u"lambda \u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local"_s),
			$of(u"\u672c\u5730"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.array.missing.target"_s),
			$of(u"\u6570\u7ec4\u521d\u59cb\u5316\u7a0b\u5e8f\u9700\u8981\u663e\u5f0f\u76ee\u6807\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.cant.infer.null"_s),
			$of(u"\u53d8\u91cf\u521d\u59cb\u5316\u7a0b\u5e8f\u4e3a \'\'null\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.cant.infer.void"_s),
			$of(u"\u53d8\u91cf\u521d\u59cb\u5316\u7a0b\u5e8f\u4e3a \'\'void\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.lambda.missing.target"_s),
			$of(u"lambda \u8868\u8fbe\u5f0f\u9700\u8981\u663e\u5f0f\u76ee\u6807\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.missing.init"_s),
			$of(u"\u65e0\u6cd5\u5728\u4e0d\u5e26\u521d\u59cb\u5316\u7a0b\u5e8f\u7684\u53d8\u91cf\u4e0a\u4f7f\u7528 \'\'var\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.mref.missing.target"_s),
			$of(u"\u65b9\u6cd5\u5f15\u7528\u9700\u8981\u663e\u5f0f\u76ee\u6807\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.self.ref"_s),
			$of(u"\u65e0\u6cd5\u5728\u81ea\u5f15\u7528\u53d8\u91cf\u4e0a\u4f7f\u7528 \'\'var\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.location"_s),
			$of("{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.location.1"_s),
			$of(u"\u7c7b\u578b\u4e3a{2}\u7684{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.module_path"_s),
			$of(u"\u5e94\u7528\u7a0b\u5e8f\u6a21\u5757\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.module_source_path"_s),
			$of(u"\u6a21\u5757\u6e90\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.system_modules"_s),
			$of(u"\u7cfb\u7edf\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.upgrade_module_path"_s),
			$of(u"\u5347\u7ea7\u6a21\u5757\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.lower.bounds"_s),
			$of(u"\u4e0b\u9650\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.malformed.vararg.method"_s),
			$of(u"\u7c7b\u6587\u4ef6\u5305\u542b\u683c\u5f0f\u9519\u8bef\u7684\u53d8\u91cf\u5143\u6570\u65b9\u6cd5: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.method.descriptor.invalid"_s),
			$of(u"\u65b9\u6cd5\u63cf\u8ff0\u7b26\u5bf9 {0} \u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.method.must.be.public"_s),
			$of(u"\u5b58\u53d6\u65b9\u6cd5\u5fc5\u987b\u662f\u516c\u5171\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.missing.ret.val"_s),
			$of(u"\u7f3a\u5c11\u8fd4\u56de\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.info.definition.expected"_s),
			$of(u"\u9700\u8981 module-info \u5b9a\u4e49"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.info.invalid.super.class"_s),
			$of(u"\u5e26\u6709\u65e0\u6548\u8d85\u7c7b\u7684 module-info"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.name.mismatch"_s),
			$of(u"\u6a21\u5757\u540d\u79f0 {0} \u4e0e\u9884\u671f\u540d\u79f0 {1} \u4e0d\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.non.zero.opens"_s),
			$of(u"\u6253\u5f00\u7684\u6a21\u5757 {0} \u5177\u6709\u975e\u96f6 opens_count"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.mref.infer.and.explicit.params"_s),
			$of(u"\u4e0d\u80fd\u5c06\u539f\u59cb\u6784\u9020\u5668\u5f15\u7528\u4e0e\u6784\u9020\u5668\u7684\u663e\u5f0f\u7c7b\u578b\u53c2\u6570\u4e00\u8d77\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.must.not.be.same.class"_s),
			$of(u"permits \u5b50\u53e5\u4e2d\u5b58\u5728\u975e\u6cd5\u81ea\u5f15\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.must.not.be.supertype"_s),
			$of(u"\u5bf9\u8d85\u7c7b\u578b {0} \u7684\u5f15\u7528\u975e\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.abstracts"_s),
			$of(u"\u5728 {0} {1} \u4e2d\u627e\u4e0d\u5230\u62bd\u8c61\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.args"_s),
			$of(u"\u6ca1\u6709\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.conforming.assignment.exists"_s),
			$of(u"\u53c2\u6570\u4e0d\u5339\u914d; {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.suitable.functional.intf.inst"_s),
			$of(u"\u65e0\u6cd5\u63a8\u65ad{0}\u7684\u51fd\u6570\u63a5\u53e3\u63cf\u8ff0\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.unique.maximal.instance.exists"_s),
			$of(u"\u5bf9\u4e8e\u4e0a\u9650\u4e3a{1}\u7684\u7c7b\u578b\u53d8\u91cf{0}, \u4e0d\u5b58\u5728\u552f\u4e00\u6700\u5927\u5b9e\u4f8b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.unique.minimal.instance.exists"_s),
			$of(u"\u5bf9\u4e8e\u4e0b\u9650\u4e3a{1}\u7684\u7c7b\u578b\u53d8\u91cf{0}, \u4e0d\u5b58\u5728\u552f\u4e00\u6700\u5c0f\u5b9e\u4f8b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.a.functional.intf"_s),
			$of(u"{0} \u4e0d\u662f\u51fd\u6570\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.a.functional.intf.1"_s),
			$of(u"{0} \u4e0d\u662f\u51fd\u6570\u63a5\u53e3\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.an.intf.component"_s),
			$of(u"\u7ec4\u4ef6\u7c7b\u578b{0}\u4e0d\u662f\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.applicable.method.found"_s),
			$of(u"\u627e\u5230\u7b2c {0} \u4e2a\u4e0d\u9002\u7528\u7684\u65b9\u6cd5: {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.class.intf.cant.access"_s),
			$of(u"{1}.{0} \u662f\u5728\u4e0d\u53ef\u8bbf\u95ee\u7684\u7c7b\u6216\u63a5\u53e3\u4e2d\u5b9a\u4e49\u7684"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.class.intf.cant.access.reason"_s),
			$of(u"\u7a0b\u5e8f\u5305 {2} \u4e2d\u7684 {1}.{0} \u4e0d\u53ef\u8bbf\u95ee\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read"_s),
			$of(u"\u7a0b\u5e8f\u5305 {1} \u5df2\u5728\u6a21\u5757 {2} \u4e2d\u58f0\u660e, \u4f46\u6a21\u5757 {0} \u672a\u8bfb\u53d6\u5b83"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read.from.unnamed"_s),
			$of(u"\u7a0b\u5e8f\u5305 {0} \u5df2\u5728\u6a21\u5757 {1} \u4e2d\u58f0\u660e, \u4f46\u8be5\u6a21\u5757\u4e0d\u5728\u6a21\u5757\u56fe\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read.unnamed"_s),
			$of(u"\u7a0b\u5e8f\u5305 {0} \u5df2\u5728\u672a\u547d\u540d\u6a21\u5757\u4e2d\u58f0\u660e\uff0c\u4f46\u6a21\u5757 {1} \u672a\u8bfb\u53d6\u5b83"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported"_s),
			$of(u"\u7a0b\u5e8f\u5305 {0} \u5df2\u5728\u6a21\u5757 {1} \u4e2d\u58f0\u660e, \u4f46\u8be5\u6a21\u5757\u672a\u5bfc\u51fa\u5b83"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.from.unnamed"_s),
			$of(u"\u7a0b\u5e8f\u5305 {0} \u5df2\u5728\u6a21\u5757 {1} \u4e2d\u58f0\u660e, \u4f46\u8be5\u6a21\u5757\u672a\u5bfc\u51fa\u5b83"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.to.module"_s),
			$of(u"\u7a0b\u5e8f\u5305 {0} \u5df2\u5728\u6a21\u5757 {1} \u4e2d\u58f0\u660e, \u4f46\u8be5\u6a21\u5757\u672a\u5c06\u5b83\u5bfc\u51fa\u5230\u6a21\u5757 {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.to.module.from.unnamed"_s),
			$of(u"\u7a0b\u5e8f\u5305 {0} \u5df2\u5728\u6a21\u5757 {1} \u4e2d\u58f0\u660e, \u4f46\u8be5\u6a21\u5757\u672a\u5c06\u5b83\u5bfc\u51fa\u5230\u672a\u547d\u540d\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.package.cant.access"_s),
			$of(u"{0} \u4e0d\u53ef\u89c1\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.public.cant.access"_s),
			$of(u"{0}\u5728{1}\u4e2d\u4e0d\u662f\u516c\u5171\u7684; \u65e0\u6cd5\u4ece\u5916\u90e8\u7a0b\u5e8f\u5305\u4e2d\u5bf9\u5176\u8fdb\u884c\u8bbf\u95ee"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.overridden.default"_s),
			$of(u"\u8986\u76d6\u4e86{1}\u4e2d\u7684\u65b9\u6cd5 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.package.not.visible"_s),
			$of(u"\u7a0b\u5e8f\u5305 {0} \u4e0d\u53ef\u89c1\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.partial.inst.sig"_s),
			$of(u"\u90e8\u5206\u5b9e\u4f8b\u5316\u4e3a: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.possible.loss.of.precision"_s),
			$of(u"\u4ece{0}\u8f6c\u6362\u5230{1}\u53ef\u80fd\u4f1a\u6709\u635f\u5931"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.prob.found.req"_s),
			$of(u"\u4e0d\u517c\u5bb9\u7684\u7c7b\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.redundant.supertype"_s),
			$of(u"\u5197\u4f59\u63a5\u53e3 {0} \u5df2\u7531 {1} \u6269\u5c55"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.ref.ambiguous"_s),
			$of(u"\u5bf9{0}\u7684\u5f15\u7528\u4e0d\u660e\u786e\n{3} \u4e2d\u7684{1} {2} \u548c {6} \u4e2d\u7684{4} {5} \u90fd\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.report.access"_s),
			$of(u"{0} \u5728 {2} \u4e2d\u662f {1} \u8bbf\u95ee\u63a7\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.resume.abort"_s),
			$of(u"\u7ee7\u7eed(R), \u653e\u5f03(A)>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.source.unavailable"_s),
			$of(u"(\u6e90\u4e0d\u53ef\u7528)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.stat.expr.expected"_s),
			$of(u"lambda \u4e3b\u4f53\u4e0e void \u51fd\u6570\u63a5\u53e3\u4e0d\u517c\u5bb9\n(\u8bf7\u8003\u8651\u4f7f\u7528\u5757 lambda \u4e3b\u4f53, \u6216\u8005\u6539\u4e3a\u4f7f\u7528\u8bed\u53e5\u8868\u8fbe\u5f0f)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.static.mref.with.targs"_s),
			$of(u"\u6709\u5173\u9759\u6001\u65b9\u6cd5\u5f15\u7528\u7684\u53c2\u6570\u5316\u9650\u5b9a\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.switch.expression.target.cant.be.void"_s),
			$of(u"switch \u8868\u8fbe\u5f0f\u7684\u76ee\u6807\u7c7b\u578b\u4e0d\u80fd\u4e3a\u7a7a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.synthetic.name.conflict"_s),
			$of(u"\u7b26\u53f7{0}\u4e0e{1}\u4e2d\u7684 compiler-synthesized \u7b26\u53f7\u51b2\u7a81"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.throws.clause.not.allowed.for.canonical.constructor"_s),
			$of(u"\u5bf9\u4e8e {0} \u6784\u9020\u5668\uff0c\u4e0d\u5141\u8bb8\u4f7f\u7528 throws \u5b50\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.bad-symbol"_s),
			$of(u"<\u9519\u8bef\u7b26\u53f7>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.character"_s),
			$of(u"<\u5b57\u7b26>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.double"_s),
			$of(u"<\u53cc\u7cbe\u5ea6\u578b>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.end-of-input"_s),
			$of(u"<\u8f93\u5165\u7ed3\u675f>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.float"_s),
			$of(u"<\u6d6e\u70b9\u578b>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.identifier"_s),
			$of(u"<\u6807\u8bc6\u7b26>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.integer"_s),
			$of(u"<\u6574\u578b>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.long-integer"_s),
			$of(u"<\u957f\u6574\u578b>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.string"_s),
			$of(u"<\u5b57\u7b26\u4e32>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.try.not.applicable.to.type"_s),
			$of(u"try-with-resources \u4e0d\u9002\u7528\u4e8e\u53d8\u91cf\u7c7b\u578b\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.captureof"_s),
			$of(u"capture#{0}, \u5171 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.captureof.1"_s),
			$of("capture#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.must.be.identical.to.corresponding.record.component.type"_s),
			$of(u"\u7c7b\u578b\u548c\u5143\u6570\u5fc5\u987b\u4e0e\u76f8\u5e94\u8bb0\u5f55\u7ec4\u4ef6\u7684\u7c7b\u578b\u548c\u5143\u6570\u76f8\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.none"_s),
			$of(u"<\u65e0>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.null"_s),
			$of(u"<\u7a7a\u503c>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.parameter"_s),
			$of(u"\u7c7b\u578b\u53c2\u6570{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.array.or.iterable"_s),
			$of(u"\u6570\u7ec4\u6216 java.lang.Iterable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.class"_s),
			$of(u"\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.class.array"_s),
			$of(u"\u7c7b\u6216\u6570\u7ec4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.exact"_s),
			$of(u"\u4e0d\u5e26\u9650\u5236\u8303\u56f4\u7684\u7c7b\u6216\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.ref"_s),
			$of(u"\u5f15\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.var"_s),
			$of("{0}#{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unable.to.access.file"_s),
			$of(u"\u65e0\u6cd5\u8bbf\u95ee\u6587\u4ef6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.assign"_s),
			$of(u"\u672a\u7ecf\u68c0\u67e5\u7684\u8f6c\u6362"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.cast.to.type"_s),
			$of(u"\u672a\u7ecf\u68c0\u67e5\u7684\u8f6c\u6362"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.clash.with"_s),
			$of(u"{1}\u4e2d\u7684{0}\u8986\u76d6\u4e86{3}\u4e2d\u7684{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.implement"_s),
			$of(u"{1}\u4e2d\u7684{0}\u5b9e\u73b0\u4e86{3}\u4e2d\u7684{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.override"_s),
			$of(u"{1}\u4e2d\u7684{0}\u8986\u76d6\u4e86{3}\u4e2d\u7684{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.undecl.type.var"_s),
			$of(u"\u672a\u58f0\u660e\u7684\u7c7b\u578b\u53d8\u91cf: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unexpected.const.pool.tag.at"_s),
			$of(u"\u610f\u5916\u7684\u5e38\u91cf\u6c60\u6807\u8bb0\uff1a{0}\uff0c\u4f4d\u4e8e {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unexpected.ret.val"_s),
			$of(u"\u610f\u5916\u7684\u8fd4\u56de\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unicode.str.not.supported"_s),
			$of(u"\u4e0d\u652f\u6301\u7c7b\u6587\u4ef6\u4e2d\u7684 Unicode \u5b57\u7b26\u4e32"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unnamed.module"_s),
			$of(u"\u672a\u547d\u540d\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unnamed.package"_s),
			$of(u"\u672a\u547d\u540d\u7a0b\u5e8f\u5305"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.upper.bounds"_s),
			$of(u"\u4e0b\u9650\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.user.selected.completion.failure"_s),
			$of(u"\u6309\u7c7b\u540d\u5217\u51fa\u7684\u7528\u6237\u9009\u62e9\u8f93\u5165\u63d0\u793a\u5931\u8d25"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.var.and.explicit.not.allowed"_s),
			$of(u"\u4e0d\u80fd\u5c06 \'\'var\'\' \u548c\u663e\u5f0f\u7c7b\u578b\u7684\u53c2\u6570\u6df7\u5408\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.var.and.implicit.not.allowed"_s),
			$of(u"\u4e0d\u80fd\u5c06 \'\'var\'\' \u548c\u9690\u5f0f\u7c7b\u578b\u7684\u53c2\u6570\u6df7\u5408\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.argument.mismatch"_s),
			$of(u"varargs \u4e0d\u5339\u914d; {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.clash.with"_s),
			$of(u"{1}\u4e2d\u7684{0}\u8986\u76d6\u4e86{3}\u4e2d\u7684{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.implement"_s),
			$of(u"{1}\u4e2d\u7684{0}\u5b9e\u73b0\u4e86{3}\u4e2d\u7684{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.override"_s),
			$of(u"{1}\u4e2d\u7684{0}\u8986\u76d6\u4e86{3}\u4e2d\u7684{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.non.varargs.accessor"_s),
			$of(u"\u5b58\u53d6\u65b9\u6cd5 {0} \u4e0d\u662f varargs \u65b9\u6cd5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.non.varargs.meth"_s),
			$of(u"\u65b9\u6cd5 {0} \u4e0d\u662f varargs \u65b9\u6cd5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.reifiable.varargs"_s),
			$of(u"Varargs \u5143\u7d20\u7c7b\u578b{0}\u53ef\u5177\u4f53\u5316\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.virtual.varargs"_s),
			$of(u"\u5b9e\u4f8b\u65b9\u6cd5 {0} \u65e2\u4e0d\u662f\u6700\u7ec8\u7684, \u4e5f\u4e0d\u662f\u79c1\u6709\u7684\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.virtual.varargs.final.only"_s),
			$of(u"\u5b9e\u4f8b\u65b9\u6cd5 {0} \u4e0d\u662f\u6700\u7ec8\u7684\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.checking.attribution"_s),
			$of(u"[\u6b63\u5728\u68c0\u67e5{0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.classpath"_s),
			$of(u"[\u7c7b\u6587\u4ef6\u7684\u641c\u7d22\u8def\u5f84: {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.loading"_s),
			$of(u"[\u6b63\u5728\u52a0\u8f7d{0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.parsing.done"_s),
			$of(u"[\u8bed\u6cd5\u5206\u6790\u5df2\u5b8c\u6210, \u7528\u65f6 {0} \u6beb\u79d2]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.parsing.started"_s),
			$of(u"[\u8bed\u6cd5\u5206\u6790\u5f00\u59cb\u65f6\u95f4 {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.sourcepath"_s),
			$of(u"[\u6e90\u6587\u4ef6\u7684\u641c\u7d22\u8def\u5f84: {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.total"_s),
			$of(u"[\u5171 {0} \u6beb\u79d2]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.wrote.file"_s),
			$of(u"[\u5df2\u5199\u5165{0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.version.not.available"_s),
			$of(u"(\u7248\u672c\u4fe1\u606f\u4e0d\u53ef\u7528)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.captured"_s),
			$of(u"{0}\u4ece{3}\u7684\u6355\u83b7\u6269\u5c55{1} \u8d85 {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.captured.1"_s),
			$of(u"{0}\u4ece{3}\u7684\u6355\u83b7\u6269\u5c55{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.captured"_s),
			$of(u"\u5176\u4e2d, {0}\u662f\u65b0\u7c7b\u578b\u53d8\u91cf:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.captured.1"_s),
			$of(u"\u5176\u4e2d, {0}\u662f\u65b0\u7c7b\u578b\u53d8\u91cf:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.intersection"_s),
			$of(u"\u5176\u4e2d, {0}\u662f\u4ea4\u53c9\u7c7b\u578b:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.intersection.1"_s),
			$of(u"\u5176\u4e2d, {0}\u662f\u4ea4\u53c9\u7c7b\u578b:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.typevar"_s),
			$of(u"\u5176\u4e2d, {0}\u662f\u7c7b\u578b\u53d8\u91cf:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.typevar.1"_s),
			$of(u"\u5176\u4e2d, {0}\u662f\u7c7b\u578b\u53d8\u91cf:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.fresh.typevar"_s),
			$of(u"{0}\u6269\u5c55{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.intersection"_s),
			$of(u"{0}\u6269\u5c55{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.typevar"_s),
			$of(u"{0}\u6269\u5c55\u5df2\u5728{2} {3}\u4e2d\u58f0\u660e\u7684{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.typevar.1"_s),
			$of(u"{0}\u5df2\u5728{2} {3}\u4e2d\u58f0\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.wrong.number.type.args"_s),
			$of(u"\u7c7b\u578b\u53d8\u91cf\u6570\u76ee\u9519\u8bef; \u9700\u8981{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.wrong.version"_s),
			$of(u"\u7c7b\u6587\u4ef6\u5177\u6709\u9519\u8bef\u7684\u7248\u672c {0}.{1}, \u5e94\u4e3a {2}.{3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.x.print.processor.info"_s),
			$of(u"\u5904\u7406\u7a0b\u5e8f{0}\u4e0e{1}\u5339\u914d\u5e76\u8fd4\u56de{2}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.x.print.rounds"_s),
			$of(u"\u5faa\u73af {0}:\n\t\u8f93\u5165\u6587\u4ef6: {1}\n\t\u6ce8\u91ca: {2}\n\t\u6700\u540e\u4e00\u4e2a\u5faa\u73af: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.compressed.diags"_s),
			$of(u"\u67d0\u4e9b\u6d88\u606f\u5df2\u7ecf\u8fc7\u7b80\u5316; \u8bf7\u4f7f\u7528 -Xdiags:verbose \u91cd\u65b0\u7f16\u8bd1\u4ee5\u83b7\u5f97\u5b8c\u6574\u8f93\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deferred.method.inst"_s),
			$of(u"\u65b9\u6cd5 {0} \u7684\u5ef6\u8fdf\u5b9e\u4f8b\u5316\n\u5b9e\u4f8b\u5316\u7b7e\u540d: {1}\n\u76ee\u6807\u7c7b\u578b: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.filename"_s),
			$of(u"{0}\u4f7f\u7528\u6216\u8986\u76d6\u4e86\u5df2\u8fc7\u65f6\u7684 API\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.filename.additional"_s),
			$of(u"{0}\u8fd8\u4f7f\u7528\u6216\u8986\u76d6\u4e86\u5df2\u8fc7\u65f6\u7684 API\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.plural"_s),
			$of(u"\u67d0\u4e9b\u8f93\u5165\u6587\u4ef6\u4f7f\u7528\u6216\u8986\u76d6\u4e86\u5df2\u8fc7\u65f6\u7684 API\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.plural.additional"_s),
			$of(u"\u67d0\u4e9b\u8f93\u5165\u6587\u4ef6\u8fd8\u4f7f\u7528\u6216\u8986\u76d6\u4e86\u5df2\u8fc7\u65f6\u7684 API\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.recompile"_s),
			$of(u"\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u4f7f\u7528 -Xlint:deprecation \u91cd\u65b0\u7f16\u8bd1\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.lambda.stat"_s),
			$of(u"\u8f6c\u6362 lambda \u8868\u8fbe\u5f0f\n\u66ff\u4ee3 metafactory = {0}\n\u5408\u6210\u65b9\u6cd5 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.mref.stat"_s),
			$of(u"\u8f6c\u6362\u65b9\u6cd5\u5f15\u7528\n\u66ff\u4ee3 metafactory = {0}\n"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.mref.stat.1"_s),
			$of(u"\u8f6c\u6362\u65b9\u6cd5\u5f15\u7528\n\u66ff\u4ee3 metafactory = {0}\nbridge \u65b9\u6cd5 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.multiple.elements"_s),
			$of(u"\u901a\u8fc7 javax.lang.model.util.Elements.{0} \u5728\u6a21\u5757 \'\'{2}\'\' \u4e2d\u627e\u5230\u4e86\u591a\u4e2a\u540d\u4e3a \'\'{1}\'\' \u7684\u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.note"_s),
			$of(u"\u6ce8: "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.filename"_s),
			$of(u"{0} \u4f7f\u7528\u9884\u89c8\u8bed\u8a00\u529f\u80fd\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.filename.additional"_s),
			$of(u"{0} \u8fd8\u4f7f\u7528\u9884\u89c8\u8bed\u8a00\u529f\u80fd\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.plural"_s),
			$of(u"\u67d0\u4e9b\u8f93\u5165\u6587\u4ef6\u4f7f\u7528\u9884\u89c8\u8bed\u8a00\u529f\u80fd\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.plural.additional"_s),
			$of(u"\u67d0\u4e9b\u8f93\u5165\u6587\u4ef6\u8fd8\u4f7f\u7528\u9884\u89c8\u8bed\u8a00\u529f\u80fd\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.recompile"_s),
			$of(u"\u6709\u5173\u8be6\u7ec6\u4fe1\u606f\uff0c\u8bf7\u4f7f\u7528 -Xlint:preview \u91cd\u65b0\u7f16\u8bd1\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.filename"_s),
			$of(u"{0} \u4f7f\u7528\u6216\u8986\u76d6\u4e86\u6807\u8bb0\u4e3a\u5f85\u5220\u9664\u7684\u5df2\u8fc7\u65f6 API\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.filename.additional"_s),
			$of(u"{0} \u989d\u5916\u4f7f\u7528\u6216\u8986\u76d6\u4e86\u6807\u8bb0\u4e3a\u5f85\u5220\u9664\u7684\u5df2\u8fc7\u65f6 API\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.plural"_s),
			$of(u"\u67d0\u4e9b\u8f93\u5165\u6587\u4ef6\u4f7f\u7528\u6216\u8986\u76d6\u4e86\u6807\u8bb0\u4e3a\u5f85\u5220\u9664\u7684\u5df2\u8fc7\u65f6 API\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.plural.additional"_s),
			$of(u"\u67d0\u4e9b\u8f93\u5165\u6587\u4ef6\u989d\u5916\u4f7f\u7528\u6216\u8986\u76d6\u4e86\u6807\u8bb0\u4e3a\u5f85\u5220\u9664\u7684\u5df2\u8fc7\u65f6 API\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.recompile"_s),
			$of(u"\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u4f7f\u7528 -Xlint:removal \u91cd\u65b0\u7f16\u8bd1\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.filename"_s),
			$of(u"{0}\u4f7f\u7528\u4e86\u672a\u7ecf\u68c0\u67e5\u6216\u4e0d\u5b89\u5168\u7684\u64cd\u4f5c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.filename.additional"_s),
			$of(u"{0}\u8fd8\u6709\u672a\u7ecf\u68c0\u67e5\u6216\u4e0d\u5b89\u5168\u7684\u64cd\u4f5c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.plural"_s),
			$of(u"\u67d0\u4e9b\u8f93\u5165\u6587\u4ef6\u4f7f\u7528\u4e86\u672a\u7ecf\u68c0\u67e5\u6216\u4e0d\u5b89\u5168\u7684\u64cd\u4f5c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.plural.additional"_s),
			$of(u"\u67d0\u4e9b\u8f93\u5165\u6587\u4ef6\u8fd8\u4f7f\u7528\u4e86\u672a\u7ecf\u68c0\u67e5\u6216\u4e0d\u5b89\u5168\u7684\u64cd\u4f5c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.recompile"_s),
			$of(u"\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u4f7f\u7528 -Xlint:unchecked \u91cd\u65b0\u7f16\u8bd1\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.l2m.deduplicate"_s),
			$of(u"\u6b63\u5728\u5bf9 lambda \u51fd\u6570\u5b9e\u73b0\u65b9\u6cd5 {0} \u8fdb\u884c\u91cd\u590d\u6570\u636e\u5220\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.resolve.multi"_s),
			$of(u"\u5c06\u7c7b\u578b {1} \u7684\u65b9\u6cd5 {0} \u89e3\u6790\u4e3a\u5019\u9009\u9879 {2}\n\u9636\u6bb5: {3}\n\u5177\u6709\u5b9e\u9645\u503c: {4}\n\u5177\u6709\u7c7b\u578b\u53c2\u6570: {5}\n\u5019\u9009\u9879:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.resolve.multi.1"_s),
			$of(u"\u7c7b\u578b {1} \u7684\u65b9\u6cd5 {0} \u89e3\u6790\u9519\u8bef\n\u9636\u6bb5: {3}\n\u5177\u6709\u5b9e\u9645\u503c: {4}\n\u5177\u6709\u7c7b\u578b\u53c2\u6570: {5}\n\u5019\u9009\u9879:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.access.to.member.from.serializable.element"_s),
			$of(u"\u53ef\u4e32\u884c\u5316\u5143\u7d20\u5bf9\u6210\u5458 {0} \u7684\u8bbf\u95ee\u53ef\u4ee5\u7531\u4e0d\u53d7\u4fe1\u4efb\u7684\u4ee3\u7801\u516c\u5f00\u6267\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.access.to.member.from.serializable.lambda"_s),
			$of(u"\u53ef\u4e32\u884c\u5316 lambda \u5bf9\u6210\u5458 {0} \u7684\u8bbf\u95ee\u53ef\u4ee5\u7531\u4e0d\u53d7\u4fe1\u4efb\u7684\u4ee3\u7801\u516c\u5f00\u6267\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.addopens.ignored"_s),
			$of(u"--add-opens \u5728\u7f16\u8bd1\u65f6\u6ca1\u6709\u4efb\u4f55\u6548\u679c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.annotation.method.not.found"_s),
			$of(u"\u65e0\u6cd5\u627e\u5230\u7c7b\u578b \'\'{0}\'\' \u7684\u6ce8\u91ca\u65b9\u6cd5 \'\'{1}()\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.annotation.method.not.found.reason"_s),
			$of(u"\u65e0\u6cd5\u627e\u5230\u7c7b\u578b \'\'{0}\'\' \u7684\u6ce8\u91ca\u65b9\u6cd5 \'\'{1}()\'\': {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.attempt.to.synchronize.on.instance.of.value.based.class"_s),
			$of(u"\u5c1d\u8bd5\u5728\u57fa\u4e8e\u503c\u7684\u7c7b\u7684\u5b9e\u4f8b\u4e0a\u540c\u6b65"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.auxiliary.class.accessed.from.outside.of.its.source.file"_s),
			$of(u"{1} \u4e2d\u7684\u8f85\u52a9\u7c7b{0}\u4e0d\u5e94\u4ece\u5176\u81ea\u8eab\u7684\u6e90\u6587\u4ef6\u4ee5\u5916\u8bbf\u95ee"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.bad.name.for.option"_s),
			$of(u"{0} \u9009\u9879\u7684\u503c\u4e2d\u6709\u9519\u8bef\u7684\u540d\u79f0: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.big.major.version"_s),
			$of(u"{0}: \u4e3b\u7248\u672c {1} \u6bd4 {2} \u65b0, \u6b64\u7f16\u8bd1\u5668\u652f\u6301\u6700\u65b0\u7684\u4e3b\u7248\u672c\u3002\n\u5efa\u8bae\u5347\u7ea7\u6b64\u7f16\u8bd1\u5668\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.constant.SVUID"_s),
			$of(u"serialVersionUID \u5728\u7c7b{0}\u4e2d\u5fc5\u987b\u662f\u5e38\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.deprecated.annotation.has.no.effect"_s),
			$of(u"@Deprecated \u6ce8\u91ca\u5bf9\u6b64 {0} \u58f0\u660e\u6ca1\u6709\u4efb\u4f55\u6548\u679c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.diamond.redundant.args"_s),
			$of(u"\u65b0\u8868\u8fbe\u5f0f\u4e2d\u5b58\u5728\u5197\u4f59\u7c7b\u578b\u53c2\u6570 (\u6539\u7528 diamond \u8fd0\u7b97\u7b26)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.dir.path.element.not.directory"_s),
			$of(u"\u9519\u8bef\u7684\u8def\u5f84\u5143\u7d20 \"{0}\": \u4e0d\u662f\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.dir.path.element.not.found"_s),
			$of(u"\u9519\u8bef\u7684\u8def\u5f84\u5143\u7d20 \"{0}\": \u6ca1\u6709\u8fd9\u79cd\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.div.zero"_s),
			$of(u"\u9664\u6570\u4e3a\u96f6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.empty.if"_s),
			$of(u"if \u4e4b\u540e\u6ca1\u6709\u8bed\u53e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.file.from.future"_s),
			$of(u"\u6587\u4ef6 {0} \u7684\u4fee\u6539\u65e5\u671f\u662f\u672a\u6765\u7684\u65e5\u671f"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.finally.cannot.complete"_s),
			$of(u"finally \u5b50\u53e5\u65e0\u6cd5\u6b63\u5e38\u5b8c\u6210"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.forward.ref"_s),
			$of(u"\u5148\u5f15\u7528\u53d8\u91cf \'\'{0}\'\', \u7136\u540e\u518d\u5bf9\u5176\u521d\u59cb\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.future.attr"_s),
			$of(u"{1}.{2} \u7248\u7c7b\u6587\u4ef6\u4e2d\u5f15\u5165\u7684 {0} \u5c5e\u6027\u5728 {3}.{4} \u7248\u7c7b\u6587\u4ef6\u4e2d\u88ab\u5ffd\u7565"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated"_s),
			$of(u"{1}\u4e2d\u7684{0}\u5df2\u8fc7\u65f6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.for.removal"_s),
			$of(u"{1} \u4e2d\u7684 {0} \u5df2\u8fc7\u65f6, \u4e14\u6807\u8bb0\u4e3a\u5f85\u5220\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.for.removal.module"_s),
			$of(u"\u6a21\u5757 {0} \u5df2\u8fc7\u65f6, \u4e14\u6807\u8bb0\u4e3a\u5f85\u5220\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.module"_s),
			$of(u"\u6a21\u5757 {0} \u5df2\u8fc7\u65f6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.illegal.char.for.encoding"_s),
			$of(u"\u7f16\u7801{0}\u7684\u4e0d\u53ef\u6620\u5c04\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.illegal.ref.to.restricted.type"_s),
			$of(u"\u5bf9\u53d7\u9650\u5236\u7c7b\u578b \'\'{0}\'\' \u7684\u5f15\u7528\u975e\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.improper.SVUID"_s),
			$of(u"\u5fc5\u987b\u5728\u7c7b{0}\u4e2d\u5c06 serialVersionUID \u58f0\u660e\u4e3a static final"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.inconsistent.white.space.indentation"_s),
			$of(u"\u7a7a\u683c\u7f29\u8fdb\u4e0d\u4e00\u81f4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.incubating.modules"_s),
			$of(u"\u4f7f\u7528 incubating \u6a21\u5757: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.inexact.non-varargs.call"_s),
			$of(u"\u6700\u540e\u4e00\u4e2a\u53c2\u6570\u4f7f\u7528\u4e86\u4e0d\u51c6\u786e\u7684\u53d8\u91cf\u7c7b\u578b\u7684 varargs \u65b9\u6cd5\u7684\u975e varargs \u8c03\u7528; \n\u5bf9\u4e8e varargs \u8c03\u7528, \u5e94\u4f7f\u7528 {0}\n\u5bf9\u4e8e\u975e varargs \u8c03\u7528, \u5e94\u4f7f\u7528 {1}, \u8fd9\u6837\u4e5f\u53ef\u4ee5\u6291\u5236\u6b64\u8b66\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.archive.file"_s),
			$of(u"\u4ee5\u4e0b\u8def\u5f84\u4e2d\u5b58\u5728\u610f\u5916\u7684\u6587\u4ef6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.path"_s),
			$of(u"\u65e0\u6548\u6587\u4ef6\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.yield"_s),
			$of(u"\'\'yield\'\' \u5728\u672a\u6765\u53d1\u884c\u7248\u4e2d\u53ef\u80fd\u4f1a\u6210\u4e3a\u53d7\u9650\u6807\u8bc6\u7b26\n\uff08\u8981\u8c03\u7528\u79f0\u4e3a yield \u7684\u65b9\u6cd5\uff0c\u8bf7\u901a\u8fc7\u63a5\u6536\u65b9\u6216\u7c7b\u578b\u540d\u79f0\u9650\u5b9a yield\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.is.preview"_s),
			$of(u"{0} \u662f\u67d0\u9884\u89c8\u529f\u80fd\u4e2d\u7684\u4e00\u4e2a API"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible"_s),
			$of(u"\u6a21\u5757 {2} \u4e2d\u7684 {0} {1} \u5bf9\u9700\u8981\u8be5\u6a21\u5757\u7684\u5ba2\u6237\u673a\u4e0d\u53ef\u8bbf\u95ee"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.not.required.transitive"_s),
			$of(u"\u672a\u4f7f\u7528 \'\'requires transitive\'\' \u95f4\u63a5\u5bfc\u51fa\u6a21\u5757 {2} \u4e2d\u7684 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.unexported"_s),
			$of(u"\u672a\u5bfc\u51fa\u6a21\u5757 {2} \u4e2d\u7684 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.unexported.qualified"_s),
			$of(u"\u6a21\u5757 {2} \u4e2d\u7684 {0} {1} \u53ef\u80fd\u5bf9\u9700\u8981\u8be5\u6a21\u5757\u7684\u6240\u6709\u5ba2\u6237\u673a\u90fd\u4e0d\u53ef\u89c1"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.lintOption"_s),
			$of("[{0}] "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.local.redundant.type"_s),
			$of(u"\u672c\u5730\u53d8\u91cf\u7684\u5197\u4f59\u7c7b\u578b (\u4f7f\u7528 \'\'var\'\' \u66ff\u6362\u663e\u5f0f\u7c7b\u578b)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.locn.unknown.file.on.module.path"_s),
			$of(u"\u6a21\u5757\u8def\u5f84\u4e2d\u7684\u672a\u77e5\u6587\u4ef6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.long.SVUID"_s),
			$of(u"serialVersionUID \u5728\u7c7b{0}\u4e2d\u5fc5\u987b\u662f long \u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.method.redundant.typeargs"_s),
			$of(u"\u65b9\u6cd5\u8c03\u7528\u4e2d\u5b58\u5728\u5197\u4f59\u7c7b\u578b\u53c2\u6570\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing-explicit-ctor"_s),
			$of(u"\u5bfc\u51fa\u7684\u7a0b\u5e8f\u5305 {1} \u4e2d\u7684\u7c7b {0} \u672a\u58f0\u660e\u663e\u5f0f\u6784\u9020\u5668\uff0c\u56e0\u6b64\u5c06\u5411\u6a21\u5757 {2} \u7684\u5ba2\u6237\u673a\u516c\u5f00\u9ed8\u8ba4\u6784\u9020\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing.SVUID"_s),
			$of(u"\u53ef\u5e8f\u5217\u5316\u7c7b{0}\u6ca1\u6709 serialVersionUID \u7684\u5b9a\u4e49"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing.deprecated.annotation"_s),
			$of(u"\u672a\u4f7f\u7528 @Deprecated \u5bf9\u5df2\u8fc7\u65f6\u7684\u9879\u76ee\u8fdb\u884c\u6ce8\u91ca"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.module.for.option.not.found"_s),
			$of(u"\u627e\u4e0d\u5230 {0} \u9009\u9879\u4e2d\u7684\u6a21\u5757\u540d\u79f0: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.module.not.found"_s),
			$of(u"\u627e\u4e0d\u5230\u6a21\u5757: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.source"_s),
			$of(u"\u6e90\u503c{0}\u5df2\u8fc7\u65f6, \u5c06\u5728\u672a\u6765\u6240\u6709\u53d1\u884c\u7248\u4e2d\u5220\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.suppression"_s),
			$of(u"\u8981\u9690\u85cf\u6709\u5173\u5df2\u8fc7\u65f6\u9009\u9879\u7684\u8b66\u544a, \u8bf7\u4f7f\u7528 -Xlint:-options\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.target"_s),
			$of(u"\u76ee\u6807\u503c{0}\u5df2\u8fc7\u65f6, \u5c06\u5728\u672a\u6765\u6240\u6709\u53d1\u884c\u7248\u4e2d\u5220\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.parameters.unsupported"_s),
			$of(u"\u76ee\u6807\u503c {0} \u4e0d\u652f\u6301 -parameters\u3002\u8bf7\u4f7f\u7528 {1} \u6216\u66f4\u9ad8\u7248\u672c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.outdir.is.in.exploded.module"_s),
			$of(u"\u8f93\u51fa\u76ee\u5f55\u4f4d\u4e8e\u5c55\u5f00\u7684\u6a21\u5757\u4e2d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.bridge"_s),
			$of(u"{0}; \u88ab\u8986\u76d6\u7684\u65b9\u6cd5\u4e3a bridge \u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.equals.but.not.hashcode"_s),
			$of(u"\u7c7b{0}\u8986\u76d6\u4e86 equals, \u4f46\u8be5\u7c7b\u6216\u4efb\u4f55\u8d85\u7c7b\u90fd\u672a\u8986\u76d6 hashCode \u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.unchecked.ret"_s),
			$of(u"{0}\n\u8fd4\u56de\u7c7b\u578b\u9700\u8981\u4ece{1}\u5230{2}\u7684\u672a\u7ecf\u68c0\u67e5\u7684\u8f6c\u6362"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.unchecked.thrown"_s),
			$of(u"{0}\n\u88ab\u8986\u76d6\u7684\u65b9\u6cd5\u672a\u629b\u51fa{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.varargs.extra"_s),
			$of(u"{0}; \u8986\u76d6\u7684\u65b9\u6cd5\u7f3a\u5c11 \'\'...\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.varargs.missing"_s),
			$of(u"{0}; \u88ab\u8986\u76d6\u7684\u65b9\u6cd5\u6ca1\u6709 \'\'...\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.package.empty.or.not.found"_s),
			$of(u"\u7a0b\u5e8f\u5305\u4e3a\u7a7a\u6216\u4e0d\u5b58\u5728: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.path.element.not.found"_s),
			$of(u"\u9519\u8bef\u7684\u8def\u5f84\u5143\u7d20 \"{0}\": \u6ca1\u6709\u8fd9\u79cd\u6587\u4ef6\u6216\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.pkg-info.already.seen"_s),
			$of(u"\u5df2\u627e\u5230\u7a0b\u5e8f\u5305{0}\u7684 package-info.java \u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.poor.choice.for.module.name"_s),
			$of(u"\u6a21\u5757\u540d\u79f0\u7ec4\u6210\u90e8\u5206 {0} \u5e94\u907f\u514d\u4ee5\u6570\u5b57\u7ed3\u5c3e"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.position.overflow"_s),
			$of(u"\u884c {0} \u5904\u7684\u4f4d\u7f6e\u7f16\u7801\u6ea2\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.possible.fall-through.into.case"_s),
			$of(u"\u53ef\u80fd\u65e0\u6cd5\u5b9e\u73b0 case"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.potential.lambda.found"_s),
			$of(u"\u53ef\u5c06\u6b64\u533f\u540d\u5185\u90e8\u7c7b\u521b\u5efa\u8f6c\u6362\u4e3a lambda \u8868\u8fbe\u5f0f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.potentially.ambiguous.overload"_s),
			$of(u"{1} \u4e2d\u7684 {0} \u53ef\u80fd\u4e0e {3} \u4e2d\u7684 {2} \u6df7\u6dc6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use"_s),
			$of(u"{0} \u662f\u9884\u89c8\u529f\u80fd\uff0c\u53ef\u80fd\u4f1a\u5728\u672a\u6765\u53d1\u884c\u7248\u4e2d\u5220\u9664\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use.classfile"_s),
			$of(u"{0} \u7684\u7c7b\u6587\u4ef6\u4f7f\u7528 Java SE {1} \u7684\u9884\u89c8\u529f\u80fd\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use.plural"_s),
			$of(u"{0} \u662f\u9884\u89c8\u529f\u80fd\uff0c\u53ef\u80fd\u4f1a\u5728\u672a\u6765\u53d1\u884c\u7248\u4e2d\u5220\u9664\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.prob.found.req"_s),
			$of(u"{0}\n\u9700\u8981: {2}\n\u627e\u5230:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.annotations.without.processors"_s),
			$of(u"\u6ca1\u6709\u5904\u7406\u7a0b\u5e8f\u8981\u4f7f\u7528\u4ee5\u4e0b\u4efb\u4f55\u6ce8\u91ca: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.duplicate.option.name"_s),
			$of(u"\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f \'\'{1}\'\' \u8fd4\u56de\u91cd\u590d\u7684\u652f\u6301\u7684\u9009\u9879 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.duplicate.supported.annotation"_s),
			$of(u"\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f \'\'{1}\'\' \u8fd4\u56de\u91cd\u590d\u7684\u652f\u6301\u7684\u6ce8\u91ca\u7c7b\u578b \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.file.create.last.round"_s),
			$of(u"\u5c06\u4e0d\u5bf9\u5728\u6700\u540e\u4e00\u4e2a\u5faa\u73af\u4e2d\u521b\u5efa\u7684\u7c7b\u578b\u4e3a \'\'{0}\'\' \u7684\u6587\u4ef6\u8fdb\u884c\u6ce8\u91ca\u5904\u7406\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.file.reopening"_s),
			$of(u"\u5c1d\u8bd5\u591a\u6b21\u4e3a \'\'{0}\'\' \u521b\u5efa\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.illegal.file.name"_s),
			$of(u"\u65e0\u6cd5\u521b\u5efa\u5e26\u6709\u975e\u6cd5\u540d\u79f0 \'\'{0}\'\' \u7684\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.malformed.supported.string"_s),
			$of(u"\u5904\u7406\u7a0b\u5e8f \'\'{1}\'\' \u4e3a\u652f\u6301\u7684\u6ce8\u91ca\u7c7b\u578b\u8fd4\u56de\u683c\u5f0f\u9519\u8bef\u7684\u5b57\u7b26\u4e32 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.package.does.not.exist"_s),
			$of(u"\u7a0b\u5e8f\u5305{0}\u4e0d\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.proc-only.requested.no.procs"_s),
			$of(u"\u5728\u672a\u8bf7\u6c42\u7f16\u8bd1\u7684\u60c5\u51b5\u4e0b\u8fdb\u884c\u6ce8\u91ca\u5904\u7406, \u4f46\u627e\u4e0d\u5230\u5904\u7406\u7a0b\u5e8f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.processor.incompatible.source.version"_s),
			$of(u"\u6765\u81ea\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f \'\'{1}\'\' \u7684\u53d7\u652f\u6301 source \u7248\u672c \'\'{0}\'\' \u4f4e\u4e8e -source \'\'{2}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.redundant.types.with.wildcard"_s),
			$of(u"\u6ce8\u91ca\u5904\u7406\u7a0b\u5e8f \'\'{0}\'\' \u91cd\u590d\u652f\u6301 \'\'*\'\' \u548c\u5176\u4ed6\u6ce8\u91ca\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.suspicious.class.name"_s),
			$of(u"\u6b63\u5728\u4e3a\u540d\u79f0\u4ee5{1}\u7ed3\u5c3e\u7684\u7c7b\u578b\u521b\u5efa\u6587\u4ef6: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.type.already.exists"_s),
			$of(u"\u7c7b\u578b \'\'{0}\'\' \u7684\u6587\u4ef6\u5df2\u7ecf\u5b58\u5728\u4e8e\u6e90\u8def\u5f84\u6216\u7c7b\u8def\u5f84\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.type.recreate"_s),
			$of(u"\u5c1d\u8bd5\u591a\u6b21\u521b\u5efa\u7c7b\u578b \'\'{0}\'\' \u7684\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.unclosed.type.files"_s),
			$of(u"\u7c7b\u578b \'\'{0}\'\' \u7684\u6587\u4ef6\u672a\u5173\u95ed; \u5c06\u4e0d\u9488\u5bf9\u8fd9\u4e9b\u7c7b\u578b\u8fdb\u884c\u6ce8\u91ca\u5904\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.unmatched.processor.options"_s),
			$of(u"\u4ee5\u4e0b\u9009\u9879\u672a\u88ab\u4efb\u4f55\u5904\u7406\u7a0b\u5e8f\u8bc6\u522b: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.use.implicit"_s),
			$of(u"\u6ce8\u91ca\u5904\u7406\u4e0d\u9002\u7528\u4e8e\u9690\u5f0f\u7f16\u8bd1\u7684\u6587\u4ef6\u3002\n\u4f7f\u7528 -implicit \u6307\u5b9a\u7528\u4e8e\u9690\u5f0f\u7f16\u8bd1\u7684\u7b56\u7565\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.use.proc.or.implicit"_s),
			$of(u"\u6ce8\u91ca\u5904\u7406\u4e0d\u9002\u7528\u4e8e\u9690\u5f0f\u7f16\u8bd1\u7684\u6587\u4ef6\u3002\n\u4f7f\u7528 -proc:none \u7981\u7528\u6ce8\u91ca\u5904\u7406\u6216\u4f7f\u7528 -implicit \u6307\u5b9a\u7528\u4e8e\u9690\u5f0f\u7f16\u8bd1\u7684\u7b56\u7565\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.profile.target.conflict"_s),
			$of(u"\u914d\u7f6e\u6587\u4ef6{0}\u5bf9\u4e8e\u76ee\u6807\u53d1\u884c\u7248 {1} \u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.raw.class.use"_s),
			$of(u"\u627e\u5230\u539f\u59cb\u7c7b\u578b: {0}\n\u7f3a\u5c11\u6cdb\u578b\u7c7b{1}\u7684\u7c7b\u578b\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.redundant.cast"_s),
			$of(u"\u51fa\u73b0\u5197\u4f59\u7684\u5230{0}\u7684\u8f6c\u6362"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.requires.automatic"_s),
			$of(u"\u9700\u8981\u81ea\u52a8\u6a21\u5757\u7684\u6307\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.requires.transitive.automatic"_s),
			$of(u"\u9700\u8981\u81ea\u52a8\u6a21\u5757\u7684\u8fc7\u6e21\u6307\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.restricted.type.not.allowed"_s),
			$of(u"\u4ece\u53d1\u884c\u7248 {1} \u5f00\u59cb\uff0c\'\'{0}\'\' \u662f\u53d7\u9650\u7c7b\u578b\u540d\u79f0\uff0c\u4e0d\u80fd\u7528\u4e8e\u7c7b\u578b\u58f0\u660e\uff0c\u4e5f\u4e0d\u80fd\u7528\u4f5c\u6570\u7ec4\u7684\u5143\u7d20\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.restricted.type.not.allowed.preview"_s),
			$of(u"\'\'{0}\'\' \u5728\u672a\u6765\u53d1\u884c\u7248\u4e2d\u53ef\u80fd\u4f1a\u6210\u4e3a\u53d7\u9650\u7c7b\u578b\u540d\u79f0\uff0c\u53ef\u80fd\u65e0\u6cd5\u7528\u4e8e\u7c7b\u578b\u58f0\u660e\uff0c\u4e5f\u4e0d\u80fd\u7528\u4f5c\u6570\u7ec4\u7684\u5143\u7d20\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.self.ref"_s),
			$of(u"\u53d8\u91cf \'\'{0}\'\' \u7684\u521d\u59cb\u5316\u7a0b\u5e8f\u4e2d\u5b58\u5728\u81ea\u5f15\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.service.provided.but.not.exported.or.used"_s),
			$of(u"\u5df2\u63d0\u4f9b\u670d\u52a1\u63a5\u53e3, \u4f46\u672a\u5bfc\u51fa\u6216\u4f7f\u7528\u670d\u52a1\u63a5\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.no.bootclasspath"_s),
			$of(u"\u672a\u4e0e -source {0} \u4e00\u8d77\u8bbe\u7f6e\u5f15\u5bfc\u7c7b\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.no.system.modules.path"_s),
			$of(u"\u672a\u4e0e -source {0} \u4e00\u8d77\u8bbe\u7f6e\u7cfb\u7edf\u6a21\u5757\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.target.conflict"_s),
			$of(u"\u6e90\u53d1\u884c\u7248 {0} \u9700\u8981\u76ee\u6807\u53d1\u884c\u7248 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.static.not.qualified.by.type"_s),
			$of(u"static {0}\u5e94\u7531\u7c7b\u578b\u540d\u79f0{1}\u800c\u4e0d\u662f\u8868\u8fbe\u5f0f\u9650\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.sun.proprietary"_s),
			$of(u"{0}\u662f\u5185\u90e8\u4e13\u7528 API, \u53ef\u80fd\u4f1a\u5728\u672a\u6765\u53d1\u884c\u7248\u4e2d\u5220\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.target.default.source.conflict"_s),
			$of(u"\u76ee\u6807\u53d1\u884c\u7248 {0} \u4e0e\u9ed8\u8ba4\u7684\u6e90\u53d1\u884c\u7248 {1} \u51b2\u7a81"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.trailing.white.space.will.be.removed"_s),
			$of(u"\u5c06\u5220\u9664\u5c3e\u968f\u7a7a\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.explicit.close.call"_s),
			$of(u"\u5728\u53ef\u81ea\u52a8\u7ed3\u675f\u7684\u8d44\u6e90\u4e0a\u663e\u5f0f\u8c03\u7528 close()"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.resource.not.referenced"_s),
			$of(u"\u4e0d\u80fd\u5728\u76f8\u5e94\u7684 try \u8bed\u53e5\u7684\u6b63\u6587\u4e2d\u5f15\u7528\u53ef\u81ea\u52a8\u7ed3\u675f\u7684\u8d44\u6e90{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.resource.throws.interrupted.exc"_s),
			$of(u"\u53ef\u81ea\u52a8\u5173\u95ed\u7684\u8d44\u6e90{0}\u5305\u542b\u7684\u6210\u5458\u65b9\u6cd5 close() \u53ef\u80fd\u629b\u51fa InterruptedException"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.assign"_s),
			$of(u"\u672a\u7ecf\u68c0\u67e5\u7684\u5206\u914d: \u5c06{0}\u5206\u914d\u7ed9{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.assign.to.var"_s),
			$of(u"\u5bf9\u4f5c\u4e3a\u539f\u59cb\u7c7b\u578b{1}\u7684\u6210\u5458\u7684\u53d8\u91cf{0}\u7684\u5206\u914d\u672a\u7ecf\u8fc7\u68c0\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.call.mbr.of.raw.type"_s),
			$of(u"\u5bf9\u4f5c\u4e3a\u539f\u59cb\u7c7b\u578b{1}\u7684\u6210\u5458\u7684{0}\u7684\u8c03\u7528\u672a\u7ecf\u8fc7\u68c0\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.cast.to.type"_s),
			$of(u"\u5411\u7c7b\u578b{0}\u7684\u8f6c\u6362\u672a\u7ecf\u8fc7\u68c0\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.generic.array.creation"_s),
			$of(u"\u5bf9\u4e8e\u7c7b\u578b\u4e3a{0}\u7684 varargs \u53c2\u6570, \u6cdb\u578b\u6570\u7ec4\u521b\u5efa\u672a\u7ecf\u8fc7\u68c0\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.meth.invocation.applied"_s),
			$of(u"\u65b9\u6cd5\u8c03\u7528\u672a\u7ecf\u8fc7\u68c0\u67e5: \u5c06{4} {5}\u4e2d\u7684{0} {1}\u5e94\u7528\u5230\u7ed9\u5b9a\u7684\u7c7b\u578b\n\u9700\u8981: {2}\n\u627e\u5230:    {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.varargs.non.reifiable.type"_s),
			$of(u"\u53c2\u6570\u5316 vararg \u7c7b\u578b{0}\u7684\u5806\u53ef\u80fd\u5df2\u53d7\u6c61\u67d3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.underscore.as.identifier"_s),
			$of(u"\u4ece\u53d1\u884c\u7248 9 \u5f00\u59cb, \'\'_\'\' \u4e3a\u5173\u952e\u5b57, \u4e0d\u80fd\u7528\u4f5c\u6807\u8bc6\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unexpected.archive.file"_s),
			$of(u"\u4ee5\u4e0b\u6863\u6848\u6587\u4ef6\u5b58\u5728\u610f\u5916\u7684\u6269\u5c55\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unknown.enum.constant"_s),
			$of(u"\u672a\u77e5\u7684\u679a\u4e3e\u5e38\u91cf {1}.{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unknown.enum.constant.reason"_s),
			$of(u"\u672a\u77e5\u7684\u679a\u4e3e\u5e38\u91cf {1}.{2}\n\u539f\u56e0: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unreachable.catch"_s),
			$of(u"catch \u5b50\u53e5\u65e0\u6cd5\u8bbf\u95ee\n\u5df2\u6355\u83b7\u5230\u629b\u51fa\u7684\u7c7b\u578b{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unreachable.catch.1"_s),
			$of(u"catch \u5b50\u53e5\u65e0\u6cd5\u8bbf\u95ee\n\u5df2\u6355\u83b7\u5230\u629b\u51fa\u7684\u7c7b\u578b{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.varargs.redundant.trustme.anno"_s),
			$of(u"\u5197\u4f59\u7684 {0} \u6ce8\u91ca\u3002{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.varargs.unsafe.use.varargs.param"_s),
			$of(u"Varargs \u65b9\u6cd5\u53ef\u80fd\u5bfc\u81f4\u6765\u81ea\u4e0d\u53ef\u5177\u4f53\u5316 varargs \u53c2\u6570 {0} \u7684\u5806\u6c61\u67d3"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.warning"_s),
			$of(u"\u8b66\u544a: "_s)
		})
	});
}

compiler_zh_CN::compiler_zh_CN() {
}

$Class* compiler_zh_CN::load$($String* name, bool initialize) {
	$loadClass(compiler_zh_CN, name, initialize, &_compiler_zh_CN_ClassInfo_, allocate$compiler_zh_CN);
	return class$;
}

$Class* compiler_zh_CN::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com