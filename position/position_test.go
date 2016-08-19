package position

import (
	"strconv"
	"testing"
)

// ===== Tests =====

// TestPrettyPrint makes sure that each Position
// is rendered as the appropriate string
func TestPrettyPrint(t *testing.T) {
	for col := 0; col < 8; col++ {
		for row := 0; row < 8; row++ {
			pos := &Position{Col: col, Row: row}
			result, err := pos.PrettyPrint()
			if err != nil {
				t.Error(err)
			}
			if len(result) != 2 {
				t.Errorf("Position string \"%s\" is not length 2 (len=%d)", result, len(result))
			}
			if result[0] != byte('a'+col) {
				t.Errorf("PrettyPrint column \"%s\" != (%#U = 'a' + %d)", result[0], 'a'+col, col)
			}
			if result[1] != byte(strconv.Itoa(row + 1)[0]) {
				t.Errorf("PrettyPrint row %#U != %d", result[1], row+1)
			}
		}
	}
}
