package position

import (
	"fmt"
	"strconv"
	"strings"
)

// Position represents the position on the board,
// which can be shown either as numbers, or
// as column letter and row number
type Position struct {
	Col, Row int
}

// ===== Public functions =====

// PrettyPrint returns a string representation
// of a position in the format, for example, of "a3"
func (p *Position) PrettyPrint() (string, error) {
	colLetter, err := columnLetter(p.Col)
	if err != nil {
		return "", err
	}
	return strings.Join([]string{colLetter, strconv.Itoa(p.Row + 1)}, ""), nil
}

// ===== Private functions =====

// columnLetter returns the letter corresponding to the
// given column index, or an error if the index is out
// of range
func columnLetter(col int) (string, error) {
	if letter, ok := columnLetterMap()[col]; ok {
		return letter, nil
	} else {
		return "", fmt.Errorf("column index %d out of range 0-7", col)
	}
}

// columnLetterMap returns a map from 0-based column indices
// to the corresponding column letters
func columnLetterMap() map[int]string {
	return map[int]string{
		0: "a",
		1: "b",
		2: "c",
		3: "d",
		4: "e",
		5: "f",
		6: "g",
		7: "h",
	}
}
