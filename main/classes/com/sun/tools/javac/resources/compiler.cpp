#include <com/sun/tools/javac/resources/compiler.h>

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

$MethodInfo _compiler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(compiler::*)()>(&compiler::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _compiler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.compiler",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_compiler_MethodInfo_
};

$Object* allocate$compiler($Class* clazz) {
	return $of($alloc(compiler));
}

void compiler::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* compiler::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("compiler.err.abstract.cant.be.accessed.directly"_s),
			$of("abstract {0} {1} in {2} cannot be accessed directly"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.abstract.cant.be.instantiated"_s),
			$of("{0} is abstract; cannot be instantiated"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.abstract.meth.cant.have.body"_s),
			$of("abstract methods cannot have a body"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.add.exports.with.release"_s),
			$of("exporting a package from system module {0} is not allowed with --release"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.add.reads.with.release"_s),
			$of("adding read edges for system module {0} is not allowed with --release"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.addmods.all.module.path.invalid"_s),
			$of("--add-modules ALL-MODULE-PATH can only be used when compiling the unnamed module or when compiling in the context of an automatic module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.annotated"_s),
			$of("{0} {1} has already been annotated"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined"_s),
			$of("{0} {1} is already defined in {2} {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.in.clinit"_s),
			$of("{0} {1} is already defined in {2} of {3} {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.single.import"_s),
			$of("a type with the same simple name is already defined by the single-type-import of {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.static.single.import"_s),
			$of("a type with the same simple name is already defined by the static single-type-import of {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.this.unit"_s),
			$of("{0} is already defined in this compilation unit"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.decl.not.allowed.here"_s),
			$of("annotation type declaration not allowed here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.missing.default.value"_s),
			$of("annotation @{0} is missing a default value for the element \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.missing.default.value.1"_s),
			$of("annotation @{0} is missing default values for elements {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.not.valid.for.type"_s),
			$of("annotation not valid for an element of type {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.type.not.applicable"_s),
			$of("annotation type not applicable to this kind of declaration"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.type.not.applicable.to.type"_s),
			$of("annotation @{0} not applicable in this type context"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.annotation"_s),
			$of("annotation value must be an annotation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.class.literal"_s),
			$of("annotation value must be a class literal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.name.value"_s),
			$of("annotation values must be of the form \'\'name=value\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.not.allowable.type"_s),
			$of("annotation value not of an allowable type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.args"_s),
			$of("anonymous class implements interface; cannot have arguments"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.qual.for.new"_s),
			$of("anonymous class implements interface; cannot have qualifier for new"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.typeargs"_s),
			$of("anonymous class implements interface; cannot have type arguments"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anonymous.diamond.method.does.not.override.superclass"_s),
			$of("method does not override or implement a method from a supertype\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.and.receiver"_s),
			$of("legacy array notation not allowed on receiver parameter"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.and.varargs"_s),
			$of("cannot declare both {0} and {1} in {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.dimension.missing"_s),
			$of("array dimension missing"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.req.but.found"_s),
			$of("array required, but {0} found"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.assert.as.identifier"_s),
			$of("as of release 1.4, \'\'assert\'\' is a keyword, and may not be used as an identifier"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.attribute.value.must.be.constant"_s),
			$of("element value must be a constant expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.functional.intf.anno"_s),
			$of("Unexpected @FunctionalInterface annotation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.functional.intf.anno.1"_s),
			$of("Unexpected @FunctionalInterface annotation\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.initializer"_s),
			$of("bad initializer for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.name.for.option"_s),
			$of("bad name in value for {0} option: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.value.for.option"_s),
			$of("bad value for {0} option: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.break.outside.switch.expression"_s),
			$of("attempt to break out of a switch expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.break.outside.switch.loop"_s),
			$of("break outside switch or loop"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.call.must.be.first.stmt.in.ctor"_s),
			$of("call to {0} must be first statement in constructor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.call.to.super.not.allowed.in.enum.ctor"_s),
			$of("call to super not allowed in enum constructor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.create.array.with.diamond"_s),
			$of("cannot create array with \'\'<>\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.create.array.with.type.arguments"_s),
			$of("cannot create array with type arguments"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.generate.class"_s),
			$of("error while generating class {0}\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.access"_s),
			$of("cannot access {0}\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.diamond"_s),
			$of("cannot infer type arguments for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.diamond.1"_s),
			$of("cannot infer type arguments for {0}\nreason: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.symbol"_s),
			$of("{0} {1} in {4} {5} cannot be applied to given types;\nrequired: {2}\nfound:    {3}\nreason: {6}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.symbols"_s),
			$of("no suitable {0} found for {1}({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.assign.val.to.final.var"_s),
			$of("cannot assign a value to final variable {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.assign.val.to.this"_s),
			$of("cannot assign to \'\'this\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.deref"_s),
			$of("{0} cannot be dereferenced"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.extend.intf.annotation"_s),
			$of("\'\'extends\'\' not allowed for @interfaces"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.infer.local.var.type"_s),
			$of("cannot infer type for local variable {0}\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.diff.arg"_s),
			$of("{0} cannot be inherited with different arguments: <{1}> and <{2}>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.anon"_s),
			$of("cannot inherit from anonymous class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.final"_s),
			$of("cannot inherit from final {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.sealed"_s),
			$of("class is not allowed to extend sealed class: {0} (as it is not listed in its \'permits\' clause)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.read.file"_s),
			$of("cannot read: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.ref.before.ctor.called"_s),
			$of("cannot reference {0} before supertype constructor has been called"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.ref.non.effectively.final.var"_s),
			$of("local variables referenced from {1} must be final or effectively final"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve"_s),
			$of("cannot find symbol\nsymbol: {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.args"_s),
			$of("cannot find symbol\nsymbol: {0} {1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.args.params"_s),
			$of("cannot find symbol\nsymbol: {0} <{2}>{1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location"_s),
			$of("cannot find symbol\nsymbol:   {0} {1}\nlocation: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location.args"_s),
			$of("cannot find symbol\nsymbol:   {0} {1}({3})\nlocation: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location.args.params"_s),
			$of("cannot find symbol\nsymbol:   {0} <{2}>{1}({3})\nlocation: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.select.static.class.from.param.type"_s),
			$of("cannot select a static class from a parameterized type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.type.annotate.scoping"_s),
			$of("scoping construct cannot be annotated with type-use annotations: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.type.annotate.scoping.1"_s),
			$of("scoping construct cannot be annotated with type-use annotation: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.catch.without.try"_s),
			$of("\'\'catch\'\' without \'\'try\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.clash.with.pkg.of.same.name"_s),
			$of("{0} {1} clashes with package of same name"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.cant.write"_s),
			$of("error while writing {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.in.module.cant.extend.sealed.in.diff.module"_s),
			$of("class {0} in module {1} cannot extend a sealed class in a different module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.in.unnamed.module.cant.extend.sealed.in.diff.package"_s),
			$of("class {0} in unnamed module cannot extend a sealed class in a different package"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.not.allowed"_s),
			$of("class, interface or enum declaration not allowed here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.public.should.be.in.file"_s),
			$of("{0} {1} is public, should be declared in a file named {1}.java"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.concrete.inheritance.conflict"_s),
			$of("methods {0} from {1} and {2} from {3} are inherited with the same signature"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.exports"_s),
			$of("duplicate or conflicting exports: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.exports.to.module"_s),
			$of("duplicate or conflicting exports to module: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.opens"_s),
			$of("duplicate or conflicting opens: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.opens.to.module"_s),
			$of("duplicate or conflicting opens to module: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.const.expr.req"_s),
			$of("constant expression required"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.constant.label.not.compatible"_s),
			$of("constant label of type {0} is not compatible with switch selector type {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cont.outside.loop"_s),
			$of("continue outside of loop"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.continue.outside.switch.expression"_s),
			$of("attempt to continue out of a switch expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.annotation.element"_s),
			$of("type of element {0} is cyclic"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.inheritance"_s),
			$of("cyclic inheritance involving {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.requires"_s),
			$of("cyclic dependence involving {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.bad.entity"_s),
			$of("bad HTML entity"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.bad.inline.tag"_s),
			$of("incorrect use of inline tag"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.gt.expected"_s),
			$of("\'\'>\'\' expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.identifier.expected"_s),
			$of("identifier expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.malformed.html"_s),
			$of("malformed HTML"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.missing.semicolon"_s),
			$of("semicolon missing"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.no.content"_s),
			$of("no content"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.no.tag.name"_s),
			$of("no tag name after \'@\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.bad.parens"_s),
			$of("unexpected text after parenthesis"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.syntax.error"_s),
			$of("syntax error in reference"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.unexpected.input"_s),
			$of("unexpected text"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unexpected.content"_s),
			$of("unexpected content"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.inline.tag"_s),
			$of("unterminated inline tag"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.signature"_s),
			$of("unterminated signature"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.string"_s),
			$of("unterminated string"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.default.allowed.in.intf.annotation.member"_s),
			$of("default value only allowed in an annotation type declaration"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.default.overrides.object.member"_s),
			$of("default method {0} in {1} {2} overrides a member of java.lang.Object"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.does.not.override.abstract"_s),
			$of("{0} is not abstract and does not override abstract method {1} in {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.doesnt.exist"_s),
			$of("package {0} does not exist"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dot.class.expected"_s),
			$of("\'\'.class\'\' expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.invalid.repeated"_s),
			$of("annotation {0} is not a valid repeatable annotation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.member.value"_s),
			$of("duplicate element \'\'{0}\'\' in annotation @{1}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.missing.container"_s),
			$of("{0} is not a repeatable annotation type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.case.label"_s),
			$of("duplicate case label"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.class"_s),
			$of("duplicate class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.default.label"_s),
			$of("duplicate default label"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.module"_s),
			$of("duplicate module: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.module.on.path"_s),
			$of("duplicate module on {0}\nmodule in {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.provides"_s),
			$of("duplicate provides: service {0}, implementation {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.requires"_s),
			$of("duplicate requires: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.total.pattern"_s),
			$of("duplicate total pattern"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.uses"_s),
			$of("duplicate uses: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.else.without.if"_s),
			$of("\'\'else\'\' without \'\'if\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.empty.A.argument"_s),
			$of("-A requires an argument; use \'\'-Akey\'\' or \'\'-Akey=value\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.empty.char.lit"_s),
			$of("empty character literal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.encl.class.required"_s),
			$of("an enclosing instance that contains {0} is required"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.annotation.must.be.enum.constant"_s),
			$of("an enum annotation value must be an enum constant"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.as.identifier"_s),
			$of("as of release 5, \'\'enum\'\' is a keyword, and may not be used as an identifier"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.cant.be.instantiated"_s),
			$of("enum types may not be instantiated"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.constant.expected"_s),
			$of("enum constant expected here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.constant.not.expected"_s),
			$of("enum constant not expected here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.label.must.be.unqualified.enum"_s),
			$of("an enum switch case label must be the unqualified name of an enumeration constant"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.no.finalize"_s),
			$of("enums cannot have finalize methods"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.no.subclassing"_s),
			$of("classes cannot directly extend java.lang.Enum"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.types.not.extensible"_s),
			$of("enum types are not extensible"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error"_s),
			$of("error: "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error.reading.file"_s),
			$of("error reading {0}; {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error.writing.file"_s),
			$of("error writing {0}; {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.except.already.caught"_s),
			$of("exception {0} has already been caught"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.except.never.thrown.in.try"_s),
			$of("exception {0} is never thrown in body of corresponding try statement"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected"_s),
			$of("{0} expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.module"_s),
			$of("expected \'\'module\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.module.or.open"_s),
			$of("\'\'module\'\' or \'\'open\'\' expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.str"_s),
			$of("{0} expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected2"_s),
			$of("{0} or {1} expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected3"_s),
			$of("{0}, {1}, or {2} expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected4"_s),
			$of("{0}, {1}, {2}, or {3} expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expression.not.allowable.as.annotation.value"_s),
			$of("expression not allowed as annotation value"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.feature.not.supported.in.source"_s),
			$of("{0} is not supported in -source {1}\n(use -source {2} or higher to enable {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.feature.not.supported.in.source.plural"_s),
			$of("{0} are not supported in -source {1}\n(use -source {2} or higher to enable {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.directory"_s),
			$of("not a directory: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.file"_s),
			$of("not a file: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.found"_s),
			$of("file not found: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.patched.and.msp"_s),
			$of("file accessible from both --patch-module and --module-source-path, but belongs to a different module on each path: {0}, {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.sb.on.source.or.patch.path.for.module"_s),
			$of("file should be on source path, or on patch path for module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.final.parameter.may.not.be.assigned"_s),
			$of("final parameter {0} may not be assigned"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.finally.without.try"_s),
			$of("\'\'finally\'\' without \'\'try\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.first.statement.must.be.call.to.another.constructor"_s),
			$of("constructor is not canonical, so its first statement must invoke another constructor of class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.flows.through.from.pattern"_s),
			$of("illegal fall-through from a pattern"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.flows.through.to.pattern"_s),
			$of("illegal fall-through to a pattern"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.foreach.not.applicable.to.type"_s),
			$of("for-each not applicable to expression type\nrequired: {1}\nfound:    {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.fp.number.too.large"_s),
			$of("floating-point number too large"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.fp.number.too.small"_s),
			$of("floating-point number too small"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.generic.array.creation"_s),
			$of("generic array creation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.generic.throwable"_s),
			$of("a generic class may not extend java.lang.Throwable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.icls.cant.have.static.decl"_s),
			$of("Illegal static declaration in inner class {0}\nmodifier \'\'static\'\' is only allowed in constant variable declarations"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.argument.for.option"_s),
			$of("illegal argument for {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.array.creation.both.dimension.and.initialization"_s),
			$of("array creation with both dimension expression and initialization is illegal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.char"_s),
			$of("illegal character: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.char.for.encoding"_s),
			$of("unmappable character (0x{0}) for encoding {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.combination.of.modifiers"_s),
			$of("illegal combination of modifiers: {0} and {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.default.super.call"_s),
			$of("bad type qualifier {0} in default super call\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.dot"_s),
			$of("illegal \'\'.\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.enum.static.ref"_s),
			$of("illegal reference to static field from initializer"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.esc.char"_s),
			$of("illegal escape character"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.forward.ref"_s),
			$of("illegal forward reference"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.initializer.for.type"_s),
			$of("illegal initializer for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.line.end.in.char.lit"_s),
			$of("illegal line end in character literal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.nonascii.digit"_s),
			$of("illegal non-ASCII digit"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.parenthesized.expression"_s),
			$of("illegal parenthesized expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.qual.not.icls"_s),
			$of("illegal qualifier; {0} is not an inner class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.record.component.name"_s),
			$of("illegal record component name {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.ref.to.restricted.type"_s),
			$of("illegal reference to restricted type \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.self.ref"_s),
			$of("self-reference in initializer"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.expr"_s),
			$of("illegal start of expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.stmt"_s),
			$of("illegal start of statement"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.type"_s),
			$of("illegal start of type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.static.intf.meth.call"_s),
			$of("illegal static interface method call\nthe receiver expression should be replaced with the type qualifier \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.text.block.open"_s),
			$of("illegal text block open delimiter sequence, missing line terminator"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.underscore"_s),
			$of("illegal underscore"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.unicode.esc"_s),
			$of("illegal unicode escape"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.import.requires.canonical"_s),
			$of("import requires canonical name for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.improperly.formed.type.inner.raw.param"_s),
			$of("improperly formed type, type arguments given on a raw type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.improperly.formed.type.param.missing"_s),
			$of("improperly formed type, some parameters are missing"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incomparable.types"_s),
			$of("incomparable types: {0} and {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incompatible.thrown.types.in.mref"_s),
			$of("incompatible thrown types {0} in functional expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.constructor.receiver.name"_s),
			$of("the receiver name does not match the enclosing outer class type\nrequired: {0}\nfound:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.constructor.receiver.type"_s),
			$of("the receiver type does not match the enclosing outer class type\nrequired: {0}\nfound:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.receiver.name"_s),
			$of("the receiver name does not match the enclosing class type\nrequired: {0}\nfound:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.receiver.type"_s),
			$of("the receiver type does not match the enclosing class type\nrequired: {0}\nfound:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.initializer.must.be.able.to.complete.normally"_s),
			$of("initializer must be able to complete normally"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.initializer.not.allowed"_s),
			$of("initializers not allowed in interfaces"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instance.initializer.not.allowed.in.records"_s),
			$of("instance initializers not allowed in records"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instanceof.pattern.no.subtype"_s),
			$of("expression type {0} is a subtype of pattern type {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instanceof.reifiable.not.safe"_s),
			$of("{0} cannot be safely cast to {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.int.number.too.large"_s),
			$of("integer number too large"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.cant.have.type.params"_s),
			$of("annotation type {0} cannot be generic"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.member.clash"_s),
			$of("annotation type {1} declares an element with the same name as method {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.members.cant.have.params"_s),
			$of("elements in annotation type declarations cannot declare formal parameters"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.members.cant.have.type.params"_s),
			$of("elements in annotation type declarations cannot be generic methods"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.expected.here"_s),
			$of("interface expected here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.meth.cant.have.body"_s),
			$of("interface abstract methods cannot have body"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.not.allowed.here"_s),
			$of("interface not allowed here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.A.key"_s),
			$of("key in annotation processor option \'\'{0}\'\' is not a dot-separated sequence of identifiers"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.accessor.method.in.record"_s),
			$of("invalid accessor method in record {0}\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.annotation.member.type"_s),
			$of("invalid type for annotation type element"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.binary.number"_s),
			$of("binary numbers must contain at least one binary digit"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.canonical.constructor.in.record"_s),
			$of("invalid {0} constructor in record {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.flag"_s),
			$of("invalid flag: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.hex.number"_s),
			$of("hexadecimal numbers must contain at least one hexadecimal digit"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.lambda.parameter.declaration"_s),
			$of("invalid lambda parameter declaration\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.meth.decl.ret.type.req"_s),
			$of("invalid method declaration; return type required"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.module.directive"_s),
			$of("module directive keyword or \'\'}\'\' expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.module.specifier"_s),
			$of("module specifier not allowed: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.mref"_s),
			$of("invalid {0} reference\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.path"_s),
			$of("Invalid filename: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.permits.clause"_s),
			$of("invalid permits clause\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.profile"_s),
			$of("invalid profile: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation"_s),
			$of("duplicate annotation: {0} is annotated with an invalid @Repeatable annotation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.elem.nondefault"_s),
			$of("containing annotation type ({0}) does not have a default value for element {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.incompatible.target"_s),
			$of("containing annotation type ({0}) is applicable to more targets than repeatable annotation type ({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.invalid.value"_s),
			$of("{0} is not a valid @Repeatable: invalid value element"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.multiple.values"_s),
			$of("{0} is not a valid @Repeatable, {1} element methods named \'\'value\'\' declared"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.no.value"_s),
			$of("{0} is not a valid @Repeatable, no value element method declared"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.applicable"_s),
			$of("container {0} is not applicable to element {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.applicable.in.context"_s),
			$of("container {0} is not applicable in this type context"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.documented"_s),
			$of("repeatable annotation type ({1}) is @Documented while containing annotation type ({0}) is not"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.inherited"_s),
			$of("repeatable annotation type ({1}) is @Inherited while containing annotation type ({0}) is not"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.repeated.and.container.present"_s),
			$of("container {0} must not be present at the same time as the element it contains"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.retention"_s),
			$of("retention of containing annotation type ({0}) is shorter than the retention of repeatable annotation type ({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.value.return"_s),
			$of("containing annotation type ({0}) must declare an element named \'\'value\'\' of type {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.source"_s),
			$of("invalid source release: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.supertype.record"_s),
			$of("classes cannot directly extend {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.target"_s),
			$of("invalid target release: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.yield"_s),
			$of("invalid use of a restricted identifier \'\'yield\'\'\n(to invoke a method called yield, qualify the yield with a receiver or type name)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.io.exception"_s),
			$of("error reading source file: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.is.preview"_s),
			$of("{0} is a preview API and is disabled by default.\n(use --enable-preview to enable preview APIs)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.label.already.in.use"_s),
			$of("label {0} already in use"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.lambda.body.neither.value.nor.void.compatible"_s),
			$of("lambda body is neither value nor void compatible"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.code"_s),
			$of("code too large"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.code.too.large.for.try.stmt"_s),
			$of("code too large for try statement"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.dimensions"_s),
			$of("array type has too many dimensions"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.locals"_s),
			$of("too many local variables"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.parameters"_s),
			$of("too many parameters"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.pool"_s),
			$of("too many constants"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.pool.in.class"_s),
			$of("too many constants in class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.stack"_s),
			$of("code requires too much stack"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.string"_s),
			$of("constant string too long"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.string.overflow"_s),
			$of("UTF8 representation for string \"{0}...\" is too long for the constant pool"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.classes.cant.extend.sealed"_s),
			$of("{0} classes must not extend sealed classes"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.enum"_s),
			$of("enum types must not be local"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.var.accessed.from.icls.needs.final"_s),
			$of("local variable {0} is accessed from within inner class; needs to be declared final"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.bad.module-info"_s),
			$of("problem reading module-info.class in {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.get.module.name.for.jar"_s),
			$of("cannot determine module name for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.read.directory"_s),
			$of("cannot read directory {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.read.file"_s),
			$of("cannot read file {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.invalid.arg.for.xpatch"_s),
			$of("invalid argument for --patch-module option: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.module-info.not.allowed.on.patch.path"_s),
			$of("module-info.class not allowed on patch path: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.malformed.fp.lit"_s),
			$of("malformed floating-point literal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.match.binding.exists"_s),
			$of("illegal attempt to redefine an existing match binding"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.method.does.not.override.superclass"_s),
			$of("method does not override or implement a method from a supertype"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.missing.meth.body.or.decl.abstract"_s),
			$of("missing method body, or declare abstract"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.missing.ret.stmt"_s),
			$of("missing return statement"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.mod.not.allowed.here"_s),
			$of("modifier {0} not allowed here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.modifier.not.allowed.here"_s),
			$of("modifier {0} not allowed here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.decl.sb.in.module-info.java"_s),
			$of("module declarations should be in a file named module-info.java"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.name.mismatch"_s),
			$of("module name {0} does not match expected name {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.non.zero.opens"_s),
			$of("open module {0} has non-zero opens_count"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found"_s),
			$of("module not found: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found.in.module.source.path"_s),
			$of("module {0} not found in module source path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found.on.module.source.path"_s),
			$of("module not found on module source path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.modulesourcepath.must.be.specified.with.dash.m.option"_s),
			$of("module source path must be specified if -m option is used"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multi-module.outdir.cannot.be.exploded.module"_s),
			$of("in multi-module mode, the output directory cannot be an exploded module: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multicatch.parameter.may.not.be.assigned"_s),
			$of("multi-catch parameter {0} may not be assigned"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multicatch.types.must.be.disjoint"_s),
			$of("Alternatives in a multi-catch statement cannot be related by subclassing\nAlternative {0} is a subclass of alternative {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multiple.values.for.module.source.path"_s),
			$of("--module-source-path specified more than once with a pattern argument"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure"_s),
			$of("name clash: {0} and {1} have the same erasure"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.hide"_s),
			$of("name clash: {0} in {1} and {2} in {3} have the same erasure, yet neither hides the other"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.override"_s),
			$of("name clash: {0}({1}) in {2} and {3}({4}) in {5} have the same erasure, yet neither overrides the other"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.override.1"_s),
			$of("name clash: {0} {1} has two methods with the same erasure, yet neither overrides the other\nfirst method:  {2}({3}) in {4}\nsecond method: {5}({6}) in {7}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.reserved.for.internal.use"_s),
			$of("{0} is reserved for internal use"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.native.meth.cant.have.body"_s),
			$of("native methods cannot have a body"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.new.not.allowed.in.annotation"_s),
			$of("\'\'new\'\' not allowed in an annotation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.annotation.member"_s),
			$of("no annotation member {0} in {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.annotations.on.dot.class"_s),
			$of("no annotations are allowed in the type of a class literal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.encl.instance.of.type.in.scope"_s),
			$of("no enclosing instance of type {0} is in scope"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.intf.expected.here"_s),
			$of("no interface expected here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.match.entry"_s),
			$of("{0} has no match in entry in {1}; required {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.opens.unless.strong"_s),
			$of("\'\'opens\'\' only allowed in strong modules"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.output.dir"_s),
			$of("no class output directory specified"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.pkg.in.module-info.java"_s),
			$of("package declarations not allowed in file module-info.java"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.source.files"_s),
			$of("no source files"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.source.files.classes"_s),
			$of("no source files or class names"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.superclass"_s),
			$of("{0} has no superclass."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.switch.expression"_s),
			$of("yield outside of switch expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.switch.expression.qualify"_s),
			$of("yield outside of switch expression\n(to invoke a method called yield, qualify the yield with a receiver or type name)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.value.for.option"_s),
			$of("no value for {0} option"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.zipfs.for.archive"_s),
			$of("No file system provider is available to handle this file: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non-static.cant.be.ref"_s),
			$of("non-static {0} {1} cannot be referenced from a static context"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.or.sealed.expected"_s),
			$of("sealed or non-sealed modifiers expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.sealed.or.final.expected"_s),
			$of("sealed, non-sealed or final modifiers expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.with.no.sealed.supertype"_s),
			$of("non-sealed modifier not allowed here\n(class {0} does not have any sealed supertypes)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.annotation.type"_s),
			$of("{0} is not an annotation type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.class.intf.cant.access"_s),
			$of("{1}.{0} is defined in an inaccessible class or interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.class.intf.cant.access.reason"_s),
			$of("{1}.{0} in package {2} is not accessible\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.package.cant.access"_s),
			$of("{0} is not visible\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.public"_s),
			$of("{0} is not public in {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.public.cant.access"_s),
			$of("{0} is not public in {1}; cannot be accessed from outside package"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.encl.class"_s),
			$of("not an enclosing class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.exhaustive"_s),
			$of("the switch expression does not cover all possible input values"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.exhaustive.statement"_s),
			$of("the switch statement does not cover all possible input values"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.in.module.on.module.source.path"_s),
			$of("not in a module on the module source path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.in.profile"_s),
			$of("{0} is not available in profile \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.loop.label"_s),
			$of("not a loop label: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.stmt"_s),
			$of("not a statement"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.within.bounds"_s),
			$of("type argument {0} is not within bounds of type-variable {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.operator.cant.be.applied"_s),
			$of("bad operand type {1} for unary operator \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.operator.cant.be.applied.1"_s),
			$of("bad operand types for binary operator \'\'{0}\'\'\nfirst type:  {1}\nsecond type: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.not.allowed.with.target"_s),
			$of("option {0} not allowed with target {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.removed.source"_s),
			$of("Source option {0} is no longer supported. Use {1} or later."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.removed.target"_s),
			$of("Target option {0} is no longer supported. Use {1} or later."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.too.many"_s),
			$of("option {0} can only be specified once"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.orphaned"_s),
			$of("orphaned {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.output.dir.must.be.specified.with.dash.m.option"_s),
			$of("class output directory must be specified if -m option is used"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.incompatible.ret"_s),
			$of("{0}\nreturn type {1} is not compatible with {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.meth"_s),
			$of("{0}\noverridden method is {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.meth.doesnt.throw"_s),
			$of("{0}\noverridden method does not throw {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.static"_s),
			$of("{0}\noverriding method is static"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.weaker.access"_s),
			$of("{0}\nattempting to assign weaker access privileges; was {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.clash.from.requires"_s),
			$of("module {0} reads package {1} from both {2} and {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.clash.from.requires.in.unnamed"_s),
			$of("the unnamed module reads package {0} from both {1} and {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.empty.or.not.found"_s),
			$of("package is empty or does not exist: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.in.other.module"_s),
			$of("package exists in another module: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.not.visible"_s),
			$of("package {0} is not visible\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pattern.dominated"_s),
			$of("this case label is dominated by a preceding case label"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pattern.expected"_s),
			$of("type pattern expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pkg.annotations.sb.in.package-info.java"_s),
			$of("package annotations should be in file package-info.java"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pkg.clashes.with.class.of.same.name"_s),
			$of("package {0} clashes with class of same name"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.plugin.not.found"_s),
			$of("plug-in not found: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.premature.eof"_s),
			$of("reached end of file while parsing"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled"_s),
			$of("{0} is a preview feature and is disabled by default.\n(use --enable-preview to enable {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled.classfile"_s),
			$of("class file for {0} uses preview features of Java SE {1}.\n(use --enable-preview to allow loading of class files which contain preview features)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled.plural"_s),
			$of("{0} are a preview feature and are disabled by default.\n(use --enable-preview to enable {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.not.latest"_s),
			$of("invalid source release {0} with --enable-preview\n(preview language features are only supported for release {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.without.source.or.release"_s),
			$of("--enable-preview must be used with either -source or --release"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.prob.found.req"_s),
			$of("incompatible types: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.bad.config.file"_s),
			$of("Bad service configuration file, or exception thrown while constructing Processor object: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.access"_s),
			$of("cannot access {0}\n{1}\nConsult the following stack trace for details.\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.access.1"_s),
			$of("cannot access {0}\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.create.loader"_s),
			$of("Could not create class loader for annotation processors: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.find.class"_s),
			$of("Could not find class file for \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.load.class"_s),
			$of("Could not load processor class file due to \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.no.explicit.annotation.processing.requested"_s),
			$of("Class names, \'\'{0}\'\', are only accepted if annotation processing is explicitly requested"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.no.service"_s),
			$of("A ServiceLoader was not usable and is required for annotation processing."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.bad.option.name"_s),
			$of("Bad option name \'\'{0}\'\' provided by processor \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.cant.instantiate"_s),
			$of("Could not instantiate an instance of processor \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.not.found"_s),
			$of("Annotation processor \'\'{0}\'\' not found"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.wrong.type"_s),
			$of("Annotation processor \'\'{0}\'\' does not implement javax.annotation.processing.Processor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.service.problem"_s),
			$of("Error creating a service loader to load Processors."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.processorpath.no.processormodulepath"_s),
			$of("illegal combination of -processorpath and --processor-module-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.profile.bootclasspath.conflict"_s),
			$of("profile and bootclasspath options cannot be used together"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.qualified.new.of.static.class"_s),
			$of("qualified new of static class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.receiver.parameter.not.applicable.constructor.toplevel.class"_s),
			$of("receiver parameter not applicable for constructor of top-level class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.cannot.declare.instance.fields"_s),
			$of("field declaration must be static\n(consider replacing field with record component)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.cant.declare.field.modifiers"_s),
			$of("record components cannot have modifiers"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.component.and.old.array.syntax"_s),
			$of("legacy array notation not allowed on record components"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.header.expected"_s),
			$of("record header expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.recursive.ctor.invocation"_s),
			$of("recursive constructor invocation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.ref.ambiguous"_s),
			$of("reference to {0} is ambiguous\nboth {1} {2} in {3} and {4} {5} in {6} match"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.release.bootclasspath.conflict"_s),
			$of("option {0} cannot be used together with --release"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.annotation.target"_s),
			$of("repeated annotation target"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.interface"_s),
			$of("repeated interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.modifier"_s),
			$of("repeated modifier"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.provides.for.service"_s),
			$of("multiple \'\'provides\'\' for service {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.value.for.module.source.path"_s),
			$of("--module-source-path specified more than once for module {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.value.for.patch.module"_s),
			$of("--patch-module specified more than once for module {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.report.access"_s),
			$of("{0} has {1} access in {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.req.arg"_s),
			$of("{0} requires an argument"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed"_s),
			$of("\'\'{0}\'\' not allowed here\nas of release {1}, \'\'{0}\'\' is a restricted type name and cannot be used for type declarations"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.array"_s),
			$of("\'\'{0}\'\' is not allowed as an element type of an array"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.compound"_s),
			$of("\'\'{0}\'\' is not allowed in a compound declaration"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.here"_s),
			$of("\'\'{0}\'\' is not allowed here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.ret.outside.meth"_s),
			$of("return outside method"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.return.outside.switch.expression"_s),
			$of("attempt to return out of a switch expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.rule.completes.normally"_s),
			$of("switch rule completes without providing a value\n(switch rules in switch expressions must either provide a value or throw)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.same.binary.name"_s),
			$of("classes: {0} and {1} have the same binary name"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sealed.class.must.have.subclasses"_s),
			$of("sealed class must have subclasses"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sealed.or.non.sealed.local.classes.not.allowed"_s),
			$of("sealed or non-sealed local classes are not allowed"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.definition.is.enum"_s),
			$of("the service definition is an enum: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.doesnt.have.a.no.args.constructor"_s),
			$of("the service implementation does not have a default constructor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.is.abstract"_s),
			$of("the service implementation is an abstract class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.is.inner"_s),
			$of("the service implementation is an inner class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.must.be.subtype.of.service.interface"_s),
			$of("the service implementation type must be a subtype of the service interface type, or have a public static no-args method named \"provider\" returning the service implementation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.no.args.constructor.not.public"_s),
			$of("the no arguments constructor of the service implementation is not public: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.not.in.right.module"_s),
			$of("service implementation must be defined in the same module as the provides directive"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.provider.return.must.be.subtype.of.service.interface"_s),
			$of("the \"provider\" method return type must be a subtype of the service interface type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.signature.doesnt.match.intf"_s),
			$of("signature does not match {0}; incompatible interfaces"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.signature.doesnt.match.supertype"_s),
			$of("signature does not match {0}; incompatible supertype"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.source.cant.overwrite.input.file"_s),
			$of("error writing source; cannot overwrite input file {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sourcepath.modulesourcepath.conflict"_s),
			$of("cannot specify both --source-path and --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.stack.sim.error"_s),
			$of("Internal error: stack sim error on {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.declaration.not.allowed.in.inner.classes"_s),
			$of("static declarations not allowed in inner classes"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.imp.only.classes.and.interfaces"_s),
			$of("static import only from classes and interfaces"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.methods.cannot.be.annotated.with.override"_s),
			$of("static methods cannot be annotated with @Override"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.string.const.req"_s),
			$of("constant string expression required"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.case.unexpected.statement"_s),
			$of("unexpected statement in case, expected is an expression, a block or a throw statement"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.completes.normally"_s),
			$of("switch expression completes without providing a value\n(switch expressions must either provide a value or throw for all possible input values)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.empty"_s),
			$of("switch expression does not have any case clauses"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.no.result.expressions"_s),
			$of("switch expression does not have any result expressions"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.mixing.case.types"_s),
			$of("different case kinds used in the switch"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.this.as.identifier"_s),
			$of("as of release 8, \'\'this\'\' is allowed as the parameter name for the receiver type only\nwhich has to be the first parameter, and cannot be a lambda parameter"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.throws.not.allowed.in.intf.annotation"_s),
			$of("throws clause not allowed in @interface members"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.too.many.modules"_s),
			$of("too many module declarations found"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.too.many.patched.modules"_s),
			$of("too many patched modules ({0}), use --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.total.pattern.and.default"_s),
			$of("switch has both a total pattern and a default label"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.resource.may.not.be.assigned"_s),
			$of("auto-closeable resource {0} may not be assigned"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.with.resources.expr.effectively.final.var"_s),
			$of("variable {0} used as a try-with-resources resource neither final nor effectively final"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.with.resources.expr.needs.var"_s),
			$of("the try-with-resources resource must either be a variable declaration or an expression denoting a reference to a final or effectively final variable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.without.catch.finally.or.resource.decls"_s),
			$of("\'\'try\'\' without \'\'catch\'\', \'\'finally\'\' or resource declarations"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.two.class.loaders.1"_s),
			$of("javac is split between multiple class loaders: check your configuration"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.two.class.loaders.2"_s),
			$of("javac is split between multiple class loaders:\none class comes from file: {0}\nwhile javac comes from {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.doesnt.take.params"_s),
			$of("type {0} does not take parameters"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.found.req"_s),
			$of("unexpected type\nrequired: {1}\nfound:    {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.cant.be.deref"_s),
			$of("cannot select from a type variable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.may.not.be.followed.by.other.bounds"_s),
			$of("a type variable may not be followed by other bounds"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.more.than.once"_s),
			$of("type variable {0} occurs more than once in result type of {1}; cannot be left uninstantiated"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.more.than.once.in.result"_s),
			$of("type variable {0} occurs more than once in type of {1}; cannot be left uninstantiated"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.types.incompatible"_s),
			$of("types {0} and {1} are incompatible;\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.char.lit"_s),
			$of("unclosed character literal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.comment"_s),
			$of("unclosed comment"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.str.lit"_s),
			$of("unclosed string literal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.text.block"_s),
			$of("unclosed text block"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.undef.label"_s),
			$of("undefined label: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.underscore.as.identifier"_s),
			$of("as of release 9, \'\'_\'\' is a keyword, and may not be used as an identifier"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.underscore.as.identifier.in.lambda"_s),
			$of("\'\'_\'\' used as an identifier\n(use of \'\'_\'\' as an identifier is forbidden for lambda parameters)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.lambda"_s),
			$of("lambda expression not expected here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.mref"_s),
			$of("method reference not expected here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.type"_s),
			$of("unexpected type\nrequired: {0}\nfound:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unmatched.quote"_s),
			$of("unmatched quote in environment variable {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unnamed.pkg.not.allowed.named.modules"_s),
			$of("unnamed package is not allowed in named modules"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreachable.stmt"_s),
			$of("unreachable statement"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.default.constructor"_s),
			$of("unreported exception {0} in default constructor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.implicit.close"_s),
			$of("unreported exception {0}; must be caught or declared to be thrown\nexception thrown from implicit call to close() on resource variable \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.need.to.catch.or.throw"_s),
			$of("unreported exception {0}; must be caught or declared to be thrown"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unsupported.encoding"_s),
			$of("unsupported encoding: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unsupported.release.version"_s),
			$of("release version {0} not supported"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.already.be.assigned"_s),
			$of("variable {0} might already have been assigned"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.be.assigned.in.loop"_s),
			$of("variable {0} might be assigned in loop"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.not.have.been.initialized"_s),
			$of("variable {0} might not have been initialized"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.not.initialized.in.default.constructor"_s),
			$of("variable {0} not initialized in the default constructor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.and.old.array.syntax"_s),
			$of("legacy array notation not allowed on variable-arity parameter"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.and.receiver"_s),
			$of("varargs notation not allowed on receiver parameter"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.invalid.trustme.anno"_s),
			$of("Invalid {0} annotation. {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.must.be.last"_s),
			$of("varargs parameter must be the last parameter"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.variable.not.allowed"_s),
			$of("variable declaration not allowed here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.void.not.allowed.here"_s),
			$of("\'\'void\'\' type not allowed here"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.warnings.and.werror"_s),
			$of("warnings found and -Werror specified"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.wrong.number.type.args"_s),
			$of("wrong number of type arguments; required {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.wrong.receiver"_s),
			$of("wrong receiver parameter name"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.cant.throw.exception"_s),
			$of("throws clause not allowed for accessor method"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.must.not.be.generic"_s),
			$of("accessor method must not be generic"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.must.not.be.static"_s),
			$of("accessor method must not be static"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.return.type.doesnt.match"_s),
			$of("return type of accessor method {0} must match the type of record component {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anachronistic.module.info"_s),
			$of("module declaration found in version {0}.{1} classfile"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anonymous"_s),
			$of("anonymous"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anonymous.class"_s),
			$of("<anonymous {0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found"_s),
			$of("#{0} applicable method found: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found.1"_s),
			$of("#{0} applicable method found: {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found.2"_s),
			$of("#{0} applicable method found: {1} {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found.3"_s),
			$of("#{0} applicable method found: {1} {2}\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.arg.length.mismatch"_s),
			$of("actual and formal argument lists differ in length"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.file"_s),
			$of("class file is invalid for class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.file.header"_s),
			$of("bad class file: {0}\n{1}\nPlease remove or make sure it appears in the correct subdirectory of the classpath."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.signature"_s),
			$of("bad class signature: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.entry"_s),
			$of("bad constant pool entry in {0}\nexpected {1} at index {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.index"_s),
			$of("bad constant pool index in {0}\nindex {1} is not within pool size {2}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.tag"_s),
			$of("bad constant pool tag: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.tag.at"_s),
			$of("bad constant pool tag: {0} at {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.range"_s),
			$of("constant value \'\'{0}\'\' for {1} is outside the expected range for {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.value"_s),
			$of("bad constant value \'\'{0}\'\' for {1}, expected {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.value.type"_s),
			$of("variable of type \'\'{0}\'\' cannot have a constant value, but has one specified"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.enclosing.class"_s),
			$of("bad enclosing class for {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.enclosing.method"_s),
			$of("bad enclosing method attribute for class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.instance.method.in.unbound.lookup"_s),
			$of("unexpected instance {0} {1} found in unbound lookup"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.intersection.target.for.functional.expr"_s),
			$of("bad intersection type target for lambda or method reference\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.module-info.name"_s),
			$of("bad class name"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.requires.flag"_s),
			$of("bad requires flag: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.runtime.invisible.param.annotations"_s),
			$of("bad RuntimeInvisibleParameterAnnotations attribute: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.signature"_s),
			$of("bad signature: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.source.file.header"_s),
			$of("bad source file: {0}\n{1}\nPlease remove or make sure it appears in the correct subdirectory of the sourcepath."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.static.method.in.bound.lookup"_s),
			$of("unexpected static {0} {1} found in bound lookup"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.static.method.in.unbound.lookup"_s),
			$of("unexpected static {0} {1} found in unbound lookup"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.type.annotation.value"_s),
			$of("bad type annotation target type value: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.base.membership"_s),
			$of("all your base class are belong to us"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bound"_s),
			$of("bound"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical"_s),
			$of("canonical"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.cant.have.return.statement"_s),
			$of("compact constructor must not have return statements"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.contain.explicit.constructor.invocation"_s),
			$of("canonical constructor must not contain explicit constructor invocation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.declare.type.variables"_s),
			$of("canonical constructor must not declare type variables"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.have.stronger.access"_s),
			$of("attempting to assign stronger access privileges; was {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.with.name.mismatch"_s),
			$of("invalid parameter names in canonical constructor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.access.inner.cls.constr"_s),
			$of("cannot access constructor {0}({1})\nan enclosing instance of type {2} is not in scope"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.diamond.1"_s),
			$of("cannot infer type arguments for {0}\nreason: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.symbol"_s),
			$of("{0} {1} in {4} {5} cannot be applied to given types\nrequired: {2}\nfound:    {3}\nreason: {6}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.symbols"_s),
			$of("no suitable {0} found for {1}({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.hide"_s),
			$of("{0} in {1} cannot hide {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.implement"_s),
			$of("{0} in {1} cannot implement {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.override"_s),
			$of("{0} in {1} cannot override {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.args"_s),
			$of("cannot find symbol\nsymbol: {0} {1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.location.args"_s),
			$of("cannot find symbol\nsymbol:   {0} {1}({3})\nlocation: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.location.args.params"_s),
			$of("cannot find symbol\nsymbol:   {0} <{2}>{1}({3})\nlocation: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.modules"_s),
			$of("cannot resolve modules"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.captured.type"_s),
			$of("CAP#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.clashes.with"_s),
			$of("{0} in {1} clashes with {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.file.not.found"_s),
			$of("class file for {0} not found"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.file.wrong.class"_s),
			$of("class file contains wrong class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.is.not.sealed"_s),
			$of("{0} must be sealed"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.compact"_s),
			$of("compact"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.conditional.target.cant.be.void"_s),
			$of("target-type for conditional expression cannot be void"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error"_s),
			$of("{0} error"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error.plural"_s),
			$of("{0} errors"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error.recompile"_s),
			$of("only showing the first {0} errors, of {1} total; use -Xmaxerrs if you would like to see more"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn"_s),
			$of("{0} warning"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn.plural"_s),
			$of("{0} warnings"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn.recompile"_s),
			$of("only showing the first {0} warnings, of {1} total; use -Xmaxwarns if you would like to see more"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.descriptor"_s),
			$of("descriptor: {2} {0}({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.descriptor.throws"_s),
			$of("descriptor: {2} {0}({1}) throws {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond"_s),
			$of("{0}<>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.and.explicit.params"_s),
			$of("cannot use \'\'<>\'\' with explicit type parameters for constructor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.anonymous.methods.implicitly.override"_s),
			$of("(due to <>, every non-private method declared in this anonymous class must override or implement a method from a supertype)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.invalid.arg"_s),
			$of("type argument {0} inferred for {1} is not allowed in this context\ninferred argument is not expressible in the Signature attribute"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.invalid.args"_s),
			$of("type arguments {0} inferred for {1} are not allowed in this context\ninferred arguments are not expressible in the Signature attribute"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.non.generic"_s),
			$of("cannot use \'\'<>\'\' with non-generic class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.doesnt.extend.sealed"_s),
			$of("subclass {0} must extend sealed class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.eq.bounds"_s),
			$of("equality constraints: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.exception.message"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.explicit.param.do.not.conform.to.bounds"_s),
			$of("explicit type argument {0} does not conform to declared bound(s) {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.close"_s),
			$of("Fatal Error: Cannot close compiler resources"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.ctor"_s),
			$of("Fatal Error: Unable to find constructor for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.field"_s),
			$of("Fatal Error: Unable to find field {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.meth"_s),
			$of("Fatal Error: Unable to find method {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.no.java.lang"_s),
			$of("Fatal Error: Unable to find package java.lang in classpath or bootclasspath"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.annotations.after.type.params"_s),
			$of("annotations after method type parameters"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.case.null"_s),
			$of("null in switch cases"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.default.methods"_s),
			$of("default methods"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.diamond"_s),
			$of("diamond operator"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.diamond.and.anon.class"_s),
			$of("\'\'<>\'\' with anonymous inner classes"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.intersection.types.in.cast"_s),
			$of("intersection types"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.lambda"_s),
			$of("lambda expressions"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.method.references"_s),
			$of("method references"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.modules"_s),
			$of("modules"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.multiple.case.labels"_s),
			$of("multiple case labels"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.not.supported.in.source"_s),
			$of("{0} is not supported in -source {1}\n(use -source {2} or higher to enable {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.not.supported.in.source.plural"_s),
			$of("{0} are not supported in -source {1}\n(use -source {2} or higher to enable {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.pattern.matching.instanceof"_s),
			$of("pattern matching in instanceof"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.pattern.switch"_s),
			$of("patterns in switch statements"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.private.intf.methods"_s),
			$of("private interface methods"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.records"_s),
			$of("records"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.reifiable.types.instanceof"_s),
			$of("reifiable types in instanceof"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.repeatable.annotations"_s),
			$of("repeated annotations"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.sealed.classes"_s),
			$of("sealed classes"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.static.intf.method.invoke"_s),
			$of("static interface method invocations"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.static.intf.methods"_s),
			$of("static interface methods"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.switch.expressions"_s),
			$of("switch expressions"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.switch.rules"_s),
			$of("switch rules"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.text.blocks"_s),
			$of("text blocks"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.type.annotations"_s),
			$of("type annotations"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.var.in.try.with.resources"_s),
			$of("variables in try-with-resources"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.var.syntax.in.implicit.lambda"_s),
			$of("var syntax in implicit lambdas"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.does.not.contain.module"_s),
			$of("file does not contain module declaration"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.does.not.contain.package"_s),
			$of("file does not contain package {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.doesnt.contain.class"_s),
			$of("file does not contain class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.guard"_s),
			$of("a guard"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.illegal.signature"_s),
			$of("illegal signature attribute for type {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.illegal.start.of.class.file"_s),
			$of("illegal start of class file"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.implicit.and.explicit.not.allowed"_s),
			$of("cannot mix implicitly-typed and explicitly-typed parameters"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inaccessible.varargs.type"_s),
			$of("formal varargs element type {0} is not accessible from {1} {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inapplicable.method"_s),
			$of("{0} {1}.{2} is not applicable\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.abstract.default"_s),
			$of("{0} {1} inherits abstract and default for {2}({3}) from types {4} and {5}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.abstracts"_s),
			$of("multiple non-overriding abstract methods found in {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.arg.types.in.lambda"_s),
			$of("incompatible parameter types in lambda expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.arg.types.in.mref"_s),
			$of("incompatible parameter types in method reference"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.bounds"_s),
			$of("inference variable {0} has incompatible bounds\n{1}\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.descs.in.functional.intf"_s),
			$of("incompatible function descriptors found in {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.diff.ret"_s),
			$of("both define {0}({1}), but with unrelated return types"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.eq.bounds"_s),
			$of("inference variable {0} has incompatible equality constraints {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.ret.type.in.lambda"_s),
			$of("bad return type in lambda expression\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.ret.type.in.mref"_s),
			$of("bad return type in method reference\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.type.in.conditional"_s),
			$of("bad type in conditional expression\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.type.in.switch.expression"_s),
			$of("bad type in switch expression\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.unrelated.defaults"_s),
			$of("{0} {1} inherits unrelated defaults for {2}({3}) from types {4} and {5}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.upper.bounds"_s),
			$of("inference variable {0} has incompatible upper bounds {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inconvertible.types"_s),
			$of("{0} cannot be converted to {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.arg.length.mismatch"_s),
			$of("cannot infer type-variable(s) {0}\n(actual and formal argument lists differ in length)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.no.conforming.assignment.exists"_s),
			$of("cannot infer type-variable(s) {0}\n(argument mismatch; {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.no.conforming.instance.exists"_s),
			$of("no instance(s) of type variable(s) {0} exist so that {1} conforms to {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.varargs.argument.mismatch"_s),
			$of("cannot infer type-variable(s) {0}\n(varargs mismatch; {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.eq.bounds"_s),
			$of("inferred type does not conform to equality constraint(s)\ninferred: {0}\nequality constraints(s): {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.lower.bounds"_s),
			$of("inferred type does not conform to lower bound(s)\ninferred: {0}\nlower bound(s): {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.upper.bounds"_s),
			$of("inferred type does not conform to upper bound(s)\ninferred: {0}\nupper bound(s): {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inner.cls"_s),
			$of("an inner class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.intersection.type"_s),
			$of("INT#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.default.interface"_s),
			$of("default method found in version {0}.{1} classfile"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.generic.lambda.target"_s),
			$of("invalid functional descriptor for lambda expression\nmethod {0} in {1} {2} is generic"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.mref"_s),
			$of("invalid {0} reference\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.static.interface"_s),
			$of("static method found in version {0}.{1} classfile"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.is.a.type.variable"_s),
			$of("must not include type variables: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.is.duplicated"_s),
			$of("must not contain duplicates: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.annotation"_s),
			$of("@interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.class"_s),
			$of("class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.constructor"_s),
			$of("constructor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.enum"_s),
			$of("enum"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.instance.init"_s),
			$of("instance initializer"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.interface"_s),
			$of("interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.method"_s),
			$of("method"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.module"_s),
			$of("module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.package"_s),
			$of("package"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.record"_s),
			$of("record"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.record.component"_s),
			$of("record component"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.static"_s),
			$of("static"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.static.init"_s),
			$of("static initializer"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.type.variable"_s),
			$of("type variable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.type.variable.bound"_s),
			$of("bound of type variable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.value"_s),
			$of("value"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.variable"_s),
			$of("variable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.lambda"_s),
			$of("a lambda expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local"_s),
			$of("local"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.array.missing.target"_s),
			$of("array initializer needs an explicit target-type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.cant.infer.null"_s),
			$of("variable initializer is \'\'null\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.cant.infer.void"_s),
			$of("variable initializer is \'\'void\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.lambda.missing.target"_s),
			$of("lambda expression needs an explicit target-type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.missing.init"_s),
			$of("cannot use \'\'var\'\' on variable without initializer"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.mref.missing.target"_s),
			$of("method reference needs an explicit target-type"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.self.ref"_s),
			$of("cannot use \'\'var\'\' on self-referencing variable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.location"_s),
			$of("{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.location.1"_s),
			$of("{0} {1} of type {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.module_path"_s),
			$of("application module path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.module_source_path"_s),
			$of("module source path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.system_modules"_s),
			$of("system modules"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.upgrade_module_path"_s),
			$of("upgrade module path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.lower.bounds"_s),
			$of("lower bounds: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.malformed.vararg.method"_s),
			$of("class file contains malformed variable arity method: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.method.descriptor.invalid"_s),
			$of("method descriptor invalid for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.method.must.be.public"_s),
			$of("accessor method must be public"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.missing.ret.val"_s),
			$of("missing return value"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.info.definition.expected"_s),
			$of("module-info definition expected"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.info.invalid.super.class"_s),
			$of("module-info with invalid super class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.name.mismatch"_s),
			$of("module name {0} does not match expected name {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.non.zero.opens"_s),
			$of("open module {0} has non-zero opens_count"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.mref.infer.and.explicit.params"_s),
			$of("cannot use raw constructor reference with explicit type parameters for constructor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.must.not.be.same.class"_s),
			$of("illegal self-reference in permits clause"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.must.not.be.supertype"_s),
			$of("illegal reference to supertype {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.abstracts"_s),
			$of("no abstract method found in {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.args"_s),
			$of("no arguments"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.conforming.assignment.exists"_s),
			$of("argument mismatch; {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.suitable.functional.intf.inst"_s),
			$of("cannot infer functional interface descriptor for {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.unique.maximal.instance.exists"_s),
			$of("no unique maximal instance exists for type variable {0} with upper bounds {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.unique.minimal.instance.exists"_s),
			$of("no unique minimal instance exists for type variable {0} with lower bounds {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.non.static"_s),
			$of("non-static"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.a.functional.intf"_s),
			$of("{0} is not a functional interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.a.functional.intf.1"_s),
			$of("{0} is not a functional interface\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.an.intf.component"_s),
			$of("component type {0} is not an interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.applicable.method.found"_s),
			$of("#{0} not applicable method found: {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.class.intf.cant.access"_s),
			$of("{1}.{0} is defined in an inaccessible class or interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.class.intf.cant.access.reason"_s),
			$of("{1}.{0} in package {2} is not accessible\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read"_s),
			$of("package {1} is declared in module {2}, but module {0} does not read it"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read.from.unnamed"_s),
			$of("package {0} is declared in module {1}, which is not in the module graph"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read.unnamed"_s),
			$of("package {0} is declared in the unnamed module, but module {1} does not read it"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported"_s),
			$of("package {0} is declared in module {1}, which does not export it"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.from.unnamed"_s),
			$of("package {0} is declared in module {1}, which does not export it"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.to.module"_s),
			$of("package {0} is declared in module {1}, which does not export it to module {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.to.module.from.unnamed"_s),
			$of("package {0} is declared in module {1}, which does not export it to the unnamed module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.package.cant.access"_s),
			$of("{0} is not visible\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.public.cant.access"_s),
			$of("{0} is not public in {1}; cannot be accessed from outside package"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.overridden.default"_s),
			$of("method {0} is overridden in {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.package.not.visible"_s),
			$of("package {0} is not visible\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.partial.inst.sig"_s),
			$of("partially instantiated to: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.possible.loss.of.precision"_s),
			$of("possible lossy conversion from {0} to {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.prob.found.req"_s),
			$of("incompatible types: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.redundant.supertype"_s),
			$of("redundant interface {0} is extended by {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.ref.ambiguous"_s),
			$of("reference to {0} is ambiguous\nboth {1} {2} in {3} and {4} {5} in {6} match"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.report.access"_s),
			$of("{0} has {1} access in {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.resume.abort"_s),
			$of("R)esume, A)bort>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.source.unavailable"_s),
			$of("(source unavailable)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.stat.expr.expected"_s),
			$of("lambda body is not compatible with a void functional interface\n(consider using a block lambda body, or use a statement expression instead)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.static"_s),
			$of("static"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.static.mref.with.targs"_s),
			$of("parameterized qualifier on static method reference"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.switch.expression.target.cant.be.void"_s),
			$of("target-type for switch expression cannot be void"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.synthetic.name.conflict"_s),
			$of("the symbol {0} conflicts with a compiler-synthesized symbol in {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.throws.clause.not.allowed.for.canonical.constructor"_s),
			$of("throws clause not allowed for {0} constructor"_s)
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
			$of("try-with-resources not applicable to variable type\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.captureof"_s),
			$of("capture#{0} of {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.captureof.1"_s),
			$of("capture#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.must.be.identical.to.corresponding.record.component.type"_s),
			$of("type and arity must match that of the corresponding record component"_s)
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
			$of("type parameter {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.array.or.iterable"_s),
			$of("array or java.lang.Iterable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.class"_s),
			$of("class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.class.array"_s),
			$of("class or array"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.exact"_s),
			$of("class or interface without bounds"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.ref"_s),
			$of("reference"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.var"_s),
			$of("{0}#{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unable.to.access.file"_s),
			$of("unable to access file: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unbound"_s),
			$of("unbound"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.assign"_s),
			$of("unchecked conversion"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.cast.to.type"_s),
			$of("unchecked cast"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.clash.with"_s),
			$of("{0} in {1} overrides {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.implement"_s),
			$of("{0} in {1} implements {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.override"_s),
			$of("{0} in {1} overrides {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.undecl.type.var"_s),
			$of("undeclared type variable: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unexpected.const.pool.tag.at"_s),
			$of("unexpected constant pool tag: {0} at {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unexpected.ret.val"_s),
			$of("unexpected return value"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unicode.str.not.supported"_s),
			$of("unicode string in class file not supported"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unnamed.module"_s),
			$of("unnamed module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unnamed.package"_s),
			$of("unnamed package"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.upper.bounds"_s),
			$of("lower bounds: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.user.selected.completion.failure"_s),
			$of("user-selected completion failure by class name"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.var.and.explicit.not.allowed"_s),
			$of("cannot mix \'\'var\'\' and explicitly-typed parameters"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.var.and.implicit.not.allowed"_s),
			$of("cannot mix \'\'var\'\' and implicitly-typed parameters"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.argument.mismatch"_s),
			$of("varargs mismatch; {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.clash.with"_s),
			$of("{0} in {1} overrides {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.implement"_s),
			$of("{0} in {1} implements {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.override"_s),
			$of("{0} in {1} overrides {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.non.varargs.accessor"_s),
			$of("Accessor {0} is not a varargs method."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.non.varargs.meth"_s),
			$of("Method {0} is not a varargs method."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.reifiable.varargs"_s),
			$of("Varargs element type {0} is reifiable."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.virtual.varargs"_s),
			$of("Instance method {0} is neither final nor private."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.virtual.varargs.final.only"_s),
			$of("Instance method {0} is not final."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.checking.attribution"_s),
			$of("[checking {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.classpath"_s),
			$of("[search path for class files: {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.loading"_s),
			$of("[loading {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.parsing.done"_s),
			$of("[parsing completed {0}ms]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.parsing.started"_s),
			$of("[parsing started {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.sourcepath"_s),
			$of("[search path for source files: {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.total"_s),
			$of("[total {0}ms]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.wrote.file"_s),
			$of("[wrote {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.version.not.available"_s),
			$of("(version info not available)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.captured"_s),
			$of("{0} extends {1} super: {2} from capture of {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.captured.1"_s),
			$of("{0} extends {1} from capture of {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.captured"_s),
			$of("where {0} is a fresh type-variable:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.captured.1"_s),
			$of("where {0} are fresh type-variables:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.intersection"_s),
			$of("where {0} is an intersection type:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.intersection.1"_s),
			$of("where {0} are intersection types:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.typevar"_s),
			$of("where {0} is a type-variable:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.typevar.1"_s),
			$of("where {0} are type-variables:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.fresh.typevar"_s),
			$of("{0} extends {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.intersection"_s),
			$of("{0} extends {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.typevar"_s),
			$of("{0} extends {1} declared in {2} {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.typevar.1"_s),
			$of("{0} declared in {2} {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.wrong.number.type.args"_s),
			$of("wrong number of type arguments; required {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.wrong.version"_s),
			$of("class file has wrong version {0}.{1}, should be {2}.{3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.x.print.processor.info"_s),
			$of("Processor {0} matches {1} and returns {2}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.x.print.rounds"_s),
			$of("Round {0}:\n\tinput files: {1}\n\tannotations: {2}\n\tlast round: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.compressed.diags"_s),
			$of("Some messages have been simplified; recompile with -Xdiags:verbose to get full output"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deferred.method.inst"_s),
			$of("Deferred instantiation of method {0}\ninstantiated signature: {1}\ntarget-type: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.filename"_s),
			$of("{0} uses or overrides a deprecated API."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.filename.additional"_s),
			$of("{0} has additional uses or overrides of a deprecated API."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.plural"_s),
			$of("Some input files use or override a deprecated API."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.plural.additional"_s),
			$of("Some input files additionally use or override a deprecated API."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.recompile"_s),
			$of("Recompile with -Xlint:deprecation for details."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.lambda.stat"_s),
			$of("Translating lambda expression\nalternate metafactory = {0}\nsynthetic method = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.method.ref.search.results.multi"_s),
			$of("{0} search results for {1}, with most specific {2}\napplicable candidates:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.mref.stat"_s),
			$of("Translating method reference\nalternate metafactory = {0}\n"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.mref.stat.1"_s),
			$of("Translating method reference\nalternate metafactory = {0}\nbridge method = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.multiple.elements"_s),
			$of("Multiple elements named \'\'{1}\'\' in modules \'\'{2}\'\' were found by javax.lang.model.util.Elements.{0}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.note"_s),
			$of("Note: "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.filename"_s),
			$of("{0} uses preview features of Java SE {1}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.filename.additional"_s),
			$of("{0} has additional uses of preview features of Java SE {1}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.plural"_s),
			$of("Some input files use preview features of Java SE {0}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.plural.additional"_s),
			$of("Some input files additionally use preview features of Java SE {0}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.recompile"_s),
			$of("Recompile with -Xlint:preview for details."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.filename"_s),
			$of("{0} uses or overrides a deprecated API that is marked for removal."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.filename.additional"_s),
			$of("{0} has additional uses or overrides of a deprecated API that is marked for removal."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.plural"_s),
			$of("Some input files use or override a deprecated API that is marked for removal."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.plural.additional"_s),
			$of("Some input files additionally use or override a deprecated API that is marked for removal."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.recompile"_s),
			$of("Recompile with -Xlint:removal for details."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.filename"_s),
			$of("{0} uses unchecked or unsafe operations."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.filename.additional"_s),
			$of("{0} has additional unchecked or unsafe operations."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.plural"_s),
			$of("Some input files use unchecked or unsafe operations."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.plural.additional"_s),
			$of("Some input files additionally use unchecked or unsafe operations."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.recompile"_s),
			$of("Recompile with -Xlint:unchecked for details."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.l2m.deduplicate"_s),
			$of("deduplicating lambda implementation method {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.resolve.multi"_s),
			$of("resolving method {0} in type {1} to candidate {2}\nphase: {3}\nwith actuals: {4}\nwith type-args: {5}\ncandidates:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.resolve.multi.1"_s),
			$of("erroneous resolution for method {0} in type {1}\nphase: {3}\nwith actuals: {4}\nwith type-args: {5}\ncandidates:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.access.to.member.from.serializable.element"_s),
			$of("access to member {0} from serializable element can be publicly accessible to untrusted code"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.access.to.member.from.serializable.lambda"_s),
			$of("access to member {0} from serializable lambda can be publicly accessible to untrusted code"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.addopens.ignored"_s),
			$of("--add-opens has no effect at compile time"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.annotation.method.not.found"_s),
			$of("Cannot find annotation method \'\'{1}()\'\' in type \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.annotation.method.not.found.reason"_s),
			$of("Cannot find annotation method \'\'{1}()\'\' in type \'\'{0}\'\': {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.attempt.to.synchronize.on.instance.of.value.based.class"_s),
			$of("attempt to synchronize on an instance of a value-based class"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.auxiliary.class.accessed.from.outside.of.its.source.file"_s),
			$of("auxiliary class {0} in {1} should not be accessed from outside its own source file"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.bad.name.for.option"_s),
			$of("bad name in value for {0} option: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.big.major.version"_s),
			$of("{0}: major version {1} is newer than {2}, the highest major version supported by this compiler.\nIt is recommended that the compiler be upgraded."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.constant.SVUID"_s),
			$of("serialVersionUID must be constant in class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.declared.using.preview"_s),
			$of("{0} {1} is declared using a preview feature, which may be removed in a future release."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.deprecated.annotation.has.no.effect"_s),
			$of("@Deprecated annotation has no effect on this {0} declaration"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.diamond.redundant.args"_s),
			$of("Redundant type arguments in new expression (use diamond operator instead)."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.dir.path.element.not.directory"_s),
			$of("bad path element \"{0}\": not a directory"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.dir.path.element.not.found"_s),
			$of("bad path element \"{0}\": no such directory"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.div.zero"_s),
			$of("division by zero"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.doclint.not.available"_s),
			$of("No service provider for doclint is available"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.empty.if"_s),
			$of("empty statement after if"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.file.from.future"_s),
			$of("Modification date is in the future for file {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.finally.cannot.complete"_s),
			$of("finally clause cannot complete normally"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.forward.ref"_s),
			$of("reference to variable \'\'{0}\'\' before it has been initialized"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.future.attr"_s),
			$of("{0} attribute introduced in version {1}.{2} class files is ignored in version {3}.{4} class files"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated"_s),
			$of("{0} in {1} has been deprecated"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.for.removal"_s),
			$of("{0} in {1} has been deprecated and marked for removal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.for.removal.module"_s),
			$of("module {0} has been deprecated and marked for removal"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.module"_s),
			$of("module {0} has been deprecated"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.illegal.char.for.encoding"_s),
			$of("unmappable character for encoding {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.illegal.ref.to.restricted.type"_s),
			$of("illegal reference to restricted type \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.improper.SVUID"_s),
			$of("serialVersionUID must be declared static final in class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.inconsistent.white.space.indentation"_s),
			$of("inconsistent white space indentation"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.incubating.modules"_s),
			$of("using incubating module(s): {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.inexact.non-varargs.call"_s),
			$of("non-varargs call of varargs method with inexact argument type for last parameter;\ncast to {0} for a varargs call\ncast to {1} for a non-varargs call and to suppress this warning"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.archive.file"_s),
			$of("Unexpected file on path: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.path"_s),
			$of("Invalid filename: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.yield"_s),
			$of("\'\'yield\'\' may become a restricted identifier in a future release\n(to invoke a method called yield, qualify the yield with a receiver or type name)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.is.preview"_s),
			$of("{0} is a preview API and may be removed in a future release."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.is.preview.reflective"_s),
			$of("{0} is a reflective preview API and may be removed in a future release."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible"_s),
			$of("{0} {1} in module {2} is not accessible to clients that require this module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.not.required.transitive"_s),
			$of("{0} {1} in module {2} is not indirectly exported using \'requires transitive\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.unexported"_s),
			$of("{0} {1} in module {2} is not exported"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.unexported.qualified"_s),
			$of("{0} {1} in module {2} may not be visible to all clients that require this module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.lintOption"_s),
			$of("[{0}] "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.local.redundant.type"_s),
			$of("Redundant type for local variable (replace explicit type with \'\'var\'\')."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.locn.unknown.file.on.module.path"_s),
			$of("unknown file on module path: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.long.SVUID"_s),
			$of("serialVersionUID must be of type long in class {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.method.redundant.typeargs"_s),
			$of("Redundant type arguments in method call."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing-explicit-ctor"_s),
			$of("class {0} in exported package {1} declares no explicit constructors, thereby exposing a default constructor to clients of module {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing.SVUID"_s),
			$of("serializable class {0} has no definition of serialVersionUID"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing.deprecated.annotation"_s),
			$of("deprecated item is not annotated with @Deprecated"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.module.for.option.not.found"_s),
			$of("module name in {0} option not found: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.module.not.found"_s),
			$of("module not found: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.source"_s),
			$of("source value {0} is obsolete and will be removed in a future release"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.suppression"_s),
			$of("To suppress warnings about obsolete options, use -Xlint:-options."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.target"_s),
			$of("target value {0} is obsolete and will be removed in a future release"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.parameters.unsupported"_s),
			$of("-parameters is not supported for target value {0}. Use {1} or later."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.outdir.is.in.exploded.module"_s),
			$of("the output directory is within an exploded module: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.bridge"_s),
			$of("{0}; overridden method is a bridge method"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.equals.but.not.hashcode"_s),
			$of("Class {0} overrides equals, but neither it nor any superclass overrides hashCode method"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.unchecked.ret"_s),
			$of("{0}\nreturn type requires unchecked conversion from {1} to {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.unchecked.thrown"_s),
			$of("{0}\noverridden method does not throw {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.varargs.extra"_s),
			$of("{0}; overriding method is missing \'\'...\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.varargs.missing"_s),
			$of("{0}; overridden method has no \'\'...\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.package.empty.or.not.found"_s),
			$of("package is empty or does not exist: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.path.element.not.found"_s),
			$of("bad path element \"{0}\": no such file or directory"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.pkg-info.already.seen"_s),
			$of("a package-info.java file has already been seen for package {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.poor.choice.for.module.name"_s),
			$of("module name component {0} should avoid terminal digits"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.position.overflow"_s),
			$of("Position encoding overflows at line {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.possible.fall-through.into.case"_s),
			$of("possible fall-through into case"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.potential.lambda.found"_s),
			$of("This anonymous inner class creation can be turned into a lambda expression."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.potentially.ambiguous.overload"_s),
			$of("{0} in {1} is potentially ambiguous with {2} in {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use"_s),
			$of("{0} is a preview feature and may be removed in a future release."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use.classfile"_s),
			$of("class file for {0} uses preview features of Java SE {1}."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use.plural"_s),
			$of("{0} are a preview feature and may be removed in a future release."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.prob.found.req"_s),
			$of("{0}\nrequired: {2}\nfound:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.annotations.without.processors"_s),
			$of("No processor claimed any of these annotations: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.duplicate.option.name"_s),
			$of("Duplicate supported option \'\'{0}\'\' returned by annotation processor \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.duplicate.supported.annotation"_s),
			$of("Duplicate supported annotation type \'\'{0}\'\' returned by annotation processor \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.file.create.last.round"_s),
			$of("File for type \'\'{0}\'\' created in the last round will not be subject to annotation processing."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.file.reopening"_s),
			$of("Attempt to create a file for \'\'{0}\'\' multiple times"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.illegal.file.name"_s),
			$of("Cannot create file for illegal name \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.malformed.supported.string"_s),
			$of("Malformed string \'\'{0}\'\' for a supported annotation type returned by processor \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.package.does.not.exist"_s),
			$of("package {0} does not exist"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.proc-only.requested.no.procs"_s),
			$of("Annotation processing without compilation requested but no processors were found."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.processor.incompatible.source.version"_s),
			$of("Supported source version \'\'{0}\'\' from annotation processor \'\'{1}\'\' less than -source \'\'{2}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.redundant.types.with.wildcard"_s),
			$of("Annotation processor \'\'{0}\'\' redundantly supports both \'\'*\'\' and other annotation types"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.suspicious.class.name"_s),
			$of("Creating file for a type whose name ends in {1}: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.type.already.exists"_s),
			$of("A file for type \'\'{0}\'\' already exists on the sourcepath or classpath"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.type.recreate"_s),
			$of("Attempt to create a file for type \'\'{0}\'\' multiple times"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.unclosed.type.files"_s),
			$of("Unclosed files for the types \'\'{0}\'\'; these types will not undergo annotation processing"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.unmatched.processor.options"_s),
			$of("The following options were not recognized by any processor: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.use.implicit"_s),
			$of("Implicitly compiled files were not subject to annotation processing.\nUse -implicit to specify a policy for implicit compilation."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.use.proc.or.implicit"_s),
			$of("Implicitly compiled files were not subject to annotation processing.\nUse -proc:none to disable annotation processing or -implicit to specify a policy for implicit compilation."_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.profile.target.conflict"_s),
			$of("profile {0} is not valid for target release {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.raw.class.use"_s),
			$of("found raw type: {0}\nmissing type arguments for generic class {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.redundant.cast"_s),
			$of("redundant cast to {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.requires.automatic"_s),
			$of("requires directive for an automatic module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.requires.transitive.automatic"_s),
			$of("requires transitive directive for an automatic module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.restricted.type.not.allowed"_s),
			$of("as of release {1}, \'\'{0}\'\' is a restricted type name and cannot be used for type declarations or as the element type of an array"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.restricted.type.not.allowed.preview"_s),
			$of("\'\'{0}\'\' may become a restricted type name in a future release and may be unusable for type declarations or as the element type of an array"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.self.ref"_s),
			$of("self-reference in initializer of variable \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.service.provided.but.not.exported.or.used"_s),
			$of("service interface provided but not exported or used"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.no.bootclasspath"_s),
			$of("bootstrap class path not set in conjunction with -source {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.no.system.modules.path"_s),
			$of("system modules path not set in conjunction with -source {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.target.conflict"_s),
			$of("source release {0} requires target release {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.static.not.qualified.by.type"_s),
			$of("static {0} should be qualified by type name, {1}, instead of by an expression"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.strictfp"_s),
			$of("as of release 17, all floating-point expressions are evaluated strictly and \'\'strictfp\'\' is not required"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.sun.proprietary"_s),
			$of("{0} is internal proprietary API and may be removed in a future release"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.target.default.source.conflict"_s),
			$of("target release {0} conflicts with default source release {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.trailing.white.space.will.be.removed"_s),
			$of("trailing white space will be removed"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.explicit.close.call"_s),
			$of("explicit call to close() on an auto-closeable resource"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.resource.not.referenced"_s),
			$of("auto-closeable resource {0} is never referenced in body of corresponding try statement"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.resource.throws.interrupted.exc"_s),
			$of("auto-closeable resource {0} has a member method close() that could throw InterruptedException"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.assign"_s),
			$of("unchecked assignment: {0} to {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.assign.to.var"_s),
			$of("unchecked assignment to variable {0} as member of raw type {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.call.mbr.of.raw.type"_s),
			$of("unchecked call to {0} as a member of the raw type {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.cast.to.type"_s),
			$of("unchecked cast to type {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.generic.array.creation"_s),
			$of("unchecked generic array creation for varargs parameter of type {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.meth.invocation.applied"_s),
			$of("unchecked method invocation: {0} {1} in {4} {5} is applied to given types\nrequired: {2}\nfound:    {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.varargs.non.reifiable.type"_s),
			$of("Possible heap pollution from parameterized vararg type {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.underscore.as.identifier"_s),
			$of("as of release 9, \'\'_\'\' is a keyword, and may not be used as an identifier"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unexpected.archive.file"_s),
			$of("Unexpected extension for archive file: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unknown.enum.constant"_s),
			$of("unknown enum constant {1}.{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unknown.enum.constant.reason"_s),
			$of("unknown enum constant {1}.{2}\nreason: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unreachable.catch"_s),
			$of("unreachable catch clause\nthrown type {0} has already been caught"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unreachable.catch.1"_s),
			$of("unreachable catch clause\nthrown types {0} have already been caught"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.varargs.redundant.trustme.anno"_s),
			$of("Redundant {0} annotation. {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.varargs.unsafe.use.varargs.param"_s),
			$of("Varargs method could cause heap pollution from non-reifiable varargs parameter {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.warning"_s),
			$of("warning: "_s)
		})
	});
}

compiler::compiler() {
}

$Class* compiler::load$($String* name, bool initialize) {
	$loadClass(compiler, name, initialize, &_compiler_ClassInfo_, allocate$compiler);
	return class$;
}

$Class* compiler::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com