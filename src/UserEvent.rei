type t;

type userOptions;

let click: (t, Dom.element) => unit;
let typeText: (t, Dom.element, string, userOptions) => Js.Promise.t(unit);
let dblClick: (t, Dom.element) => unit;
let selectOne: (t, Dom.element, string) => unit;
let selectMany: (t, Dom.element, array(string)) => unit;