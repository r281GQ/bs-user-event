type t;

[@bs.deriving abstract]
type userOptions = {
  [@bs.optional]
  allAtOnce: bool,
  [@bs.optional]
  delay: int,
};

[@bs.module "@testing-library/user-event"] external userEvent: t = "default";

[@bs.send] external click: (t, Dom.element) => unit = "click";
[@bs.send]
external typeText: (t, Dom.element, string, userOptions) => Js.Promise.t(unit) =
  "type";
[@bs.send] external dblClick: (t, Dom.element) => unit = "dblClick";
[@bs.send]
external selectOne: (t, Dom.element, string) => unit = "selectOptions";
[@bs.send]
external selectMany: (t, Dom.element, array(string)) => unit =
  "selectOptions";