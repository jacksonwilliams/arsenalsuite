#!/usr/bin/env python

"""PyQt4 port of the script/helloscript example from Qt v4.x"""

import sys
from PyQt4 import QtGui, QtScript


app = QtGui.QApplication(sys.argv)

engine = QtScript.QScriptEngine()

button = QtGui.QPushButton()
scriptButton = engine.newQObject(button)
engine.globalObject().setProperty('button', scriptButton)

engine.evaluate("button.text = 'Hello World!'")
engine.evaluate("button.styleSheet = 'font-style: italic'")
engine.evaluate("button.show()")

sys.exit(app.exec_())
