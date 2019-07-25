type userEvent;

[@bs.deriving abstract]
type userOptions = {
  [@bs.optional]
  allAtOnce: bool,
  [@bs.optional]
  delay: int,
};

[@bs.module "@testing-library/user-event"]
external userEvent: userEvent = "default";

[@bs.send] external click: (userEvent, Dom.element) => unit = "click";
[@bs.send]
external typeText:
  (userEvent, Dom.element, string, userOptions) => Js.Promise.t(unit) =
  "type";
[@bs.send] external dblClick: (userEvent, Dom.element) => unit = "dblClick";
[@bs.send]
external selectOne: (userEvent, Dom.element, string) => unit = "selectOptions";
[@bs.send]
external selectMany: (userEvent, Dom.element, array(string)) => unit =
  "selectOptions";