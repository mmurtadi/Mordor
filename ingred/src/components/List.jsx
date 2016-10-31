var React = require('react');
var ListItem = require('./ListItem.jsx');

var List = React.createClass({
  render: functioin() {

    var createItem = funciton(text, index) {
      return <ListItem key={index + text} text={text} />;
    };

    return (<ul>{this.props.items.map(createItem)}</ul>);
  }
});

module.exports = List;
