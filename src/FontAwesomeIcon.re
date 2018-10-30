[@bs.module "@fortawesome/react-fontawesome"] external reactClass: ReasonReact.reactClass = "FontAwesomeIcon";

/*
 [%bs.raw {|require("@fortawesome/fontawesome-svg-core/styles.css")|}];
 */

/*
 // Doing this in _app.js for now
 import {config, library as fontawesome} from "@fortawesome/fontawesome-svg-core";
 import "@fortawesome/fontawesome-svg-core/styles.css";
 config.autoAddCss = false;
 fontawesome.add(faComments);
 */

[@bs.obj]
external makeProps:
  (~icon: array(string), ~id: string=?, ~className: string=?, ~style: ReactDOMRe.Style.t=?, unit) => _ =
  "";

let make = (~icon, ~id=?, ~className=?, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=makeProps(~icon=Array.of_list(icon), ~id?, ~className?, ~style?, ()),
    children,
  );
