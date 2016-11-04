var React = require('react');
var ReactDOM = require('react-dom');
var ListManager = require('./components/ListManager.jsx');

ReactDOM.render(<ListManager title="Ingredients" headingColor="#DF013A" />, document.getElementById('ingredients'));
ReactDOM.render(<ListManager title="Courses" headingColor="#FF8000" />, document.getElementById('Planned'));
ReactDOM.render(<ListManager title="Teams" headingColor="#5882FA"/>, document.getElementById('AFC'));
