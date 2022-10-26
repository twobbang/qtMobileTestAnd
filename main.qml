import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    id: w1
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    signal onBtnClickSignal();

    Button {
        id: myButton
        x: 150
        y: 397
        width: 150
        height: 32
        text: "Click me"

        //onClicked: w1.onBtnClickSignal();
        //onClicked: facedetectClass.callMeSlot();

        onClicked:
        {
            w1.onBtnClickSignal();
            myTextField.text = "Test"
        }

    }

    TextField {
        id: myTextField
        x: 150
        y: 192
        width: 150
        height: 20
        font.pointSize: 11
        placeholderText: qsTr("")
    }
}
