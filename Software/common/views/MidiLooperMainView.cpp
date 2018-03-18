//
// Created by Nicholas Newdigate on 17/03/2018.
//

#include "MidiLooperMainView.h"

void MidiLooperMainView::update(unsigned long millis) {
    //_tft->print("*");
    _recordingIndicator.update(millis);

    if (_topPianoDisplay.displayNeedsUpdating())
        _topPianoDisplay.drawPiano();

    if (_bottomPianoDisplay.displayNeedsUpdating())
        _bottomPianoDisplay.drawPiano();

    _loopSequencer->tick(millis);
}