type userEvent;

type userOptions;

let click: (userEvent, Dom.element) => unit;
let typeText:
  (userEvent, Dom.element, string, userOptions) => Js.Promise.t(unit);
let dblClick: (userEvent, Dom.element) => unit;
let selectOne: (userEvent, Dom.element, string) => unit;
let selectMany: (userEvent, Dom.element, array(string)) => unit;